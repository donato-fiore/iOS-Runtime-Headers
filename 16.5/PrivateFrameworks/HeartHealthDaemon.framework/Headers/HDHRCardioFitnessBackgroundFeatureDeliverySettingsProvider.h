// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRCARDIOFITNESSBACKGROUNDFEATUREDELIVERYSETTINGSPROVIDER_H
#define HDHRCARDIOFITNESSBACKGROUNDFEATUREDELIVERYSETTINGSPROVIDER_H

@class NSUserDefaults;
@protocol HDBackgroundFeatureDeliverySettingsProviding;

#import <Foundation/Foundation.h>


@interface HDHRCardioFitnessBackgroundFeatureDeliverySettingsProvider : NSObject <HDBackgroundFeatureDeliverySettingsProviding>

 {
    NSUserDefaults *_heartRateSettingsDefaults;
}




-(id)featureSettingsUponBackgroundDelivery;
-(id)initWithHeartRateSettingsDefaults:(id)arg0 ;


@end


#endif