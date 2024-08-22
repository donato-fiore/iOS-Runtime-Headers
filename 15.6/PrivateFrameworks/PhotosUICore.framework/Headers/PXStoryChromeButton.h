// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCHROMEBUTTON_H
#define PXSTORYCHROMEBUTTON_H

@class UIButton, UIImage, UIImageView, UIView, UIContextMenuInteraction, NSString, UIVisualEffectView, UILabel, UIPointerInteraction;
@protocol UIPointerInteractionDelegate, PXGReusableView, OS_os_log;


#import "PXUpdater.h"
#import "PXStoryChromeButtonConfiguration.h"

@interface PXStoryChromeButton : UIButton <UIPointerInteractionDelegate, PXGReusableView>



@property (retain, nonatomic) UIImage *assetImage; // ivar: _assetImage
@property (readonly, nonatomic) UIImageView *assetImageView; // ivar: _assetImageView
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIImageView *badgeSystemImageView; // ivar: _badgeSystemImageView
@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (retain, nonatomic) UIContextMenuInteraction *customContextMenuInteraction; // ivar: _customContextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger imageRequestID; // ivar: _imageRequestID
@property (nonatomic) BOOL isHovered; // ivar: _isHovered
@property (nonatomic) BOOL isMenuOpen; // ivar: _isMenuOpen
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImageView *systemImageView; // ivar: _systemImageView
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (copy, nonatomic) PXStoryChromeButtonConfiguration *userData; // ivar: _userData


+(id)_createBadgeSystemImageView;
+(id)_createSystemImageView;
+(struct CGSize )_sizeForAttributedLabel:(id)arg0 ;
+(struct CGSize )sizeWithConfiguration:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_badgeImageWithSystemName:(id)arg0 ;
-(id)_createAssetImageView;
-(id)_createLabel;
-(id)_imageWithSystemName:(id)arg0 ;
-(id)_imageWithSystemName:(id)arg0 symbolConfiguration:(id)arg1 ;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_configureActions;
-(void)_configureBackgroundView:(id)arg0 ;
-(void)_configureVisualEffectView:(id)arg0 ;
-(void)_handleImageResult:(id)arg0 info:(id)arg1 forDisplayAsset:(id)arg2 requestID:(NSInteger)arg3 synchronous:(BOOL)arg4 ;
-(void)_invalidateAppearance;
-(void)_invalidateAssetImage;
-(void)_px_invalidatePointerInteraction;
-(void)_setNeedsUpdate;
-(void)_updateAppearance;
-(void)_updateAssetImage;
-(void)_updateAssetImageView;
-(void)_updateBackgroundView;
-(void)_updateBackgroundViewCornerRadius;
-(void)_updateBadgeSytemImageView;
-(void)_updateEffectViewCornerRadius;
-(void)_updateLabel;
-(void)_updateSystemImageView;
-(void)_updateVisualEffectView;
-(void)becomeReusable;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif