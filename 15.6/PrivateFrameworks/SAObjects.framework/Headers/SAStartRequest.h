// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTARTREQUEST_H
#define SASTARTREQUEST_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SASStartSpeech.h"

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *applicationName;
@property (nonatomic) BOOL clearContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL eyesFree;
@property (nonatomic) BOOL handsFree;
@property (copy, nonatomic) NSString *hardwareBuild;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSNumber *isCarryDevice;
@property (copy, nonatomic) NSString *motionActivity;
@property (copy, nonatomic) NSNumber *motionConfidence;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *refId;
@property (retain, nonatomic) SASStartSpeech *sourceSpeechRequest;
@property (readonly) Class superclass;
@property (nonatomic) BOOL talkOnly;
@property (nonatomic) BOOL textToSpeechIsMuted;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSString *utterance;


+(id)startRequest;
+(id)startRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif