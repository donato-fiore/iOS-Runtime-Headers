// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYCOUNT_H
#define HMDACCESSORYCOUNT_H


#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDAccessoryCount : NSObject

@property (weak) HMDHome *home; // ivar: _home
@property (readonly) NSUInteger numCameraAccessories;
@property (readonly) NSUInteger numCameraAccessoriesRecordingEnabled;
@property (readonly) NSUInteger numCriticalSensorAccessories;
@property (readonly) NSUInteger numHAPAccessories;
@property (readonly) NSUInteger numHAPBLEAccessoriesSupportAFU;
@property (readonly) NSUInteger numHAPIPAccessoriesSupportAFU;
@property (readonly) NSUInteger numHAPThreadAccessoriesSupportAFU;
@property (readonly) NSUInteger numSecurityClassAccessories;


-(NSUInteger)numHAPAccessoriesWithAnyServiceWithTypes:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif