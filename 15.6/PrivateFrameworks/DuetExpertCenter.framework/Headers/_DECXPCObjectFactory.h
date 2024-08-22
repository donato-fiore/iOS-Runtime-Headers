// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECXPCOBJECTFACTORY_H
#define _DECXPCOBJECTFACTORY_H


#import <Foundation/Foundation.h>


@interface _DECXPCObjectFactory : NSObject {
    NSUInteger _priorityLevel;
    NSUInteger _allowBattery;
}


@property (nonatomic) NSInteger intervalHours; // ivar: _intervalHours
@property (nonatomic) NSInteger intervalMinutes; // ivar: _intervalMinutes
@property (nonatomic) NSInteger intervalSeconds; // ivar: _intervalSeconds
@property (nonatomic) BOOL repeating; // ivar: _repeating
@property (nonatomic) BOOL requireClassA; // ivar: _requireClassA
@property (nonatomic) BOOL requireClassC; // ivar: _requireClassC
@property (nonatomic) BOOL requireScreenSleep; // ivar: _requireScreenSleep


-(BOOL)_shouldAllowBattery;
-(NSInteger)_getInterval;
-(char *)_activityPriority;
-(id)getXPCObject;
-(id)init;
-(void)allowBattery;
-(void)disallowBattery;
-(void)setPriorityLevelMaintenance;
-(void)setPriorityLevelUtility;


@end


#endif