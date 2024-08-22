// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H
#define QSSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H



#import "QSSTextToSpeechRouterStreamingStreamingResponse.h"
#import "QSSBeginTextToSpeechStreamingResponse.h"
#import "QSSFinalTextToSpeechStreamingResponse.h"
#import "QSSPartialTextToSpeechStreamingResponse.h"

@interface QSSMutableTextToSpeechRouterStreamingStreamingResponse : QSSTextToSpeechRouterStreamingStreamingResponse

@property (copy, nonatomic) QSSBeginTextToSpeechStreamingResponse *contentAsQSSBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) QSSFinalTextToSpeechStreamingResponse *contentAsQSSFinalTextToSpeechStreamingResponse;
@property (copy, nonatomic) QSSPartialTextToSpeechStreamingResponse *contentAsQSSPartialTextToSpeechStreamingResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif