// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H
#define FTMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H



#import "FTTextToSpeechRouterStreamingStreamingRequest.h"
#import "FTStartTextToSpeechStreamingRequest.h"

@interface FTMutableTextToSpeechRouterStreamingStreamingRequest : FTTextToSpeechRouterStreamingStreamingRequest

@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif