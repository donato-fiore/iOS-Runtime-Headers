// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXINDEXPATHSET_H
#define PXINDEXPATHSET_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSMutableDictionary *_indexesForItemsWithSubitemsBySectionByDataSourceIdentifier; // ivar: __indexesForItemsWithSubitemsBySectionByDataSourceIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_indexesForSectionsWithItemsByDataSourceIdentifier; // ivar: __indexesForSectionsWithItemsByDataSourceIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier; // ivar: __itemIndexesBySectionByDataSourceIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier; // ivar: __sectionIndexesByDataSourceIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier; // ivar: __subitemIndexesByItemBySectionByDataSourceIdentifier
@property (readonly, nonatomic) PXSimpleIndexPath anyItemIndexPath;
@property (readonly, nonatomic) PXSimpleIndexPath anySectionIndexPath;
@property (readonly, nonatomic) PXSimpleIndexPath anySubitemIndexPath;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSInteger itemCount;
@property (readonly, nonatomic) NSInteger sectionCount;
@property (readonly, nonatomic) NSInteger subitemCount;


+(id)indexPathSet;
+(id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath )arg0 ;
+(id)indexPathSetWithItemIndexPaths:(id)arg0 dataSourceIdentifier:(NSInteger)arg1 ;
+(id)indexPathSetWithItemIndexes:(id)arg0 dataSourceIdentifier:(NSInteger)arg1 section:(NSInteger)arg2 ;
+(id)indexPathSetWithSectionIndexes:(id)arg0 dataSourceIdentifier:(NSInteger)arg1 ;
+(id)indexPathSetWithSubitemIndexes:(id)arg0 dataSourceIdentifier:(NSInteger)arg1 section:(NSInteger)arg2 item:(NSInteger)arg3 ;
-(BOOL)containsIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(BOOL)isSupersetOfSet:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexPathSetByReplacingDataSourceIdentifier:(NSInteger)arg0 withDataSourceIdentifier:(NSInteger)arg1 ;
-(id)init;
-(id)itemIndexSetForDataSourceIdentifier:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)itemsWithSubitemsForDataSourceIdentifier:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sectionIndexSetForDataSourceIdentifier:(NSInteger)arg0 ;
-(id)sectionsWithItemsForDataSourceIdentifier:(NSInteger)arg0 ;
-(id)subitemIndexSetForDataSourceIdentifier:(NSInteger)arg0 section:(NSInteger)arg1 item:(NSInteger)arg2 ;
-(struct PXSimpleIndexPath )firstItemIndexPathForDataSourceIdentifier:(NSInteger)arg0 ;
-(struct PXSimpleIndexPath )indexPathGreaterThanIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathLessThanIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )lastItemIndexPathForDataSourceIdentifier:(NSInteger)arg0 ;
-(void)enumerateAllIndexPathsUsingBlock:(id)arg0 ;
-(void)enumerateDataSourceIdentifiers:(id)arg0 ;
-(void)enumerateItemIndexPathsUsingBlock:(id)arg0 ;
-(void)enumerateItemIndexSetsUsingBlock:(id)arg0 ;
-(void)enumerateSectionIndexPathsUsingBlock:(id)arg0 ;
-(void)enumerateSectionIndexSetsUsingBlock:(id)arg0 ;
-(void)enumerateSubitemIndexPathsUsingBlock:(id)arg0 ;
-(void)enumerateSubitemIndexSetsUsingBlock:(id)arg0 ;


@end


#endif