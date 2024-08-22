// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXACTIONABLESECTIONHEADERLAYOUTPROVIDER_H
#define PXACTIONABLESECTIONHEADERLAYOUTPROVIDER_H

@class NSString, UIImage;
@protocol PXGSingleViewLayoutDelegate, PXActionableSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate, PXPhotosSectionHeaderLayoutViewProvider;

#import <Foundation/Foundation.h>

#import "PXActionableSectionHeaderView.h"
#import "PXPhotosViewModel.h"

@interface PXActionableSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, PXActionableSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImage *gradientImage; // ivar: _gradientImage
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *invalidationDelegate; // ivar: _invalidationDelegate
@property (readonly, nonatomic) PXActionableSectionHeaderView *referenceHeaderView; // ivar: _referenceHeaderView
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *topHeaderInvalidationDelegate; // ivar: _topHeaderInvalidationDelegate
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel
@property (readonly, weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutViewProvider> *viewProvider; // ivar: _viewProvider


-(BOOL)wantsHeaderForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)wantsTopHeaderForDataSource:(id)arg0 ;
-(NSInteger)actionTypeForHeaderLayout:(id)arg0 ;
-(id)_createSectionHeaderLayoutForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 spec:(id)arg2 outShouldFloat:(*BOOL)arg3 ;
-(id)actionTextForActionType:(NSInteger)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(id)configurationForSingleViewLayout:(id)arg0 ;
-(id)createSectionHeaderLayoutForSectionedLayout:(id)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 spec:(id)arg3 outShouldFloat:(*BOOL)arg4 ;
-(id)createTopHeaderLayoutForDataSource:(id)arg0 spec:(id)arg1 outShouldFloat:(*BOOL)arg2 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 viewProvider:(id)arg1 ;
-(id)primaryTextForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)primaryTopHeaderTextForDataSource:(id)arg0 ;
-(id)secondaryTextForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)secondaryTopHeaderTextForDataSource:(id)arg0 ;
-(struct CGSize )singleViewLayout:(id)arg0 desiredSizeForReferenceSize:(struct CGSize )arg1 ;
-(void)_getPrimaryText:(*id)arg0 secondaryText:(*id)arg1 forLayout:(id)arg2 ;
-(void)configureSectionHeaderLayout:(id)arg0 inAssetSectionLayout:(id)arg1 forSectionedLayout:(id)arg2 ;
-(void)configureTopHeaderLayout:(id)arg0 dataSource:(id)arg1 spec:(id)arg2 ;
-(void)sectionHeader:(id)arg0 didPressButtonForActionType:(NSInteger)arg1 sender:(id)arg2 ;
-(void)sectionHeader:(id)arg0 didToggleSelectedState:(BOOL)arg1 ;
-(void)sectionedLayout:(id)arg0 headerLayout:(id)arg1 didChangeDataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath )arg3 hasSectionChanges:(BOOL)arg4 ;
-(void)setSelectedState:(BOOL)arg0 forItemsInSectionHeaderLayout:(id)arg1 ;
-(void)topHeaderLayout:(id)arg0 didChangeDataSource:(id)arg1 ;


@end


#endif