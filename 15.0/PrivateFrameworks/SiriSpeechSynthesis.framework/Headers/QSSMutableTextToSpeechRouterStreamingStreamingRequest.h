// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H
#define QSSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H



#import "QSSTextToSpeechRouterStreamingStreamingRequest.h"
#import "QSSStartTextToSpeechStreamingRequest.h"

@interface QSSMutableTextToSpeechRouterStreamingStreamingRequest : QSSTextToSpeechRouterStreamingStreamingRequest

@property (copy, nonatomic) QSSStartTextToSpeechStreamingRequest *contentAsQSSStartTextToSpeechStreamingRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif