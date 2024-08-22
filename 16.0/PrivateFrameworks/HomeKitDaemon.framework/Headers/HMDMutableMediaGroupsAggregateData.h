// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMUTABLEMEDIAGROUPSAGGREGATEDATA_H
#define HMDMUTABLEMEDIAGROUPSAGGREGATEDATA_H

@class NSArray;


#import "HMDMediaGroupsAggregateData.h"

@interface HMDMutableMediaGroupsAggregateData : HMDMediaGroupsAggregateData

@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *destinations;
@property (copy) NSArray *groups;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif