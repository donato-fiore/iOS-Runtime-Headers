// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NIDEVICECAPABILITIES_H
#define NIDEVICECAPABILITIES_H

@protocol NIInternalDeviceCapability;

#import <Foundation/Foundation.h>


@interface NIDeviceCapabilities : NSObject <NIInternalDeviceCapability>



@property (readonly) BOOL supportsAoA; // ivar: _supportsAoA
@property (readonly, nonatomic) BOOL supportsCameraAssistance; // ivar: _supportsCameraAssistance
@property (readonly, nonatomic) BOOL supportsCoarseDistanceMeasurement; // ivar: _supportsCoarseDistanceMeasurement
@property (readonly) BOOL supportsCoarseRanging; // ivar: _supportsCoarseRanging
@property (readonly, nonatomic) BOOL supportsDirectionMeasurement; // ivar: _supportsDirectionMeasurement
@property (readonly) BOOL supportsFineRanging; // ivar: _supportsFineRanging
@property (readonly, nonatomic) BOOL supportsPreciseDistanceMeasurement; // ivar: _supportsPreciseDistanceMeasurement
@property (readonly) BOOL supportsSyntheticAperture; // ivar: _supportsSyntheticAperture


+(id)new;
-(id)init;
-(id)initWithFineRangingSupport:(BOOL)arg0 aoaSupport:(BOOL)arg1 syntheticApertureSupport:(BOOL)arg2 ;
-(id)initWithFineRangingSupport:(BOOL)arg0 coarseRangingSupport:(BOOL)arg1 aoaSupport:(BOOL)arg2 syntheticApertureSupport:(BOOL)arg3 ;


@end


#endif