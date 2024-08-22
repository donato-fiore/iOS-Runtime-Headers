// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRDMANAGEDOBJECTCONTEXTCHANGECONTROLLER_H
#define ICRDMANAGEDOBJECTCONTEXTCHANGECONTROLLER_H

@class NSSet, NSMutableSet, ICSelectorDelayer;
@protocol ICRDManagedObjectContextChangeControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICRDManagedObjectContextChangeController : NSObject

@property (weak, nonatomic) NSObject<ICRDManagedObjectContextChangeControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSSet *managedObjectContexts; // ivar: _managedObjectContexts
@property (retain, nonatomic) NSMutableSet *needsUpdateManagedObjectIDs; // ivar: _needsUpdateManagedObjectIDs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *needsUpdateManagedObjectIDsSerialQueue; // ivar: _needsUpdateManagedObjectIDsSerialQueue
@property (readonly, nonatomic) NSSet *objectTypeKeys;
@property (nonatomic) NSUInteger objectTypes; // ivar: _objectTypes
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval
@property (retain, nonatomic) ICSelectorDelayer *updateSelectorDelayer; // ivar: _updateSelectorDelayer


-(id)initWithManagedObjectContexts:(id)arg0 delegate:(id)arg1 ;
-(void)_performUpdatesIfNeeded;
-(void)addObservers;
-(void)dealloc;
-(void)managedObjectContextObjectsDidChange:(id)arg0 ;
-(void)performUpdatesIfNeeded;
-(void)performUpdatesIfNeededAndWait;
-(void)removeObservers;


@end


#endif