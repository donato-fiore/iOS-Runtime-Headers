// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRELECTROCARDIOGRAMRECORDINGV1SETTINGSPROVIDER_H
#define HDHRELECTROCARDIOGRAMRECORDINGV1SETTINGSPROVIDER_H

@protocol HDBackgroundFeatureDeliverySettingsProviding;

#import <Foundation/Foundation.h>


@interface HDHRElectrocardiogramRecordingV1SettingsProvider : NSObject <HDBackgroundFeatureDeliverySettingsProviding>





-(id)featureSettingsUponBackgroundDelivery;


@end


#endif