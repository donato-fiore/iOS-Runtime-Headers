// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTENTSYNDICATIONSECTIONHEADERLAYOUTPROVIDER_H
#define PXCONTENTSYNDICATIONSECTIONHEADERLAYOUTPROVIDER_H

@class NSString;
@protocol PXPhotosSectionHeaderLayoutProvider, PXPhotosSectionHeaderLayoutViewProvider;

#import <Foundation/Foundation.h>

#import "PXPhotosViewModel.h"

@interface PXContentSyndicationSectionHeaderLayoutProvider : NSObject <PXPhotosSectionHeaderLayoutProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel
@property (readonly, weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutViewProvider> *viewProvider; // ivar: _viewProvider


-(id)createSectionHeaderLayoutForSectionedLayout:(id)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 spec:(id)arg3 outShouldFloat:(*BOOL)arg4 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 viewProvider:(id)arg1 ;
-(void)sectionedLayout:(id)arg0 headerLayout:(id)arg1 didChangeDataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath )arg3 hasSectionChanges:(BOOL)arg4 ;


@end


#endif