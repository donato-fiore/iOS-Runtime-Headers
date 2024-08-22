// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWACTIVITYFRAGMENT_H
#define NWACTIVITYFRAGMENT_H

@class NSManagedObject, NSDate, NSNumber, NSUUID;


#import "NWActivityMetricData.h"

@interface NWActivityFragment : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NWActivityMetricData *metricData;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSUUID *uuid;


+(id)entityName;


@end


#endif