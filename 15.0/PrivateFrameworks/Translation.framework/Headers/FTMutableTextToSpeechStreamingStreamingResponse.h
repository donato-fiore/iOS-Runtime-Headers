// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H
#define FTMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H



#import "FTTextToSpeechStreamingStreamingResponse.h"
#import "FTBeginTextToSpeechStreamingResponse.h"
#import "FTFinalTextToSpeechStreamingResponse.h"
#import "FTPartialTextToSpeechStreamingResponse.h"
#import "FTQssAckResponse.h"

@interface FTMutableTextToSpeechStreamingStreamingResponse : FTTextToSpeechStreamingStreamingResponse

@property (copy, nonatomic) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTQssAckResponse *contentAsFTQssAckResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif