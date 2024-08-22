// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATTSSTARTSPEECHSYNTHESISSTREAMINGREQUEST_H
#define SATTSSTARTSPEECHSYNTHESISSTREAMINGREQUEST_H

@class NSString, NSDictionary;


#import "SAStartRequest.h"

@interface SATTSStartSpeechSynthesisStreamingRequest : SAStartRequest

@property (copy, nonatomic) NSString *audioType;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *quality;
@property (nonatomic) BOOL requiresWordTimingInfo;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;


+(id)startSpeechSynthesisStreamingRequest;
+(id)startSpeechSynthesisStreamingRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif