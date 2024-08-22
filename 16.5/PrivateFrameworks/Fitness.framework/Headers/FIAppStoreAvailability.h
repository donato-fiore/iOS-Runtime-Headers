// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIAPPSTOREAVAILABILITY_H
#define FIAPPSTOREAVAILABILITY_H


#import <Foundation/Foundation.h>


@interface FIAppStoreAvailability : NSObject



+(BOOL)_isDeviceTablet;
+(void)_isSupportedDeviceAvailableWithCompletion:(id)arg0 ;
+(void)fetchIsFitnessAvailableForDeviceWithCompletion:(id)arg0 ;
+(void)isFitnessPlusStorefrontContentAvailableWithCompletion:(id)arg0 ;


@end


#endif