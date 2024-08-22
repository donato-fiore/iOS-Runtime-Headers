// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUMANAGEDRESTRICTIONSPROVIDER_H
#define BUMANAGEDRESTRICTIONSPROVIDER_H

@class NSString, NSHashTable;
@protocol MCProfileConnectionObserver, BURestrictionsProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BUManagedRestrictionsProvider : NSObject <MCProfileConnectionObserver, BURestrictionsProviding>

 {
    os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAccountModificationAllowed; // ivar: _isAccountModificationAllowed
@property (nonatomic) BOOL isBookStoreAllowed; // ivar: _isBookStoreAllowed
@property (nonatomic) BOOL isExplicitContentAllowed; // ivar: _isExplicitContentAllowed
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)_currentObserversCopy;
-(id)init;
-(void)_uq_notifyObserversForAccountModificationRestrictionsChange;
-(void)_uq_notifyObserversForBookStoreRestrictionsChange;
-(void)_uq_notifyObserversForExplicitContentRestrictionsChange;
-(void)_uq_updateRestrictionsIfNeeded;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif