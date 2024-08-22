// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONLIBRARYQUERYRESULT_H
#define SBHICONLIBRARYQUERYRESULT_H

@class NSDictionary, NSSet, NSArray, NSDiffableDataSourceSnapshot;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBHLocalizedIndexedCollationStrategy.h"
#import "SBHIconLibraryQuery.h"

@interface SBHIconLibraryQueryResult : NSObject <NSCopying>

 {
    NSDictionary *_iconForItemIdentifier;
    NSUInteger _totalNumberOfItems;
    NSUInteger _queryResultIdx;
}


@property (retain, nonatomic) SBHLocalizedIndexedCollationStrategy *collationStrategy; // ivar: _collationStrategy
@property (readonly, copy, nonatomic) NSSet *icons; // ivar: _icons
@property (readonly, nonatomic, getter=isNullQueryResult) BOOL nullQueryResult;
@property (readonly, nonatomic) SBHIconLibraryQuery *query; // ivar: _query
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, copy, nonatomic) NSArray *sectionIndexTitles;
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // ivar: _snapshot
@property (readonly, nonatomic) NSUInteger sortMethodology; // ivar: _sortMethodology
@property (readonly, nonatomic) NSUInteger totalNumberOfItems;


+(id)nullQueryResults;
+(void)_hydrateSnapshot:(id)arg0 fromIcons:(id)arg1 query:(id)arg2 outCollationStrategy:(*id)arg3 outIconForItemIdentifier:(*id)arg4 outSortMethodology:(*NSUInteger)arg5 sortComparator:(id)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryResult:(id)arg0 ;
-(NSInteger)indexOfSectionForSectionIndexTitleAtIndex:(NSInteger)arg0 ;
-(NSInteger)indexOfSectionIdentifier:(id)arg0 ;
-(id)_firstExtantSectionWithCollationIndexGreaterThan:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)iconAtIndexPath:(id)arg0 ;
-(id)iconForItemIdentifier:(id)arg0 ;
-(id)iconsForSectionAtIndex:(NSUInteger)arg0 ;
-(id)indexPathForIcon:(id)arg0 ;
-(id)initWithQuery:(id)arg0 icons:(id)arg1 snapshot:(id)arg2 collationStrategy:(id)arg3 iconForitemIdentifier:(id)arg4 sortMethodology:(NSUInteger)arg5 ;
-(id)initWithQuery:(id)arg0 icons:(id)arg1 sortComparator:(id)arg2 ;
-(id)itemIdentifierForIcon:(id)arg0 ;
-(id)sectionIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)sectionIdentifierForIcon:(id)arg0 ;
-(id)titleForSectionAtIndex:(NSInteger)arg0 ;
-(id)titleForSectionIdentifier:(id)arg0 ;


@end


#endif