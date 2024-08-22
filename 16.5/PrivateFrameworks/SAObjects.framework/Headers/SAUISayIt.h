// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUISAYIT_H
#define SAUISAYIT_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"
#import "SAUIAudioData.h"
#import "SAUIListenAfterSpeakingBehavior.h"

@interface SAUISayIt : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAudioData *audioData;
@property (copy, nonatomic) NSString *audioDataUrl;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) NSObject<SAAceSerializable> *context;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL repeatable;


+(id)sayIt;
+(id)sayItWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif