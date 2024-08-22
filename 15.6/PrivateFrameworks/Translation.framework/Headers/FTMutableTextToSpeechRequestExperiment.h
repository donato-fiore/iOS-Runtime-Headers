// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLETEXTTOSPEECHREQUESTEXPERIMENT_H
#define FTMUTABLETEXTTOSPEECHREQUESTEXPERIMENT_H

@class NSString;


#import "FTTextToSpeechRequestExperiment.h"

@interface FTMutableTextToSpeechRequestExperiment : FTTextToSpeechRequestExperiment

@property (copy, nonatomic) NSString *experiment_identifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif