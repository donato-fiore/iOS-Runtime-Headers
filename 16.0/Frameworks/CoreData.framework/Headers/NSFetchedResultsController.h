// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFETCHEDRESULTSCONTROLLER_H
#define NSFETCHEDRESULTSCONTROLLER_H

@class NSString, NSPredicate, NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSArray;
@protocol NSFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>

#import "NSFetchRequest.h"
#import "NSManagedObjectContext.h"

@interface NSFetchedResultsController : NSObject {
    NSString *_sectionNameKey;
    NSPredicate *_remappedPredicate;
    NSPredicate *_originalPredicate;
    id *_cachePath;
    _fetchResultsControllerFlags _flags;
    id *_delegate;
    id *_sortKeys;
    id *_fetchedObjects;
    NSMutableOrderedSet *_sections;
    NSMutableDictionary *_sectionsByName;
    id *_sectionIndexTitles;
    id *_sectionIndexTitlesSections;
    NSMutableDictionary *_indexCache;
    NSMutableArray *_indexCacheOffsets;
}


@property (readonly, nonatomic) NSString *cacheName; // ivar: _cacheName
@property (nonatomic) NSObject<NSFetchedResultsControllerDelegate> *delegate;
@property (readonly, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (readonly, nonatomic) NSArray *fetchedObjects;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic) NSString *sectionNameKeyPath; // ivar: _sectionNameKeyPath
@property (readonly, nonatomic) NSArray *sections;


+(void)deleteCacheWithName:(id)arg0 ;
+(void)initialize;
-(BOOL)performFetch:(*id)arg0 ;
-(NSInteger)sectionForSectionIndexTitle:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)indexPathForObject:(id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 managedObjectContext:(id)arg1 sectionNameKeyPath:(id)arg2 cacheName:(id)arg3 ;
-(id)objectAtIndexPath:(id)arg0 ;
-(id)sectionIndexTitleForSectionName:(id)arg0 ;
-(void)_managedObjectContextDidChange:(id)arg0 ;
-(void)_managedObjectContextDidChangeObjectIDs:(id)arg0 ;
-(void)_managedObjectContextDidMutateObjectIDs:(id)arg0 ;
-(void)_managedObjectContextDidSave:(id)arg0 ;
-(void)dealloc;


@end


#endif