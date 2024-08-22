// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSPEECHREQUEST_H
#define VSSPEECHREQUEST_H

@class NSUUID, NSAttributedString, NSString, NSDictionary, NSArray, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface VSSpeechRequest : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSUUID *accessoryID; // ivar: _accessoryID
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) BOOL canUseServerTTS; // ivar: _canUseServerTTS
@property (copy, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (copy, nonatomic) NSDictionary *contextInfo; // ivar: _contextInfo
@property (retain, nonatomic) NSArray *customResourceURLs; // ivar: _customResourceURLs
@property (nonatomic) BOOL disableCompactVoiceFallback; // ivar: _disableCompactVoiceFallback
@property (nonatomic) BOOL disableDeviceRacing; // ivar: _disableDeviceRacing
@property (nonatomic) NSInteger footprint; // ivar: _footprint
@property (nonatomic) BOOL forceServerTTS; // ivar: _forceServerTTS
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (copy, nonatomic) NSURL *outputPath; // ivar: _outputPath
@property (copy, nonatomic) id *pauseHandler; // ivar: _pauseHandler
@property (nonatomic) CGFloat pitch; // ivar: _pitch
@property (nonatomic) NSInteger pointer; // ivar: _pointer
@property (nonatomic) CGFloat rate; // ivar: _rate
@property (nonatomic) NSUInteger requestCreatedTimestamp; // ivar: _requestCreatedTimestamp
@property (copy, nonatomic) NSURL *resourceListURL; // ivar: _resourceListURL
@property (copy, nonatomic) NSURL *resourceSearchPathURL; // ivar: _resourceSearchPathURL
@property (nonatomic) BOOL retryDeviceOnNetworkStall; // ivar: _retryDeviceOnNetworkStall
@property (nonatomic) BOOL shouldCache; // ivar: _shouldCache
@property (nonatomic) BOOL shouldStreamAudioData; // ivar: _shouldStreamAudioData
@property (nonatomic) BOOL shouldWaitCurrentSpeaking; // ivar: _shouldWaitCurrentSpeaking
@property (nonatomic) BOOL shouldWhisper; // ivar: _shouldWhisper
@property (retain, nonatomic) NSUUID *siriRequestId; // ivar: _siriRequestId
@property (copy, nonatomic) id *stopHandler; // ivar: _stopHandler
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *utterance; // ivar: _utterance
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName
@property (nonatomic) NSInteger voiceType; // ivar: _voiceType
@property (nonatomic) CGFloat volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
-(BOOL)canLogRequestText;
-(BOOL)isSimilarTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)logText;
-(id)logUtterance;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif