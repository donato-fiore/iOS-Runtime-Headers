// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSLEEPSCHEDULESTATEOBJECT_H
#define HKSPSLEEPSCHEDULESTATEOBJECT_H

@class NSString;
@protocol HKSPXPCObject, HKSPSyncAnchor;

#import <Foundation/Foundation.h>


@interface HKSPSleepScheduleStateObject : NSObject <HKSPXPCObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger scheduleState; // ivar: _scheduleState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor; // ivar: _syncAnchor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduleState:(NSUInteger)arg0 syncAnchor:(id)arg1 ;
-(id)objectWithSyncAnchor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif