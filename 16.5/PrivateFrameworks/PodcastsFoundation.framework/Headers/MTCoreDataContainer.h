// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCOREDATACONTAINER_H
#define MTCOREDATACONTAINER_H

@class NSPersistentStoreCoordinator, NSArray, NSManagedObjectModel, NSHashTable;
@protocol MTCoreDataContainerConfigProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTManagedObjectContext.h"
#import "PFManagedObjectContextMonitor.h"

@interface MTCoreDataContainer : NSObject

@property (retain, nonatomic) MTManagedObjectContext *carPlayContext; // ivar: _carPlayContext
@property (retain, nonatomic) NSObject<MTCoreDataContainerConfigProvider> *config; // ivar: _config
@property (retain, nonatomic) NSPersistentStoreCoordinator *coordinator; // ivar: _coordinator
@property (retain, nonatomic) NSArray *entityNames; // ivar: _entityNames
@property (retain, nonatomic) MTManagedObjectContext *importContext; // ivar: _importContext
@property (retain, nonatomic) PFManagedObjectContextMonitor *importMonitor; // ivar: _importMonitor
@property (retain, nonatomic) MTManagedObjectContext *loggingContext; // ivar: _loggingContext
@property (retain, nonatomic) MTManagedObjectContext *mainQueueContext; // ivar: _mainQueueContext
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeNotifierQueue; // ivar: _mergeNotifierQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue; // ivar: _mergeQueue
@property (retain, nonatomic) NSHashTable *notifiers; // ivar: _notifiers
@property (retain, nonatomic) MTManagedObjectContext *playbackContext; // ivar: _playbackContext
@property (retain, nonatomic) PFManagedObjectContextMonitor *privateMonitor; // ivar: _privateMonitor
@property (retain, nonatomic) MTManagedObjectContext *privateQueueContext; // ivar: _privateQueueContext
@property (retain, nonatomic) MTManagedObjectContext *resetableImportContext; // ivar: _resetableImportContext
@property (retain, nonatomic) MTManagedObjectContext *storeContext; // ivar: _storeContext
@property (nonatomic) BOOL valid; // ivar: _valid


-(id)_createManagedObjectContextWithName:(id)arg0 coordinator:(id)arg1 concurrencyType:(NSUInteger)arg2 ;
-(id)allContexts;
-(id)contextForName:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)mainOrPrivateContext;
-(id)persistentStoreCoordinator;
-(id)persistentStoreUuid;
-(void)_addChanges:(id)arg0 ofType:(int)arg1 toLibraryChanges:(id)arg2 ;
-(void)_notifyLibraryChanged:(id)arg0 contextName:(id)arg1 ;
-(void)_tearDown:(BOOL)arg0 ;
-(void)addChangeNotifier:(id)arg0 ;
-(void)destroy;
-(void)mergeFromContextDidSaveNotification:(id)arg0 ;
-(void)removeChangeNotifier:(id)arg0 ;
-(void)tearDownAsync:(BOOL)arg0 ;


@end


#endif