// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKRPOXYGENSATURATIONAVAILABILITYDATASOURCE_H
#define _HKRPOXYGENSATURATIONAVAILABILITYDATASOURCE_H

@class NRDevice, NSString;
@protocol HKRPOxygenSaturationAvailabilityDataSource;

#import <Foundation/Foundation.h>


@interface _HKRPOxygenSaturationAvailabilityDataSource : NSObject <HKRPOxygenSaturationAvailabilityDataSource>

 {
    NRDevice *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL deviceIsSupported;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL skipHardwareCheck;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;


@end


#endif