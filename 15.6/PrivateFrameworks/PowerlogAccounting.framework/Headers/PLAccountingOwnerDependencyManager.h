// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGOWNERDEPENDENCYMANAGER_H
#define PLACCOUNTINGOWNERDEPENDENCYMANAGER_H

@class NSString, NSMutableDictionary, PLTimer, NSMutableSet;
@protocol PLAccountingOwnerManager, PLAccountingDependencyManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLAccountingOwnerDependencyManager : NSObject <PLAccountingOwnerManager, PLAccountingDependencyManager>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableDictionary *dependencyIDToDependencies; // ivar: _dependencyIDToDependencies
@property (retain) NSMutableDictionary *dependencyIDToObservingOwners; // ivar: _dependencyIDToObservingOwners
@property (readonly, copy) NSString *description;
@property (retain) PLTimer *freeTimer; // ivar: _freeTimer
@property (readonly) NSUInteger hash;
@property int numDependencies; // ivar: _numDependencies
@property (retain) NSMutableDictionary *ownerIDToLastOwner; // ivar: _ownerIDToLastOwner
@property (retain) NSMutableDictionary *ownerIDToObservingDependencies; // ivar: _ownerIDToObservingDependencies
@property (retain) NSMutableSet *ownersRepository; // ivar: _ownersRepository
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(int)maxDependencies;
+(int)maxOwners;
-(id)_lastDependencyForDependencyID:(id)arg0 ;
-(id)dependenciesWithDependencyID:(id)arg0 withRange:(id)arg1 ;
-(id)dependencyIDsForOwner:(id)arg0 ;
-(id)init;
-(id)lastDependencyForDependencyID:(id)arg0 ;
-(id)lastOwnerForOwnerID:(id)arg0 ;
-(id)ownerIDsForDependency:(id)arg0 ;
-(void)addDependency:(id)arg0 ;
-(void)addOwner:(id)arg0 ;
-(void)canFreeDependency:(id)arg0 ;
-(void)canFreeOwner:(id)arg0 ;
-(void)freeExpiredDependenciesAtNow:(id)arg0 ;
-(void)freeExpiredOwnersAtNow:(id)arg0 ;
-(void)notifyDependenciesWithOwner:(id)arg0 ;
-(void)notifyOwnersWithDependency:(id)arg0 ;
-(void)reloadDependenciesNewerThanDate:(id)arg0 ;
-(void)startObservingDependencyID:(id)arg0 forOwner:(id)arg1 ;
-(void)startObservingOwnerID:(id)arg0 forDependency:(id)arg1 ;
-(void)stopObservingDependencyID:(id)arg0 forOwner:(id)arg1 ;
-(void)stopObservingOwnerID:(id)arg0 forDependency:(id)arg1 ;
-(void)updateLastDependencyID:(id)arg0 withEndDate:(id)arg1 ;


@end


#endif