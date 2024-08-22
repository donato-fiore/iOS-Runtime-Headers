// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSPEECHPARAMETERS_H
#define AFSPEECHPARAMETERS_H

@class NSString, NSArray, CLLocation, NSURL, NSDictionary, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechParameters : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) BOOL censorSpeech; // ivar: _censorSpeech
@property (readonly, nonatomic) BOOL detectUtterances; // ivar: _detectUtterances
@property (readonly, nonatomic) BOOL farField; // ivar: _farField
@property (readonly, copy, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, copy, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (readonly, copy, nonatomic) NSArray *jitGrammar; // ivar: _jitGrammar
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, copy, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, copy, nonatomic) NSArray *loggingContext; // ivar: _loggingContext
@property (readonly, nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL; // ivar: _modelOverrideURL
@property (readonly, nonatomic) BOOL narrowband; // ivar: _narrowband
@property (readonly, copy, nonatomic) NSURL *originalAudioFileURL; // ivar: _originalAudioFileURL
@property (readonly, copy, nonatomic) NSDictionary *overrides; // ivar: _overrides
@property (readonly, copy, nonatomic) NSData *profile; // ivar: _profile
@property (readonly, nonatomic) BOOL secureOfflineOnly; // ivar: _secureOfflineOnly
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice; // ivar: _shouldStoreAudioOnDevice
@property (readonly, copy, nonatomic) NSString *task; // ivar: _task


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 interactionIdentifier:(id)arg1 task:(id)arg2 loggingContext:(id)arg3 applicationName:(id)arg4 profile:(id)arg5 overrides:(id)arg6 modelOverrideURL:(id)arg7 originalAudioFileURL:(id)arg8 narrowband:(BOOL)arg9 detectUtterances:(BOOL)arg10 censorSpeech:(BOOL)arg11 farField:(BOOL)arg12 secureOfflineOnly:(BOOL)arg13 shouldStoreAudioOnDevice:(BOOL)arg14 maximumRecognitionDuration:(CGFloat)arg15 inputOrigin:(id)arg16 location:(id)arg17 jitGrammar:(id)arg18 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif