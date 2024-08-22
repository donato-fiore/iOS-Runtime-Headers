// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDPOSTINSTALLUPDATEMANAGER_H
#define HDPOSTINSTALLUPDATEMANAGER_H

@class HKObserverSet;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDPostInstallUpdateManager : NSObject {
    NSObject<OS_dispatch_source> *_activityPollSource;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
    HKObserverSet *_observers;
}


@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon


-(id)initWithDaemon:(id)arg0 ;
-(void)registerUpdateTaskHandler:(id)arg0 queue:(id)arg1 ;
-(void)start;
-(void)unregisterUpdateTaskHandler:(id)arg0 ;


@end


#endif