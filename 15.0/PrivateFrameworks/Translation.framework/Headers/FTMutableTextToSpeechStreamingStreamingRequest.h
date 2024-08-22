// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H
#define FTMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H



#import "FTTextToSpeechStreamingStreamingRequest.h"
#import "FTStartTextToSpeechStreamingRequest.h"

@interface FTMutableTextToSpeechStreamingStreamingRequest : FTTextToSpeechStreamingStreamingRequest

@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif