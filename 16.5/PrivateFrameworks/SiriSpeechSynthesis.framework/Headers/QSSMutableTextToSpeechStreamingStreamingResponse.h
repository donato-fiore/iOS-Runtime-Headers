// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H
#define QSSMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H



#import "QSSTextToSpeechStreamingStreamingResponse.h"
#import "QSSBeginTextToSpeechStreamingResponse.h"
#import "QSSFinalTextToSpeechStreamingResponse.h"
#import "QSSPartialTextToSpeechStreamingResponse.h"
#import "QSSQssAckResponse.h"

@interface QSSMutableTextToSpeechStreamingStreamingResponse : QSSTextToSpeechStreamingStreamingResponse

@property (copy, nonatomic) QSSBeginTextToSpeechStreamingResponse *contentAsQSSBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) QSSFinalTextToSpeechStreamingResponse *contentAsQSSFinalTextToSpeechStreamingResponse;
@property (copy, nonatomic) QSSPartialTextToSpeechStreamingResponse *contentAsQSSPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) QSSQssAckResponse *contentAsQSSQssAckResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif