// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSHEADERVIEW_H
#define MEDIACONTROLSHEADERVIEW_H

@class UIView, MTMaterialView, UIImageView, _UICursorInteraction, NSString, MPButton, UIButton, UILabel, MPCPlayerPath, MPUMarqueeView, MPRouteLabel, MTVisualStylingProvider;
@protocol _UICursorInteractionDelegate;


#import "MediaControlsRoutingButtonView.h"

@interface MediaControlsHeaderView : UIView <_UICursorInteractionDelegate>



@property (retain, nonatomic) MTMaterialView *artworkBackground; // ivar: _artworkBackground
@property (retain, nonatomic) UIView *artworkContentView; // ivar: _artworkContentView
@property (retain, nonatomic) UIImageView *artworkView; // ivar: _artworkView
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (retain, nonatomic) _UICursorInteraction *cursorInteraction; // ivar: _cursorInteraction
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


-(id)cursorInteraction:(id)arg0 regionForLocation:(struct CGPoint )arg1 defaultRegion:(id)arg2 ;
-(id)cursorInteraction:(id)arg0 styleForRegion:(id)arg1 modifiers:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
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