// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMANAGEDOBJECTCONTEXTCHANGECONTROLLER_H
#define ICMANAGEDOBJECTCONTEXTCHANGECONTROLLER_H

@class NSSet, NSMutableSet, ICSelectorDelayer;
@protocol ICManagedObjectContextChangeControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICManagedObjectContextChangeController : NSObject

@property (weak, nonatomic) NSObject<ICManagedObjectContextChangeControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSSet *managedObjectContexts; // ivar: _managedObjectContexts
@property (retain, nonatomic) NSMutableSet *needsUpdateManagedObjectIDs; // ivar: _needsUpdateManagedObjectIDs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *needsUpdateManagedObjectIDsSerialQueue; // ivar: _needsUpdateManagedObjectIDsSerialQueue
@property (readonly, nonatomic) NSSet *objectTypeKeys;
@property (nonatomic) NSUInteger objectTypes; // ivar: _objectTypes
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval
@property (retain, nonatomic) ICSelectorDelayer *updateSelectorDelayer; // ivar: _updateSelectorDelayer


-(id)initWithDelegate:(id)arg0 ;
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