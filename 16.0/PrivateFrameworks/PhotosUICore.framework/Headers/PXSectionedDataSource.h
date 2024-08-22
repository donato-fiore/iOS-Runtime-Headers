// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSECTIONEDDATASOURCE_H
#define PXSECTIONEDDATASOURCE_H

@class NSNumber, NSString;
@protocol NSCopying, PXSectionedLayoutEngineDataSourceSnapshot, PXFastEnumeration, OS_os_log;

#import <Foundation/Foundation.h>

#import "PXIndexPathSet.h"

@interface PXSectionedDataSource : NSObject <NSCopying, PXSectionedLayoutEngineDataSourceSnapshot>

 {
    NSNumber *_containsAnyItemsCache;
    NSNumber *_containsMultipleItemsCache;
    NSInteger _totalNumberOfItemsCache;
    PXSimpleIndexPath _firstItemIndexPathCache;
    PXSimpleIndexPath _lastItemIndexPathCache;
}


@property (readonly, nonatomic) PXIndexPathSet *allIndexPaths;
@property (readonly, nonatomic) PXIndexPathSet *allItemIndexPaths;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *allItemsEnumerator;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *allObjectsEnumerator;
@property (readonly, nonatomic) PXIndexPathSet *allSectionIndexPaths;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *allSectionsEnumerator;
@property (readonly, nonatomic) BOOL containsAnyItems;
@property (readonly, nonatomic) BOOL containsMultipleItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXSimpleIndexPath firstItemIndexPath;
@property (readonly, nonatomic) PXSimpleIndexPath firstSectionIndexPath;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) PXSimpleIndexPath lastItemIndexPath;
@property (readonly, nonatomic) PXSimpleIndexPath lastSectionIndexPath;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic) NSObject<OS_os_log> *sectionedDataSourceLog;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger totalNumberOfItems;


+(id)emptyDataSource;
-(BOOL)couldObjectReferenceAppear:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)objectReferenceClassForItem;
-(Class)objectReferenceClassForSection;
-(Class)objectReferenceClassForSubItem;
-(NSInteger)_numberOfAssetsWithMaximum:(NSInteger)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(NSUInteger)totalItemCount;
-(id)convertIndexPathSet:(id)arg0 fromSectionedDataSource:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchAllItemObjects;
-(id)indexPathSetForItemsInIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)indexPathSetForObjectIDs:(id)arg0 ;
-(id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath )arg0 toIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)init;
-(id)inputForItem:(id)arg0 ;
-(id)itemIndexPathsForSections:(id)arg0 ;
-(id)itemsEnumeratorForIndexPaths:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectIDAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectIDsForIndexPathSet:(id)arg0 ;
-(id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectReferenceForObjectReference:(id)arg0 ;
-(id)objectReferenceNearestToObjectReference:(id)arg0 ;
-(id)objectsEnumeratorForIndexPaths:(id)arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)sectionsEnumeratorForIndexPaths:(id)arg0 ;
-(struct PXSimpleIndexPath )convertIndexPath:(struct PXSimpleIndexPath )arg0 fromSectionedDataSource:(id)arg1 ;
-(struct PXSimpleIndexPath )firstNonEmptySectionAtOrBeforeSection:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectID:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;
-(void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath )arg0 reverseDirection:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath )arg0 untilEndIndexPath:(struct PXSimpleIndexPath )arg1 usingBlock:(id)arg2 ;
-(void)prefetchIndexPaths:(id)arg0 ;
-(void)prefetchSections:(id)arg0 ;


@end


#endif