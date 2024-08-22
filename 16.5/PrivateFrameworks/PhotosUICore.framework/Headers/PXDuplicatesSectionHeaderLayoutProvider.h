// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDUPLICATESSECTIONHEADERLAYOUTPROVIDER_H
#define PXDUPLICATESSECTIONHEADERLAYOUTPROVIDER_H



#import "PXActionableSectionHeaderLayoutProvider.h"

@interface PXDuplicatesSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider



-(NSInteger)actionTypeForHeaderLayout:(id)arg0 ;
-(id)actionTextForActionType:(NSInteger)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(id)primaryTextForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)sectionHeader:(id)arg0 didPressButtonForActionType:(NSInteger)arg1 sender:(id)arg2 ;


@end


#endif