// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STPERSISTENCECONTROLLER_H
#define STPERSISTENCECONTROLLER_H

@class NSPersistentStore, NSString, NSPersistentContainer, NSManagedObjectContext;
@protocol STDebouncerDelegate, STPersistenceControllerProtocol, STPersistentStoreChangeHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STDebouncer.h"

@interface STPersistenceController : NSObject <STDebouncerDelegate, STPersistenceControllerProtocol>



@property (readonly) NSObject<STPersistentStoreChangeHandler> *changeHandler; // ivar: _changeHandler
@property (readonly) STDebouncer *changeNotificationDebouncer; // ivar: _changeNotificationDebouncer
@property (readonly) NSPersistentStore *cloudStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coreDataQueue; // ivar: _coreDataQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStoreLoaded;
@property (readonly) NSUInteger hash;
@property (readonly) NSPersistentStore *localStore;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSManagedObjectContext *viewContext;


-(id)descriptionForPersistentStore:(id)arg0 ;
-(id)init;
-(id)initWithPersistentContainer:(id)arg0 persistentStoreChangeHandler:(id)arg1 notificationDebouncer:(id)arg2 ;
-(id)newBackgroundContext;
-(void)_logAboutMissingStoreName:(id)arg0 ;
-(void)_persistentStoreCoordinatorStoresDidChange:(id)arg0 ;
-(void)_remotePersistentStoreChangesDidCoalesce:(id)arg0 ;
-(void)_remotePersistentStoreDidChange:(id)arg0 ;
-(void)debouncer:(id)arg0 didDebounce:(id)arg1 ;
-(void)performBackgroundTask:(id)arg0 ;
-(void)performBackgroundTaskAndWait:(id)arg0 ;


@end


#endif