// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUSESSIONNOWPLAYINGVIEW_H
#define MRUSESSIONNOWPLAYINGVIEW_H

@class UIView;


#import "MRUSessionArtworkView.h"
#import "MRUEqualizerView.h"
#import "MRUSessionNowPlayingHeaderView.h"
#import "MRUSessionAccessoryView.h"
#import "MRUVisualStylingProvider.h"
#import "MRUNowPlayingTimeControlsView.h"
#import "MRUNowPlayingTransportControlsView.h"
#import "MRUWaveformView.h"

@interface MRUSessionNowPlayingView : UIView

@property (readonly, nonatomic) MRUSessionArtworkView *artworkView; // ivar: _artworkView
@property (readonly, nonatomic) MRUEqualizerView *equalizerView; // ivar: _equalizerView
@property (readonly, nonatomic) MRUSessionNowPlayingHeaderView *headerView; // ivar: _headerView
@property (readonly, nonatomic) MRUSessionAccessoryView *leadingView; // ivar: _leadingView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // ivar: _timeControlsView
@property (readonly, nonatomic) MRUSessionAccessoryView *trailingView; // ivar: _trailingView
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView; // ivar: _transportControlsView
@property (readonly, nonatomic) MRUWaveformView *waveformView; // ivar: _waveformView


-(CGFloat)preferredHeightForBottomSafeArea;
-(id)initWithWaveformView:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateVisibilty;


@end


#endif