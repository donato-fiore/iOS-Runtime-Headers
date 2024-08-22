// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLESTARTMULTILINGUALSPEECHREQUEST_H
#define QSSMUTABLESTARTMULTILINGUALSPEECHREQUEST_H

@class NSArray;


#import "QSSStartMultilingualSpeechRequest.h"
#import "QSSStartSpeechRequest.h"

@interface QSSMutableStartMultilingualSpeechRequest : QSSStartMultilingualSpeechRequest

@property (copy, nonatomic) NSArray *language_parameters_by_id;
@property (copy, nonatomic) QSSStartSpeechRequest *start_speech_request;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif