// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H
#define OPTTSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H



#import "OPTTSTextToSpeechRouterStreamingStreamingResponse.h"
#import "OPTTSBeginTextToSpeechStreamingResponse.h"
#import "OPTTSFinalTextToSpeechStreamingResponse.h"
#import "OPTTSPartialTextToSpeechStreamingResponse.h"

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse : OPTTSTextToSpeechRouterStreamingStreamingResponse

@property (copy, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property (copy, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif