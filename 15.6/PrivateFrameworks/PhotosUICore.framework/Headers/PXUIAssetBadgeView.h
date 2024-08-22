// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIASSETBADGEVIEW_H
#define PXUIASSETBADGEVIEW_H

@class UIView, UILabel;
@protocol PXUIAssetBadgeViewDelegate;


#import "_PXUIAssetBadgeTopGroup.h"
#import "_PXUIAssetBadgeImageView.h"

@interface PXUIAssetBadgeView : UIView {
    ? _delegateRespondsTo;
    BOOL _isPerformingUpdate;
    ? _needsUpdateFlags;
    _PXUIAssetBadgeTopGroup *_topLeftPrimaryGroup;
    _PXUIAssetBadgeTopGroup *_topLeftSecondaryGroup;
    _PXUIAssetBadgeTopGroup *_topRightGroup;
    _PXUIAssetBadgeImageView *_bottomLeadingImageView;
    _PXUIAssetBadgeImageView *_bottomTrailingImageView;
    UILabel *_bottomLabel;
    CGSize _contentSize;
}


@property (readonly, nonatomic) BOOL _wantsBottomLabel;
@property (nonatomic) PXAssetBadgeInfo badgeInfo; // ivar: _badgeInfo
@property (nonatomic) CGSize bottomElementsPadding; // ivar: _bottomElementsPadding
@property (nonatomic) CGFloat contentWidth; // ivar: _contentWidth
@property (weak, nonatomic) NSObject<PXUIAssetBadgeViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isOverContent) BOOL overContent; // ivar: _overContent
@property (nonatomic) NSInteger style; // ivar: _style


+(CGFloat)preferredHeightForStyle:(NSInteger)arg0 ;
+(id)measuringLabel;
+(void)preloadResourcesForStyle:(NSInteger)arg0 ;
-(BOOL)_needsUpdate;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_updateTopGroup:(id)arg0 withBadgeInfo:(struct PXAssetBadgeInfo )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleButton:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateBackground;
-(void)_invalidateBottomLabel;
-(void)_invalidateBottomLeadingImage;
-(void)_invalidateBottomTrailingImage;
-(void)_invalidateContentSize;
-(void)_invalidateTopLeftElements;
-(void)_invalidateTopRightElements;
-(void)_layoutBottomCornersImages;
-(void)_layoutBottomLabel;
-(void)_layoutTopGroup:(id)arg0 ;
-(void)_removeViewsFromGroup:(id)arg0 ;
-(void)_setBackgroundImage:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateBackgroundIfNeeded;
-(void)_updateBottomLabelIfNeeded;
-(void)_updateBottomLeadingImageIfNeeded;
-(void)_updateBottomTrailingImageIfNeeded;
-(void)_updateContentSizeIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateTopLeftElementsIfNeeded;
-(void)_updateTopRightElementsIfNeeded;
-(void)layoutSubviews;
// -(void)performChanges:(id)arg0 animated:(unk)arg1  ;
-(void)prepareForReuse;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif