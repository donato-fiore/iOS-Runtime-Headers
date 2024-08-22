// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMUTABLEMEDIAGROUPSPARTICIPANTDATA_H
#define HMDMUTABLEMEDIAGROUPSPARTICIPANTDATA_H

@class NSArray, HMMediaDestination, HMMediaDestinationControllerData;


#import "HMDMediaGroupsParticipantData.h"

@interface HMDMutableMediaGroupsParticipantData : HMDMediaGroupsParticipantData

@property (copy) NSArray *backedUpGroups;
@property (copy) HMMediaDestination *destination;
@property (copy) HMMediaDestinationControllerData *destinationControllerData;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif