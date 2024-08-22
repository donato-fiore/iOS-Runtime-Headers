// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUNOWPLAYINGCONTROLSVIEW_H
#define MRUNOWPLAYINGCONTROLSVIEW_H

@class UIView;


#import "MRUNowPlayingHeaderView.h"
#import "MRUVisualStylingProvider.h"
#import "MRUNowPlayingTimeControlsView.h"
#import "MRUNowPlayingTransportControlsView.h"
#import "MRUNowPlayingVolumeControlsView.h"

@interface MRUNowPlayingControlsView : UIView

@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // ivar: _headerView
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic) BOOL showTimeControlsView; // ivar: _showTimeControlsView
@property (nonatomic) BOOL showTransportControlsView; // ivar: _showTransportControlsView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (nonatomic) BOOL supportsHorizontalLayout; // ivar: _supportsHorizontalLayout
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // ivar: _timeControlsView
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView; // ivar: _transportControlsView
@property (readonly, nonatomic) MRUNowPlayingVolumeControlsView *volumeControlsView; // ivar: _volumeControlsView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)updateTimeControlVisibility:(id)arg0 ;
-(void)updateVisibility;


@end


#endif