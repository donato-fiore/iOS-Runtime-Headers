// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H
#define OPTTSMUTABLETEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H



#import "OPTTSTextToSpeechRouterStreamingStreamingRequest.h"
#import "OPTTSStartTextToSpeechStreamingRequest.h"

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest

@property (copy, nonatomic) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif