// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXALBUMSECTIONHEADERLAYOUTPROVIDER_H
#define PXALBUMSECTIONHEADERLAYOUTPROVIDER_H

@class NSString, UIImage;
@protocol PXGSingleViewLayoutDelegate, _PXAlbumSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate, PXPhotosSectionHeaderLayoutViewProvider;

#import <Foundation/Foundation.h>

#import "PXPhotosViewModel.h"

@interface PXAlbumSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, _PXAlbumSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImage *gradientImage; // ivar: _gradientImage
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *invalidationDelegate;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *topHeaderInvalidationDelegate;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel
@property (readonly, weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutViewProvider> *viewProvider; // ivar: _viewProvider


-(id)configurationForSingleViewLayout:(id)arg0 ;
-(id)createSectionHeaderLayoutForSectionedLayout:(id)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 spec:(id)arg3 outShouldFloat:(*BOOL)arg4 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 viewProvider:(id)arg1 ;
-(struct CGSize )singleViewLayout:(id)arg0 desiredSizeForReferenceSize:(struct CGSize )arg1 ;
-(void)didTapSectionHeader:(id)arg0 ;
-(void)sectionHeader:(id)arg0 didToggleFiltersDisabled:(BOOL)arg1 ;
-(void)sectionHeader:(id)arg0 didToggleSelectedState:(BOOL)arg1 ;
-(void)sectionedLayout:(id)arg0 headerLayout:(id)arg1 didChangeDataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath )arg3 hasSectionChanges:(BOOL)arg4 ;


@end


#endif