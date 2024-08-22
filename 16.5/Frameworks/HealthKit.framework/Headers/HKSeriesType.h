// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSERIESTYPE_H
#define HKSERIESTYPE_H



#import "HKSampleType.h"

@interface HKSeriesType : HKSampleType



+(id)heartbeatSeriesType;
+(id)workoutRouteType;
-(Class)dataObjectClass;


@end


#endif