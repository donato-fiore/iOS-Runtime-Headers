// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDDATASOURCECHANGEDETAILS_H
#define PXSECTIONEDDATASOURCECHANGEDETAILS_H

@class NSDictionary, NSNumber, NSString, NSIndexSet;
@protocol PXSectionedLayoutDataSourceChangeDetails;

#import <Foundation/Foundation.h>

#import "PXArrayChangeDetails.h"

@interface PXSectionedDataSourceChangeDetails : NSObject <PXSectionedLayoutDataSourceChangeDetails>

 {
    NSDictionary *_itemChangeDetailsBySection;
    NSDictionary *_itemsWithSubitemChangesBySection;
    NSDictionary *_subitemChangeDetailsByItemBySection;
    NSNumber *_hasAnyChangesCache;
    NSNumber *_hasAnyInsertionsRemovalsOrMovesCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fromDataSourceIdentifier; // ivar: _fromDataSourceIdentifier
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXArrayChangeDetails *sectionChanges; // ivar: _sectionChanges
@property (readonly, nonatomic) NSIndexSet *sectionsWithItemChanges; // ivar: _sectionsWithItemChanges
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger toDataSourceIdentifier; // ivar: _toDataSourceIdentifier


+(BOOL)changeDetailsAreOnlyInsertionsOrOnlyRemovalsAtEnd:(id)arg0 fromDataSource:(id)arg1 toDataSource:(id)arg2 ;
+(BOOL)changesHaveAnyInsertionsRemovalsOrMoves:(id)arg0 ;
+(id)changeDetailsWithNoChangesFromDataSourceIdentifier:(NSInteger)arg0 toDataSourceIdentifier:(NSInteger)arg1 ;
+(id)changeDetailsWithoutIncrementalChangesFromDataSourceIdentifier:(NSInteger)arg0 toDataSourceIdentifier:(NSInteger)arg1 ;
+(id)indexPathSetAfterApplyingChanges:(id)arg0 toIndexPathSet:(id)arg1 hasIncrementalChanges:(*BOOL)arg2 ;
+(id)indexPathSetAfterRevertingChanges:(id)arg0 fromIndexPathSet:(id)arg1 hasIncrementalChanges:(*BOOL)arg2 ;
+(struct PXSimpleIndexPath )indexPathAfterApplyingChanges:(id)arg0 toIndexPath:(struct PXSimpleIndexPath )arg1 hasIncrementalChanges:(*BOOL)arg2 objectChanged:(*BOOL)arg3 ;
+(struct PXSimpleIndexPath )indexPathAfterApplyingChanges:(id)arg0 toIndexPath:(struct PXSimpleIndexPath )arg1 hasIncrementalChanges:(*BOOL)arg2 objectChanged:(*BOOL)arg3 changedProperties:(id)arg4 ;
+(struct PXSimpleIndexPath )indexPathAfterRevertingChanges:(id)arg0 fromIndexPath:(struct PXSimpleIndexPath )arg1 hasIncrementalChanges:(*BOOL)arg2 objectChanged:(*BOOL)arg3 ;
+(struct PXSimpleIndexPath )indexPathAfterRevertingChanges:(id)arg0 fromIndexPath:(struct PXSimpleIndexPath )arg1 hasIncrementalChanges:(*BOOL)arg2 objectChanged:(*BOOL)arg3 changedProperties:(id)arg4 ;
+(void)debug_assertValidChangeDetails:(id)arg0 fromDataSource:(id)arg1 toDataSource:(id)arg2 ;
-(id)changedItemsInSection:(NSInteger)arg0 ;
-(id)deletedItemsInSection:(NSInteger)arg0 ;
-(id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)arg0 hasIncrementalChanges:(*BOOL)arg1 ;
-(id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)arg0 hasIncrementalChanges:(*BOOL)arg1 ;
-(id)init;
-(id)initWithFromDataSourceIdentifier:(NSInteger)arg0 toDataSourceIdentifier:(NSInteger)arg1 sectionChanges:(id)arg2 itemChangeDetailsBySection:(id)arg3 subitemChangeDetailsByItemBySection:(id)arg4 ;
-(id)initWithSectionedDataSourceChangeDetails:(id)arg0 withFromDataSourceIdentifier:(NSInteger)arg1 toDataSourceIdentifier:(NSInteger)arg2 ;
-(id)insertedItemsInSection:(NSInteger)arg0 ;
-(id)itemChangesInSection:(NSInteger)arg0 ;
-(id)itemsWithSubitemChangesInSection:(NSInteger)arg0 ;
-(id)subitemChangesInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(struct PXSimpleIndexPath )indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath )arg0 hasIncrementalChanges:(*BOOL)arg1 objectChanged:(*BOOL)arg2 ;
-(struct PXSimpleIndexPath )indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath )arg0 hasIncrementalChanges:(*BOOL)arg1 objectChanged:(*BOOL)arg2 changedProperties:(id)arg3 ;
-(struct PXSimpleIndexPath )indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath )arg0 hasIncrementalChanges:(*BOOL)arg1 objectChanged:(*BOOL)arg2 ;
-(struct PXSimpleIndexPath )indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath )arg0 hasIncrementalChanges:(*BOOL)arg1 objectChanged:(*BOOL)arg2 changedProperties:(id)arg3 ;


@end


#endif