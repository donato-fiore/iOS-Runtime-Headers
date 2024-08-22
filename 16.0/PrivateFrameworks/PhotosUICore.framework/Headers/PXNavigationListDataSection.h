// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNAVIGATIONLISTDATASECTION_H
#define PXNAVIGATIONLISTDATASECTION_H

@class NSIndexSet, NSArray, NSNumber, NSDictionary;


#import "PXDataSection.h"
#import "PXCollectionsDataSection.h"

@interface PXNavigationListDataSection : PXDataSection {
    NSIndexSet *_dataSubsectionIndexes;
    NSArray *_dataSubsections;
    NSNumber *_countNumber;
    BOOL _skipAssetCountFetches;
}


@property (readonly, copy, nonatomic) NSDictionary *childDataSections; // ivar: _childDataSections
@property (readonly, copy, nonatomic) NSDictionary *childIndexHints; // ivar: _childIndexHints
@property (readonly, nonatomic) PXCollectionsDataSection *collectionsDataSection; // ivar: _collectionsDataSection
@property (readonly, nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (readonly, nonatomic) NSArray *sectionRangeMap; // ivar: _sectionRangeMap


-(NSInteger)count;
-(NSInteger)indexForListItem:(id)arg0 ;
-(NSInteger)indexInCollectionsDataSectionOfListItem:(id)arg0 hintIndex:(NSInteger)arg1 ;
-(NSInteger)validatedIndexOfListItem:(id)arg0 hintIndex:(NSInteger)arg1 ;
-(NSUInteger)_dataSubsectionIndexForListItemAtIndex:(NSInteger)arg0 ;
-(id)content;
-(id)debugDescription;
-(id)existingFetchResultForListItem:(id)arg0 ;
-(id)initWithCollectionsDataSection:(id)arg0 ;
-(id)initWithCollectionsDataSection:(id)arg0 indentationLevel:(NSInteger)arg1 outlineObject:(id)arg2 childDataSections:(id)arg3 childIndexHints:(id)arg4 skipAssetCountFetches:(BOOL)arg5 ;
-(id)initWithOutlineObject:(id)arg0 ;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(id)parentOfListItemAtIndex:(NSInteger)arg0 localIndex:(*NSInteger)arg1 ;
-(void)_createDataSubsectionsIfNecessary;


@end


#endif