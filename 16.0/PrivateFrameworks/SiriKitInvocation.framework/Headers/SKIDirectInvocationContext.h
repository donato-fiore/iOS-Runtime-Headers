// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKIDIRECTINVOCATIONCONTEXT_H
#define SKIDIRECTINVOCATIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKIDirectInvocationContext : NSObject

@property (nonatomic, getter=isEyesFree) BOOL eyesFree; // ivar: _eyesFree
@property (copy, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (copy, nonatomic) NSString *interactionType; // ivar: _interactionType
@property (copy, nonatomic) NSString *responseMode; // ivar: _responseMode
@property (nonatomic, getter=isTextToSpeechEnabled) BOOL textToSpeechEnabled; // ivar: _textToSpeechEnabled
@property (nonatomic, getter=isVoiceTriggerEnabled) BOOL voiceTriggerEnabled; // ivar: _voiceTriggerEnabled


+(id)contextForAnnounceNotifications;
+(id)contextForCarPlayDirectAction;
-(id)init;


@end


#endif