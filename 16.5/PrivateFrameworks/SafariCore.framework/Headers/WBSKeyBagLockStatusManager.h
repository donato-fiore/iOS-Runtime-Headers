// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSKEYBAGLOCKSTATUSMANAGER_H
#define WBSKEYBAGLOCKSTATUSMANAGER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSKeyBagLockStatusManager : NSObject {
    NSMutableSet *_handlers;
    int _notifyTokenLockStatusChanged;
    int _notifyTokenFirstUnlock;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, nonatomic) NSInteger keyBagLockStatus;
@property (readonly, nonatomic, getter=isLockedOrAboutToLock) BOOL lockedOrAboutToLock;


+(id)sharedManager;
-(id)_descriptionOfKeyBagLockStatus:(NSInteger)arg0 ;
-(id)addKeyBagLockStatusChangedObserverWithHandler:(id)arg0 ;
-(id)init;
-(void)_startObservingKeyBagLockStatusChanges;
-(void)_stopObservingKeyBagLockStatusChanges;
-(void)dealloc;
-(void)removeKeyBagLockStatusChangedObserver:(id)arg0 ;


@end


#endif