// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUACTIVITYNOWPLAYINGVIEW_H
#define MRUACTIVITYNOWPLAYINGVIEW_H

@class UIView, NSArray;


#import "MRUActivityAccessoryView.h"
#import "MRUEqualizerView.h"
#import "MRUActivityNowPlayingHeaderView.h"
#import "MRUVisualStylingProvider.h"
#import "MRUNowPlayingTimeControlsView.h"
#import "MRUNowPlayingTransportControlsView.h"
#import "MRUWaveformView.h"

@interface MRUActivityNowPlayingView : UIView

@property (readonly, nonatomic) NSArray *artworkViews; // ivar: _artworkViews
@property (readonly, nonatomic) MRUActivityAccessoryView *detachedMinimalView; // ivar: _detachedMinimalView
@property (readonly, nonatomic) MRUEqualizerView *equalizerView; // ivar: _equalizerView
@property (readonly, nonatomic) MRUActivityNowPlayingHeaderView *headerView; // ivar: _headerView
@property (readonly, nonatomic) MRUActivityAccessoryView *leadingView; // ivar: _leadingView
@property (nonatomic) BOOL showWaveform; // ivar: _showWaveform
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // ivar: _timeControlsView
@property (readonly, nonatomic) MRUActivityAccessoryView *trailingView; // ivar: _trailingView
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView; // ivar: _transportControlsView
@property (readonly, nonatomic) MRUWaveformView *waveformView; // ivar: _waveformView


-(CGFloat)preferredHeightForBottomSafeArea;
-(id)initWithWaveformView:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateVisibilty;


@end


#endif