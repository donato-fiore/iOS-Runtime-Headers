// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMETRICPAYLOAD_H
#define MXMETRICPAYLOAD_H

@class NSString, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MXAnimationMetric.h"
#import "MXAppExitMetric.h"
#import "MXAppLaunchMetric.h"
#import "MXAppResponsivenessMetric.h"
#import "MXAppRunTimeMetric.h"
#import "MXCellularConditionMetric.h"
#import "MXCPUMetric.h"
#import "MXDiskIOMetric.h"
#import "MXDisplayMetric.h"
#import "MXGPUMetric.h"
#import "MXLocationActivityMetric.h"
#import "MXMemoryMetric.h"
#import "MXMetaData.h"
#import "MXNetworkTransferMetric.h"

@interface MXMetricPayload : NSObject <NSSecureCoding>



@property (retain) MXAnimationMetric *animationMetrics; // ivar: _animationMetrics
@property (retain) MXAppExitMetric *applicationExitMetrics; // ivar: _applicationExitMetrics
@property (retain) MXAppLaunchMetric *applicationLaunchMetrics; // ivar: _applicationLaunchMetrics
@property (retain) MXAppResponsivenessMetric *applicationResponsivenessMetrics; // ivar: _applicationResponsivenessMetrics
@property (retain) MXAppRunTimeMetric *applicationTimeMetrics; // ivar: _applicationTimeMetrics
@property (retain) MXCellularConditionMetric *cellularConditionMetrics; // ivar: _cellularConditionMetrics
@property (retain) MXCPUMetric *cpuMetrics; // ivar: _cpuMetrics
@property (retain) MXDiskIOMetric *diskIOMetrics; // ivar: _diskIOMetrics
@property (retain) MXDisplayMetric *displayMetrics; // ivar: _displayMetrics
@property (retain) MXGPUMetric *gpuMetrics; // ivar: _gpuMetrics
@property (readonly) BOOL includesMultipleApplicationVersions; // ivar: _includesMultipleApplicationVersions
@property (readonly) NSString *latestApplicationVersion; // ivar: _latestApplicationVersion
@property (retain) MXLocationActivityMetric *locationActivityMetrics; // ivar: _locationActivityMetrics
@property (retain) MXMemoryMetric *memoryMetrics; // ivar: _memoryMetrics
@property (retain) MXMetaData *metaData; // ivar: _metaData
@property (retain) MXNetworkTransferMetric *networkTransferMetrics; // ivar: _networkTransferMetrics
@property (retain) NSArray *signpostMetrics; // ivar: _signpostMetrics
@property (readonly) NSDate *timeStampBegin; // ivar: _timeStampBegin
@property (readonly) NSDate *timeStampEnd; // ivar: _timeStampEnd


+(BOOL)supportsSecureCoding;
-(id)DictionaryRepresentation;
-(id)JSONRepresentation;
-(id)dictionaryRepresentation;
-(id)initWithAppVersion:(id)arg0 withMutipleAppVersions:(BOOL)arg1 withTimeStampBegin:(id)arg2 withTimeStampEnd:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayloadData:(id)arg0 withMutipleAppVersions:(BOOL)arg1 withTimeStampBegin:(id)arg2 withTimeStampEnd:(id)arg3 withMetaData:(id)arg4 withMetrics:(id)arg5 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif