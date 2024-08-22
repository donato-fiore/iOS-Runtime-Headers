// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPASSESMANAGER_H
#define NPKPASSESMANAGER_H

@class NSArray, NSString, PKGroupsController, NSHashTable;
@protocol PKGroupsControllerDelegate, PKGroupDelegate, NPKPassesDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKStandaloneFirstUnlockCoordinator.h"

@interface NPKPassesManager : NSObject <PKGroupsControllerDelegate, PKGroupDelegate, NPKPassesDataSource>

 {
    NSObject<OS_dispatch_queue> *_loadImageQueue;
}


@property (retain, nonatomic) NSArray *currentExpiredPasses; // ivar: _currentExpiredPasses
@property (retain, nonatomic) NSArray *currentPasses; // ivar: _currentPasses
@property (retain, nonatomic) NSArray *currentPaymentPasses; // ivar: _currentPaymentPasses
@property (retain, nonatomic) NSArray *currentSecureElementPasses; // ivar: _currentSecureElementPasses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator; // ivar: _firstUnlockCoordinator
@property (retain, nonatomic) PKGroupsController *groupsController; // ivar: _groupsController
@property (readonly) NSUInteger hash;
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


-(BOOL)shouldAllowMovingItemAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(id)expiredPasses;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)passForUniqueID:(id)arg0 ;
-(id)passes;
-(id)paymentPasses;
-(id)secureElementPasses;
-(void)_didFinishLoadPasses;
-(void)_handleObjectSettingsChanged:(id)arg0 ;
-(void)_loadContentAndImageSetsForPass:(id)arg0 completion:(id)arg1 ;
-(void)_loadImageSetFromPasses:(id)arg0 ;
-(void)_loadPasses;
-(void)_notifyObservers:(id)arg0 ;
-(void)_reloadPasses;
-(void)_reloadPassesWithCompletion:(id)arg0 ;
-(void)_setGroupControllerGroupsDelegate;
-(void)_updateCurrentPasses;
-(void)dealloc;
-(void)enableRemoteUpdates;
-(void)group:(id)arg0 didInsertPass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didMovePassFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didRemovePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didUpdatePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)groupsController:(id)arg0 didInsertGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)groupsController:(id)arg0 didMoveGroup:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)groupsController:(id)arg0 didRemoveGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)movePassAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)reloadPasses;
-(void)reloadPassesWithCompletion:(id)arg0 ;
-(void)removePass:(id)arg0 ;
-(void)setDefaultPaymentPass:(id)arg0 ;
-(void)suppressRemoteUpdates;
-(void)unarchivePass:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif