// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTEREXTENSIONDATASTOREASSERTIONMANAGER_H
#define PBFPOSTEREXTENSIONDATASTOREASSERTIONMANAGER_H

@class NSMapTable, NSHashTable, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PBFPosterExtensionDataStoreAssertionManager : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _internalLock;
    NSMapTable *_internalLock_inUseAssertionsByIdentity;
    NSHashTable *_observers;
    BOOL _internalLock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_appendAssertion:(id)arg0 forServerPosterPath:(id)arg1 ;
-(BOOL)_internalLock_appendAssertion:(id)arg0 forServerPosterPath:(id)arg1 ;
-(BOOL)_internalLock_removeAssertion:(id)arg0 forServerPosterPath:(id)arg1 ;
-(BOOL)_removeAssertion:(id)arg0 forServerPosterPath:(id)arg1 ;
-(BOOL)isPosterInUse:(id)arg0 ;
-(NSInteger)_internalLock_numberOfInUseAssertionsForPath:(id)arg0 ;
-(NSInteger)_numberOfInUseAssertionsForPath:(id)arg0 ;
-(NSInteger)numberOfAssertionsForReason:(id)arg0 ;
-(id)acquireInUseAssertionForPath:(id)arg0 reason:(id)arg1 ;
-(id)inUseAssertionForPath:(id)arg0 reason:(id)arg1 ;
-(id)init;
-(void)_invalidateInUseAssertion:(id)arg0 forServerPosterPath:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)enumerateObservers:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif