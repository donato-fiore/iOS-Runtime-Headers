// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKAPPLICATIONRECORDMANAGER_H
#define NPKAPPLICATIONRECORDMANAGER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKObserverManager.h"

@interface NPKApplicationRecordManager : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    os_unfair_lock_s _restrictedModeLock;
    NSUInteger _isInRestrictedMode;
    NSObject<OS_dispatch_queue> *_internalClassQueue;
    NPKObserverManager *_observerManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cachedIsAppInRestrictedMode;
-(id)init;
-(void)_updateStatusWithApplicationState:(id)arg0 completion:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)isAppInRestrictedMode:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;


@end


#endif