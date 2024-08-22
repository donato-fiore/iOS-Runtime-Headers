// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITABLEMODEL_H
#define SEARCHUITABLEMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SearchUITableModel : NSObject

@property (readonly) NSUInteger queryId; // ivar: _queryId
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSArray *tableRowModel; // ivar: _tableRowModel


+(BOOL)resultHasHorizontallyGroupedCardSections:(id)arg0 ;
+(BOOL)shouldDisplayChevronForRowModel:(id)arg0 previousRowModel:(id)arg1 nextRowModel:(id)arg2 nextCardsEnabled:(BOOL)arg3 ;
+(id)asyncRowManagersForCardSections:(id)arg0 ;
+(id)combinedRowModelsForRowModels:(id)arg0 result:(id)arg1 ;
+(id)gridLayoutsForCardSections:(id)arg0 ;
+(id)resultsForMultiResultRowInSection:(id)arg0 startingAtIndex:(NSUInteger)arg1 ;
+(id)rowModelForCardSection:(id)arg0 result:(id)arg1 ;
+(id)rowModelsForCardSections:(id)arg0 result:(id)arg1 isInline:(BOOL)arg2 queryId:(NSUInteger)arg3 ;
+(id)rowModelsForResult:(id)arg0 ;
+(id)tableModelWithCardSections:(id)arg0 isInline:(BOOL)arg1 queryId:(NSUInteger)arg2 ;
+(id)tableModelWithCardSections:(id)arg0 result:(id)arg1 isInline:(BOOL)arg2 queryId:(NSUInteger)arg3 shouldCombine:(BOOL)arg4 ;
+(id)tableModelWithResult:(id)arg0 ;
+(id)tableModelWithResults:(id)arg0 ;
+(id)tableModelWithSections:(id)arg0 expandedSections:(id)arg1 ;
-(BOOL)indexPathExists:(id)arg0 ;
-(BOOL)rowWillFillBackgroundWithContentAtIndexPath:(id)arg0 ;
-(BOOL)shouldDisplayChevronForIndexPath:(id)arg0 nextCardsEnabled:(BOOL)arg1 ;
-(BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)arg0 ;
-(NSInteger)numberOfRowsForSection:(NSInteger)arg0 ;
-(NSUInteger)indexOfSection:(id)arg0 ;
-(NSUInteger)numberOfSections;
-(id)cardSectionForIndexPath:(id)arg0 ;
-(id)description;
-(id)indexPathForResultInFirstTwoSections:(id)arg0 ;
-(id)indexPathForRowModel:(id)arg0 ;
-(id)initWithQueryId:(NSUInteger)arg0 ;
-(id)removeRowModel:(id)arg0 ;
-(id)resultForIndexPath:(id)arg0 ;
-(id)rowModelForIndexPath:(id)arg0 ;
-(id)sectionForIndex:(NSUInteger)arg0 ;
-(id)updatedTableModelByDeletingSectionIndex:(NSUInteger)arg0 ;
-(id)updatedTableModelWithExpandedSections:(id)arg0 hiddenSections:(id)arg1 atSectionIndex:(NSUInteger)arg2 ;
-(int)separatorStyleForIndexPath:(id)arg0 ;
-(void)enumerateRowModels:(id)arg0 ;
-(void)replaceResult:(id)arg0 withResult:(id)arg1 completion:(id)arg2 ;


@end


#endif