// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXDISKIOMETRIC_H
#define MXDISKIOMETRIC_H

@class NSMeasurement;


#import "MXMetric.h"

@interface MXDiskIOMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeLogicalWrites; // ivar: _cumulativeLogicalWrites


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCumulativeLogicalWritesMeasurement:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif