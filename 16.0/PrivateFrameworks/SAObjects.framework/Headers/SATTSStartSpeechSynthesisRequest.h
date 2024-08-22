// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATTSSTARTSPEECHSYNTHESISREQUEST_H
#define SATTSSTARTSPEECHSYNTHESISREQUEST_H

@class NSString, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *audioType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableAudioInfo;
@property (copy, nonatomic) NSString *gender;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) BOOL streaming;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;


+(id)startSpeechSynthesisRequest;
+(id)startSpeechSynthesisRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif