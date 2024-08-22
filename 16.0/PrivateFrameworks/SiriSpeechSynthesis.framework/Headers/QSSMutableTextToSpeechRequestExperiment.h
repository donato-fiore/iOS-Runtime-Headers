// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHREQUESTEXPERIMENT_H
#define QSSMUTABLETEXTTOSPEECHREQUESTEXPERIMENT_H

@class NSString;


#import "QSSTextToSpeechRequestExperiment.h"

@interface QSSMutableTextToSpeechRequestExperiment : QSSTextToSpeechRequestExperiment

@property (copy, nonatomic) NSString *experiment_identifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif