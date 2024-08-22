// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKRPOXYGENSATURATIONAVAILABILITY_H
#define HKRPOXYGENSATURATIONAVAILABILITY_H

@protocol HKRPOxygenSaturationAvailabilityDataSource;

#import <Foundation/Foundation.h>


@interface HKRPOxygenSaturationAvailability : NSObject {
    id<HKRPOxygenSaturationAvailabilityDataSource> *_dataSource;
}


@property (readonly, nonatomic, getter=isDeviceSupported) BOOL deviceSupported;


+(BOOL)isCountryAllowed:(id)arg0 ;
+(id)_availabilityPlistURL;
+(id)allowedCountryCodesByVersion;
+(id)allowedCountryCodesISO3166;
+(id)allowedCountrySet;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif