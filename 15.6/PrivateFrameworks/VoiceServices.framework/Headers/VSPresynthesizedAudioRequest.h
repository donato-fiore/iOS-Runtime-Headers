// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSPRESYNTHESIZEDAUDIOREQUEST_H
#define VSPRESYNTHESIZEDAUDIOREQUEST_H

@class NSUUID, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *accessoryID; // ivar: _accessoryID
@property (readonly, copy, nonatomic) NSData *audioData; // ivar: _audioData
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (copy, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (readonly, nonatomic) AudioStreamBasicDescription decoderStreamDescription; // ivar: _decoderStreamDescription
@property (nonatomic) BOOL enqueue; // ivar: _enqueue
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger pcmDataSize; // ivar: _pcmDataSize
@property (readonly, nonatomic) AudioStreamBasicDescription playerStreamDescription; // ivar: _playerStreamDescription
@property (nonatomic) NSUInteger requestCreatedTimestamp; // ivar: _requestCreatedTimestamp
@property (retain, nonatomic) NSUUID *siriRequestId; // ivar: _siriRequestId
@property (copy, nonatomic) id *stopHandler; // ivar: _stopHandler
@property (retain, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)canLogRequestText;
-(BOOL)hasValidAudio;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAudioData:(id)arg0 decoderStreamDescription:(struct AudioStreamBasicDescription )arg1 playerStreamDescription:(struct AudioStreamBasicDescription )arg2 ;
-(id)initWithAudioData:(id)arg0 playerStreamDescription:(struct AudioStreamBasicDescription )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)logText;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif