// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXPOWERLOGDATA_H
#define MXPOWERLOGDATA_H

@class MXAnimationMetric, MXAppExitMetric, MXAppLaunchMetric, MXAppResponsivenessMetric, MXAppRunTimeMetric, NSDate, MXCellularConditionMetric, MXCPUMetric, MXDiskIOMetric, MXDisplayMetric, MXGPUMetric, MXLocationActivityMetric, MXMemoryMetric, MXNetworkTransferMetric, NSArray;


#import "MXSourceData.h"

@interface MXPowerlogData : MXSourceData

@property (retain) MXAnimationMetric *animationMetrics; // ivar: _animationMetrics
@property (retain) MXAppExitMetric *applicationExitMetrics; // ivar: _applicationExitMetrics
@property (retain) MXAppLaunchMetric *applicationLaunchMetrics; // ivar: _applicationLaunchMetrics
@property (retain) MXAppResponsivenessMetric *applicationResponsivenessMetrics; // ivar: _applicationResponsivenessMetrics
@property (retain) MXAppRunTimeMetric *applicationTimeMetrics; // ivar: _applicationTimeMetrics
@property (retain) NSDate *beginDate; // ivar: _beginDate
@property (retain) MXCellularConditionMetric *cellularConditionMetrics; // ivar: _cellularConditionMetrics
@property (retain) MXCPUMetric *cpuMetrics; // ivar: _cpuMetrics
@property (retain) MXDiskIOMetric *diskIOMetrics; // ivar: _diskIOMetrics
@property (retain) MXDisplayMetric *displayMetrics; // ivar: _displayMetrics
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) MXGPUMetric *gpuMetrics; // ivar: _gpuMetrics
@property BOOL includesMultipleApplicationVersions; // ivar: _includesMultipleApplicationVersions
@property (retain) MXLocationActivityMetric *locationActivityMetrics; // ivar: _locationActivityMetrics
@property (retain) MXMemoryMetric *memoryMetrics; // ivar: _memoryMetrics
@property (retain) MXNetworkTransferMetric *networkTransferMetrics; // ivar: _networkTransferMetrics
@property (retain) NSArray *signpostMetrics; // ivar: _signpostMetrics


+(BOOL)supportsSecureCoding;
-(id)initPayloadDataWithMutipleAppVersions:(BOOL)arg0 withTimeStampBegin:(id)arg1 withTimeStampEnd:(id)arg2 withMetrics:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif