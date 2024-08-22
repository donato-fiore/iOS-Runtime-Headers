// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRIRREGULARRHYTHMNOTIFICATIONSAUTOMATICUPGRADECRITERIA_H
#define HDHRIRREGULARRHYTHMNOTIFICATIONSAUTOMATICUPGRADECRITERIA_H

@protocol HDBackgroundFeatureDeliveryCriteriaProviding, HDFeatureAvailabilityExtension;

#import <Foundation/Foundation.h>


@interface HDHRIrregularRhythmNotificationsAutomaticUpgradeCriteria : NSObject <HDBackgroundFeatureDeliveryCriteriaProviding>



@property (retain, nonatomic) NSObject<HDFeatureAvailabilityExtension> *v1FeatureAvailabilityManager; // ivar: _v1FeatureAvailabilityManager


-(NSInteger)isBackgroundDeliverySupportedWithError:(*id)arg0 ;
-(id)initWithV1FeatureAvailabilityManager:(id)arg0 ;


@end


#endif