// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVLISTTEMPLATEVIEW_H
#define _TVLISTTEMPLATEVIEW_H

@class UIView, UIVisualEffectView, UIFocusContainerGuide;



@interface _TVListTemplateView : UIView {
    UIVisualEffectView *_backdropView;
    UIVisualEffectView *_bgVisualEffectView;
    CGFloat _bgVisualEffectOffset;
    UIFocusContainerGuide *_previewFocusGuide;
    UIFocusContainerGuide *_overallFocusGuide;
}


@property (nonatomic, getter=isBackdropEnabled) BOOL backdropEnabled; // ivar: _backdropEnabled
@property (retain, nonatomic) UIView *bannerView; // ivar: _bannerView
@property (retain, nonatomic) UIView *bgImageView; // ivar: _bgImageView
@property (nonatomic) BOOL floatingBanner; // ivar: _floatingBanner
@property (readonly, nonatomic) NSInteger listAlignment;
@property (retain, nonatomic) UIView *listView; // ivar: _listView
@property (retain, nonatomic) UIView *previewView; // ivar: _previewView
@property (nonatomic) BOOL shouldAdjustListForTabBar; // ivar: _shouldAdjustListForTabBar
@property (nonatomic) BOOL shouldAdjustPreviewForTabBar; // ivar: _shouldAdjustPreviewForTabBar


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(void)adjustScrollForListView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setOverlayBlurOffset:(CGFloat)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;


@end


#endif