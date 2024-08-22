// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCONTENTSYNDICATIONGADGETVIEW_H
#define PXCONTENTSYNDICATIONGADGETVIEW_H

@class UICollectionViewCell, SLAttributionView, NSString, UIView;
@protocol PXChangeObserver, SLAttributionViewDelegate, PXContentSyndicationGadgetViewDelegate;


#import "PXContentSyndicationItemAssetPreviewView.h"
#import "PXRegionOfInterest.h"
#import "PXContentSyndicationGadgetViewModel.h"

@interface PXContentSyndicationGadgetView : UICollectionViewCell <PXChangeObserver, SLAttributionViewDelegate>

 {
    PXContentSyndicationItemAssetPreviewView *_assetPreviewView;
    SLAttributionView *_socialLayerAttributionView;
}


@property (nonatomic) BOOL contentViewHiddenForOneUpTransition; // ivar: _contentViewHiddenForOneUpTransition
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXContentSyndicationGadgetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXContentSyndicationGadgetViewModel *viewModel; // ivar: _viewModel


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 viewModel:(id)arg1 ;
-(id)contextMenuItemsForAttributionView:(id)arg0 ;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)replyActionFromAttributionView;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 applyLayoutToSubviews:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateKeyImageCount;
-(void)_updateKeyImages;
-(void)_updateOverlayTitle;
-(void)_updateSocialLayerAttributionView;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif