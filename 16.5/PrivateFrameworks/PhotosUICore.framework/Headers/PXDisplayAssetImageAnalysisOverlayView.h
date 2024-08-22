// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDISPLAYASSETIMAGEANALYSISOVERLAYVIEW_H
#define PXDISPLAYASSETIMAGEANALYSISOVERLAYVIEW_H

@class UIView;


#import "PXDisplayAssetViewModel.h"

@interface PXDisplayAssetImageAnalysisOverlayView : UIView

@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel; // ivar: _viewModel


+(BOOL)changedImageAnalysisOverlayNeededForViewModelChange:(NSUInteger)arg0 ;
+(BOOL)isImageAnalysisOverlayNeededForViewModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;


@end


#endif