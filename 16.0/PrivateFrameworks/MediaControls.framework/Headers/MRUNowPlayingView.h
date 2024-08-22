// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUNOWPLAYINGVIEW_H
#define MRUNOWPLAYINGVIEW_H

@class UIView, NSString;
@protocol UIPointerInteractionDelegate;


#import "MRUArtworkView.h"
#import "MRUNowPlayingContainerView.h"
#import "MRUNowPlayingHeaderView.h"
#import "MRUVisualStylingProvider.h"
#import "MRUNowPlayingTimeControlsView.h"
#import "MRUNowPlayingTransportControlsView.h"
#import "MRUNowPlayingVolumeControlsView.h"

@interface MRUNowPlayingView : UIView <UIPointerInteractionDelegate>



@property (nonatomic) CGSize artworkOverrideSize; // ivar: _artworkOverrideSize
@property (readonly, nonatomic) MRUArtworkView *artworkView; // ivar: _artworkView
@property (retain, nonatomic) MRUNowPlayingContainerView *containerView; // ivar: _containerView
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // ivar: _headerView
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (nonatomic) BOOL showArtworkView; // ivar: _showArtworkView
@property (nonatomic) BOOL showSuggestionsView; // ivar: _showSuggestionsView
@property (nonatomic) BOOL showTimeControlsView; // ivar: _showTimeControlsView
@property (nonatomic) BOOL showTransportControlsView; // ivar: _showTransportControlsView
@property (nonatomic) BOOL showVolumeControlsView; // ivar: _showVolumeControlsView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) UIView *suggestionsView; // ivar: _suggestionsView
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsHorizontalLayout; // ivar: _supportsHorizontalLayout
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // ivar: _timeControlsView
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView; // ivar: _transportControlsView
@property (nonatomic) BOOL useArtworkOverrideSize; // ivar: _useArtworkOverrideSize
@property (readonly, nonatomic) MRUNowPlayingVolumeControlsView *volumeControlsView; // ivar: _volumeControlsView


-(id)init;
-(id)initWithWaveformView:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )suggestionsFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)updateArtworkStyle;
-(void)updateDimmed;
-(void)updateOnScreen;
-(void)updateTextAlignment;
-(void)updateVisibility;


@end


#endif