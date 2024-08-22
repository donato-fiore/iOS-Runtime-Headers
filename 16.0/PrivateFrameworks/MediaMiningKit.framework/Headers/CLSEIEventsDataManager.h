// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSEIEVENTSDATAMANAGER_H
#define CLSEIEVENTSDATAMANAGER_H

@class NSManagedObjectContext, NSMutableDictionary, NSURL, NSManagedObjectModel, NSPersistentStoreCoordinator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLSEIEventsDataManager : NSObject {
    NSManagedObjectContext *_managedObjectContext;
}


@property (readonly, nonatomic) NSMutableDictionary *artistCache; // ivar: _artistCache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (readonly, nonatomic) NSMutableDictionary *categoryCache; // ivar: _categoryCache
@property (readonly, nonatomic) NSURL *diskCacheURL; // ivar: _diskCacheURL
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator
@property (readonly, nonatomic) NSMutableDictionary *venueCache; // ivar: _venueCache


-(BOOL)_save;
-(BOOL)save;
-(id)_fetchManagedObjectWithEntityName:(id)arg0 name:(id)arg1 ;
-(id)_fetchManagedObjectWithEntityName:(id)arg0 uuid:(NSInteger)arg1 ;
-(id)fetchArtistForUUID:(NSInteger)arg0 ;
-(id)fetchCategoryForName:(id)arg0 ;
-(id)fetchEventForUUID:(NSInteger)arg0 ;
-(id)fetchVenueForUUID:(NSInteger)arg0 ;
-(id)initWithDiskCacheURL:(id)arg0 ;
-(id)insertArtistWithUUID:(NSInteger)arg0 name:(id)arg1 ;
-(id)insertCategoryWithName:(id)arg0 ;
-(id)insertEventWithUUID:(NSInteger)arg0 name:(id)arg1 ;
-(id)insertVenueWithUUID:(NSInteger)arg0 name:(id)arg1 coordinate:(struct CLLocationCoordinate2D )arg2 ;
-(id)managedObjectContext;
-(void)_resetCoreDataStack;
-(void)clear;
-(void)clearFastAccessCache;


@end


#endif