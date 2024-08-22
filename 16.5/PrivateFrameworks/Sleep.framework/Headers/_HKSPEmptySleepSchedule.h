// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSPEMPTYSLEEPSCHEDULE_H
#define _HKSPEMPTYSLEEPSCHEDULE_H

@class NSString;
@protocol HKSPXPCObject, HKSPSyncAnchor;


#import "HKSPSleepSchedule.h"

@interface _HKSPEmptySleepSchedule : HKSPSleepSchedule <HKSPXPCObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor;


+(BOOL)supportsSecureCoding;
-(BOOL)isEmptySleepSchedule;


@end


#endif