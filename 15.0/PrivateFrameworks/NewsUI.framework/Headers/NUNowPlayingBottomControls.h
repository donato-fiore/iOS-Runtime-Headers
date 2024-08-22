// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNOWPLAYINGBOTTOMCONTROLS_H
#define NUNOWPLAYINGBOTTOMCONTROLS_H

@class UIView, NSString, MPMediaControls, UIButton, UIContextMenuInteraction, MPRouteButton;
@protocol UIContextMenuInteractionDelegate, NUNowPlayingBottomControlsDelegate;


#import "NUTouchInsetsButton.h"

@interface NUNowPlayingBottomControls : UIView <UIContextMenuInteractionDelegate>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUNowPlayingBottomControlsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NUTouchInsetsButton *ellipsisButton; // ivar: _ellipsisButton
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat inset; // ivar: _inset
@property (retain, nonatomic) MPMediaControls *mediaControls; // ivar: _mediaControls
@property (retain, nonatomic) UIButton *playbackSpeedButton; // ivar: _playbackSpeedButton
@property (retain, nonatomic) UIContextMenuInteraction *playbackSpeedInteraction; // ivar: _playbackSpeedInteraction
@property (retain, nonatomic) MPRouteButton *routeButton; // ivar: _routeButton
@property (readonly) Class superclass;


+(id)_accessibilityValueForRate:(CGFloat)arg0 ;
+(id)_labelForRate:(CGFloat)arg0 ;
-(id)buttonTitleFont;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 inset:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)ellipsisButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)playbackSpeedButtonTapped:(id)arg0 ;
-(void)routeButtonTapped:(id)arg0 ;
-(void)routeButtonTouchDown:(id)arg0 ;
-(void)routeButtonTouchUpOutside:(id)arg0 ;
-(void)routeDidChange:(id)arg0 ;
-(void)setRate:(CGFloat)arg0 ;
-(void)startAirplayStatusUpdates;
-(void)updateEllipsisButtonImage;
-(void)updatePlaybackSpeedButtonFont;
-(void)updateRouteButtonWithRoute:(id)arg0 ;


@end


#endif