// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOLLECTIONMODEL_H
#define SEARCHUICOLLECTIONMODEL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SearchUICollectionModel : NSObject

@property (retain) NSMutableArray *sectionModels; // ivar: _sectionModels


+(id)collectionModelWithTableModel:(id)arg0 expandedSections:(id)arg1 ;
-(BOOL)indexPathExists:(id)arg0 ;
-(BOOL)shouldDisplayChevronForIndexPath:(id)arg0 nextCardsEnabled:(BOOL)arg1 ;
-(BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)arg0 ;
-(NSInteger)backgroundStyleForSectionIndex:(NSInteger)arg0 attributes:(id)arg1 ;
-(NSInteger)indexOfSection:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)indexPathForRowModel:(id)arg0 ;
-(id)layoutSectionForSectionIndex:(NSInteger)arg0 layoutEnvironment:(id)arg1 attributes:(id)arg2 ;
-(id)removeRowModel:(id)arg0 ;
-(id)rowModelForIndexPath:(id)arg0 ;
-(id)sectionForSection:(NSInteger)arg0 ;
-(id)sectionModelForIndex:(NSInteger)arg0 ;
-(id)sectionsWithItemsToBeHeightMatched;
-(id)updatedTableModelByDeletingSectionIndex:(NSUInteger)arg0 ;
-(int)separatorStyleForIndexPath:(id)arg0 ;
-(void)enumerateRowModels:(id)arg0 ;


@end


#endif