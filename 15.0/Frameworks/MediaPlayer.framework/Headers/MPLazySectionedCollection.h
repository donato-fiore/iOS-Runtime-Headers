// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPLAZYSECTIONEDCOLLECTION_H
#define MPLAZYSECTIONEDCOLLECTION_H

@protocol MPLazySectionedCollectionDataSource;


#import "MPSectionedCollection.h"
#import "_MPLazySectionedCollectionStorage.h"

@interface MPLazySectionedCollection : MPSectionedCollection {
    _MPLazySectionedCollectionStorage *_storage;
    os_unfair_lock_s _mapLock;
}


@property (retain, nonatomic) NSObject<MPLazySectionedCollectionDataSource> *dataSource; // ivar: _dataSource


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_cachedObjectAtIndexPath:(id)arg0 ;
-(id)allItems;
-(id)allSections;
-(id)firstItem;
-(id)firstSection;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)identifiersForSectionAtIndex:(NSInteger)arg0 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)itemsInSectionAtIndex:(NSInteger)arg0 ;
-(id)lastItem;
-(id)lastSection;
-(id)sectionAtIndex:(NSInteger)arg0 ;
-(void)_updateCacheWithObject:(id)arg0 atIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)enumerateItemsInSectionAtIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)enumerateSectionsUsingBlock:(id)arg0 ;


@end


#endif