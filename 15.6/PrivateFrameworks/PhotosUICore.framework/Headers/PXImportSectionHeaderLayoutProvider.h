// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXIMPORTSECTIONHEADERLAYOUTPROVIDER_H
#define PXIMPORTSECTIONHEADERLAYOUTPROVIDER_H

@class PLDateRangeFormatter, NSString, UIImage;
@protocol PXGSingleViewLayoutDelegate, _PXImportSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider, PXPhotosSectionHeaderLayoutViewProvider;

#import <Foundation/Foundation.h>

#import "PXImportHistorySectionHeaderView.h"
#import "PXPhotosViewModel.h"

@interface PXImportSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, _PXImportSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider>



@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter; // ivar: _dateRangeFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImage *gradientImage; // ivar: _gradientImage
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXImportHistorySectionHeaderView *referenceHeaderView; // ivar: _referenceHeaderView
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel
@property (readonly, weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutViewProvider> *viewProvider; // ivar: _viewProvider


-(id)configurationForSingleViewLayout:(id)arg0 ;
-(id)createSectionHeaderLayoutForSectionedLayout:(id)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 spec:(id)arg3 outShouldFloat:(*BOOL)arg4 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 viewProvider:(id)arg1 ;
-(struct CGSize )singleViewLayout:(id)arg0 desiredSizeForReferenceSize:(struct CGSize )arg1 ;
-(void)sectionHeader:(id)arg0 didToggleSelectedState:(BOOL)arg1 ;
-(void)sectionedLayout:(id)arg0 headerLayout:(id)arg1 didChangeDataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath )arg3 hasSectionChanges:(BOOL)arg4 ;


@end


#endif