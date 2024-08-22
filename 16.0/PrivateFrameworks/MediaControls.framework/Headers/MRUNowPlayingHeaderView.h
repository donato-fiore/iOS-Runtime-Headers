// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUNOWPLAYINGHEADERVIEW_H
#define MRUNOWPLAYINGHEADERVIEW_H

@class UIView;


#import "MRUNowPlayingLabelView.h"
#import "MRUTransportButton.h"
#import "MRUVisualStylingProvider.h"
#import "MRUWaveformView.h"

@interface MRUNowPlayingHeaderView : UIView

@property (readonly, nonatomic) MRUNowPlayingLabelView *labelView; // ivar: _labelView
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (readonly, nonatomic) MRUTransportButton *routingButton; // ivar: _routingButton
@property (nonatomic) BOOL showRoutingButton; // ivar: _showRoutingButton
@property (nonatomic) BOOL showTransportButton; // ivar: _showTransportButton
@property (nonatomic) BOOL showWaveform; // ivar: _showWaveform
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) CGFloat textCenterOffsetY; // ivar: _textCenterOffsetY
@property (readonly, nonatomic) MRUTransportButton *transportButton; // ivar: _transportButton
@property (retain, nonatomic) MRUWaveformView *waveformView; // ivar: _waveformView


-(id)init;
-(id)initWithWaveformView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)updateVisibility;


@end


#endif