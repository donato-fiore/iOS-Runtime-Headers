// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHARINGSUGGESTIONSECTIONHEADERLAYOUTPROVIDER_H
#define PXSHARINGSUGGESTIONSECTIONHEADERLAYOUTPROVIDER_H

@class NSDateIntervalFormatter, NSMutableSet;


#import "PXActionableSectionHeaderLayoutProvider.h"

@interface PXSharingSuggestionSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

@property (readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // ivar: _dateIntervalFormatter
@property (nonatomic) BOOL successfullySharedAll; // ivar: _successfullySharedAll
@property (readonly, nonatomic) NSMutableSet *successfullySharedAssetCollections; // ivar: _successfullySharedAssetCollections


-(BOOL)wantsHeaderForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)wantsTopHeaderForDataSource:(id)arg0 ;
-(NSInteger)actionTypeForHeaderLayout:(id)arg0 ;
-(id)actionTextForActionType:(NSInteger)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(id)primaryTextForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)primaryTopHeaderTextForDataSource:(id)arg0 ;
-(id)secondaryTextForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)secondaryTopHeaderTextForDataSource:(id)arg0 ;
-(void)_handleShareAssetCollectionCompletion:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)sectionHeader:(id)arg0 didPressButtonForActionType:(NSInteger)arg1 sender:(id)arg2 ;


@end


#endif