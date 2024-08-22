// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFLOCATIONCACHE_H
#define OFLOCATIONCACHE_H

@class NSString, NSManagedObjectContext, NSPredicate, NSManagedObjectModel, NSPersistentStoreCoordinator;

#import <Foundation/Foundation.h>


@interface OFLocationCache : NSObject {
    NSString *_diskCacheFilepath;
    NSManagedObjectContext *_parentManagedObjectContext;
    NSPredicate *_predicateEntryTemplate;
    NSPredicate *_predicateEntryWithLocalRegionTemplate;
}


@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator


+(id)defaultCache;
-(BOOL)_save;
-(BOOL)save;
-(id)init;
-(id)initWithDiskCacheFilepath:(id)arg0 ;
-(id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 andAccuracy:(CGFloat)arg1 ;
-(id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 andAccuracy:(CGFloat)arg1 closestResultDistance:(*CGFloat)arg2 numberOfResults:(*NSUInteger)arg3 ;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(void)dealloc;
-(void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)invalidateDiskCaches;
-(void)invalidateMemoryCaches;
-(void)setPlacemarks:(id)arg0 forLocationCoordinate:(struct CLLocationCoordinate2D )arg1 ;


@end


#endif