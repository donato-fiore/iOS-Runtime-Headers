// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSHEADERVIEW_H
#define MEDIACONTROLSHEADERVIEW_H

@class UIView, MTMaterialView, UIImageView, NSString, MPButton, UIButton, UILabel, MPCPlayerPath, UIPointerInteraction, MPUMarqueeView, MPRouteLabel, MTVisualStylingProvider;
@protocol UIPointerInteractionDelegate;


#import "MediaControlsRoutingButtonView.h"

@interface MediaControlsHeaderView : UIView <UIPointerInteractionDelegate>



@property (retain, nonatomic) MTMaterialView *artworkBackground; // ivar: _artworkBackground
@property (retain, nonatomic) UIView *artworkContentView; // ivar: _artworkContentView
@property (retain, nonatomic) UIImageView *artworkView; // ivar: _artworkView
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPButton *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *launchNowPlayingAppButton; // ivar: _launchNowPlayingAppButton
@property (nonatomic) BOOL marqueeEnabled; // ivar: _marqueeEnabled
@property (nonatomic) CGSize overrideSize; // ivar: _overrideSize
@property (retain, nonatomic) UIImageView *placeholderArtworkView; // ivar: _placeholderArtworkView
@property (retain, nonatomic) UILabel *placeholderLabel; // ivar: _placeholderLabel
@property (copy, nonatomic) NSString *placeholderString; // ivar: _placeholderString
@property (copy, nonatomic) MPCPlayerPath *playerPath; // ivar: _playerPath
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) MPUMarqueeView *primaryMarqueeView; // ivar: _primaryMarqueeView
@property (copy, nonatomic) NSString *primaryString; // ivar: _primaryString
@property (retain, nonatomic) MPRouteLabel *routeLabel; // ivar: _routeLabel
@property (nonatomic, getter=isRouting) BOOL routing; // ivar: _routing
@property (retain, nonatomic) MediaControlsRoutingButtonView *routingButton; // ivar: _routingButton
@property (nonatomic) BOOL scalePlaceholderImage; // ivar: _scalePlaceholderImage
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) MPUMarqueeView *secondaryMarqueeView; // ivar: _secondaryMarqueeView
@property (copy, nonatomic) NSString *secondaryString; // ivar: _secondaryString
@property (retain, nonatomic) UIView *shadow; // ivar: _shadow
@property (nonatomic) BOOL shouldUseOverrideSize; // ivar: _shouldUseOverrideSize
@property (nonatomic) BOOL showPlaceholderString; // ivar: _showPlaceholderString
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )layoutTextInAvailableBounds:(struct CGRect )arg0 setFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateRTL;
-(void)_updateStyle;
-(void)clearOverrideSize;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateArtworkStyle;


@end


#endif