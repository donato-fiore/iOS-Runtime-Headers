// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEAUDIOANALYTICS_H
#define FTMUTABLEAUDIOANALYTICS_H

@class NSArray;


#import "FTAudioAnalytics.h"

@interface FTMutableAudioAnalytics : FTAudioAnalytics

@property (copy, nonatomic) NSArray *acoustic_features;
@property (copy, nonatomic) NSArray *speech_recognition_features;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif