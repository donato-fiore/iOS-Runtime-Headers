// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPPOWERMANAGER_H
#define HAPPOWERMANAGER_H

@class NSString, NSMapTable;
@protocol HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HAPPowerManager : NSObject <HMFLogging>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMapTable *delegatesMap; // ivar: _delegatesMap
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int systemPowerMgr; // ivar: _systemPowerMgr
@property (readonly, nonatomic) unsigned int systemPowerNotifier; // ivar: _systemPowerNotifier
@property (readonly, nonatomic) *IONotificationPort systemPowerPort; // ivar: _systemPowerPort


+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(void)deRegisterFromSleepWake:(id)arg0 ;
-(void)dealloc;
-(void)registerForSleepWake:(id)arg0 queue:(id)arg1 ;
-(void)systemPowerChanged:(unsigned int)arg0 notificationID:(*void)arg1 ;


@end


#endif