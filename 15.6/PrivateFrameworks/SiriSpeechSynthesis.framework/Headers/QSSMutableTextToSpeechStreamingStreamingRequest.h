// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H
#define QSSMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H



#import "QSSTextToSpeechStreamingStreamingRequest.h"
#import "QSSStartTextToSpeechStreamingRequest.h"

@interface QSSMutableTextToSpeechStreamingStreamingRequest : QSSTextToSpeechStreamingStreamingRequest

@property (copy, nonatomic) QSSStartTextToSpeechStreamingRequest *contentAsQSSStartTextToSpeechStreamingRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif