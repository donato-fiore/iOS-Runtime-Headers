// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLEAUDIOANALYTICS_ACOUSTICFEATURESENTRY_H
#define QSSMUTABLEAUDIOANALYTICS_ACOUSTICFEATURESENTRY_H

@class AcousticFeaturesEntry, NSString;


#import "QSSAcousticFeature.h"

@interface QSSMutableAudioAnalytics_AcousticFeaturesEntry : AcousticFeaturesEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) QSSAcousticFeature *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif