// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBTHERMALRESPONSEMANAGER_H
#define RBTHERMALRESPONSEMANAGER_H

@class RBSAssertionIdentifier;
@protocol RBDaemonContextProviding;

#import <Foundation/Foundation.h>


@interface RBThermalResponseManager : NSObject {
    id<RBDaemonContextProviding> *_daemonContext;
    int _notifyToken;
    RBSAssertionIdentifier *_currentAssertion;
}




+(NSInteger)_thermalConditionLevelForThermalLevel:(NSUInteger)arg0 ;
+(id)managerWithDaemonContext:(id)arg0 notificationName:(id)arg1 ;
-(id)_initWithDaemonContext:(id)arg0 notificationName:(id)arg1 ;
-(void)_queue_updateAssertion;
-(void)_takeAssertionForConditionLevel:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif