// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSTARTPRONUNCIATIONREQUEST_H
#define SASSTARTPRONUNCIATIONREQUEST_H



#import "SASStartSpeech.h"
#import "SASPronunciationContext.h"

@interface SASStartPronunciationRequest : SASStartSpeech

@property (retain, nonatomic) SASPronunciationContext *context;


+(id)startPronunciationRequest;
+(id)startPronunciationRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif