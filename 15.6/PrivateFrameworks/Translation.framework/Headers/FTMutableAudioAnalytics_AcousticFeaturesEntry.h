// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEAUDIOANALYTICS_ACOUSTICFEATURESENTRY_H
#define FTMUTABLEAUDIOANALYTICS_ACOUSTICFEATURESENTRY_H

@class AcousticFeaturesEntry, NSString;


#import "FTAcousticFeature.h"

@interface FTMutableAudioAnalytics_AcousticFeaturesEntry : AcousticFeaturesEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) FTAcousticFeature *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif