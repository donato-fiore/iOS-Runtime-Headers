// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHRESULTSSECTION_H
#define PXSEARCHRESULTSSECTION_H

@class NSDictionary, NSMutableSet, NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PXSearchResultsSection : NSObject

@property (readonly) NSDictionary *debugDictionary;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) NSMutableSet *mutableSearchResultUUIDs; // ivar: _mutableSearchResultUUIDs
@property (readonly, nonatomic) NSMutableArray *mutableSearchResults; // ivar: _mutableSearchResults
@property (readonly, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic) NSUInteger sectionType; // ivar: _sectionType
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (nonatomic, getter=isSorted) BOOL sorted; // ivar: _sorted
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger totalCount;
@property (readonly, nonatomic) NSUInteger visibleCount;


+(NSUInteger)_sectionTypeForCategory:(NSUInteger)arg0 ;
+(NSUInteger)sectionTypeForCategoryMask:(NSUInteger)arg0 isMomentSection:(BOOL)arg1 isTopAssetSection:(BOOL)arg2 ;
+(id)_stringForCategory:(NSUInteger)arg0 ;
+(id)sectionTitleForCategoryMask:(NSUInteger)arg0 ;
-(NSUInteger)maxVisibleItemsInCollapsedSection;
-(id)description;
-(id)init;
-(id)initWithTitle:(id)arg0 withSectionType:(NSUInteger)arg1 ;
-(void)addSearchResult:(id)arg0 ;
-(void)removeSearchResult:(id)arg0 ;


@end


#endif