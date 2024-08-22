// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCAPABILITIES_H
#define VCCAPABILITIES_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface VCCapabilities : NSObject <NSCoding>



@property unsigned int actualAudioCodec; // ivar: actualAudioCodec
@property unsigned int actualVideoCodec; // ivar: actualVideoCodec
@property int deviceRole; // ivar: deviceRole
@property BOOL isAudioEnabled; // ivar: isAudioEnabled
@property BOOL isAudioPausedToStart; // ivar: isAudioPausedToStart
@property BOOL isDTLSEnabled; // ivar: isDTLSEnabled
@property BOOL isDuplexAudioOnly; // ivar: isDuplexAudioOnly
@property BOOL isDuplexVideoOnly; // ivar: isDuplexVideoOnly
@property BOOL isHalfDuplexAudio; // ivar: isHalfDuplexAudio
@property BOOL isKeyExchangeEnabled; // ivar: isKeyExchangeEnabled
@property BOOL isRelayEnabled; // ivar: isRelayEnabled
@property BOOL isRelayForced; // ivar: isRelayForced
@property BOOL isVideoEnabled; // ivar: isVideoEnabled
@property BOOL isVideoPausedToStart; // ivar: isVideoPausedToStart
@property BOOL isVideoSourceScreen; // ivar: isVideoSourceScreen
@property unsigned int preferredAudioCodec; // ivar: preferredAudioCodec
@property unsigned int preferredVideoCodec; // ivar: preferredVideoCodec
@property BOOL requiresWifi; // ivar: requiresWifi


+(id)AudioOnlyVCCapabilities;
+(id)DataOnlyVCCapabilities;
+(id)VideoOnlyVCCapabilities;
+(id)screenSharingVCCapabilities;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedDictionary:(id)arg0 ;
-(id)newEncodedDictionary;
-(void)decodeFromNSDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif