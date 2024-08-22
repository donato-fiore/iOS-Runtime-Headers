// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTBASEQUERYOBSERVER_H
#define MTBASEQUERYOBSERVER_H

@class NSFetchedResultsController, NSString, NSMutableDictionary;
@protocol NSFetchedResultsControllerDelegate, MTQueryObserver;

#import <Foundation/Foundation.h>


@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate, MTQueryObserver>

 {
    NSFetchedResultsController *_frc;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isObserving; // ivar: _isObserving
@property (nonatomic) BOOL stopCalled; // ivar: _stopCalled
@property (readonly) Class superclass;


+(Class)fetchedResultsControllerClass;
-(id)_frc;
-(id)addResultsChangedHandler:(id)arg0 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 background:(BOOL)arg2 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 propertiesToFetch:(id)arg5 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 propertiesToFetch:(id)arg5 managedObjectContext:(id)arg6 ;
-(id)initWithEntityName:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 returnObjectsAsFaults:(BOOL)arg4 ;
-(id)initWithFetchRequest:(id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)managedObjectContext;
-(id)predicate;
-(id)sortDescriptors;
-(id)uuids;
-(void)dealloc;
-(void)refetch:(id)arg0 ;
-(void)removeAllResultsChangedHandlers;
-(void)removeResultsChangedHandler:(id)arg0 ;
-(void)results:(id)arg0 ;
-(void)setPredicate:(id)arg0 ;
-(void)startObserving;
-(void)stop;


@end


#endif