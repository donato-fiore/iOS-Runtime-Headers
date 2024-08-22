// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXCELLULARCONDITIONMETRIC_H
#define MXCELLULARCONDITIONMETRIC_H



#import "MXMetric.h"
#import "MXHistogram.h"

@interface MXCellularConditionMetric : MXMetric

@property (readonly) MXHistogram *histogrammedCellularConditionTime; // ivar: _histogrammedCellularConditionTime


+(BOOL)supportsSecureCoding;
-(id)initWithCellularConditionTime:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif