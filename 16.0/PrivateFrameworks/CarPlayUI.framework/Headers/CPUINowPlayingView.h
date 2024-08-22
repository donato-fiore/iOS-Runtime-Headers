// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUINOWPLAYINGVIEW_H
#define CPUINOWPLAYINGVIEW_H

@class UIView, NSArray, UIFocusContainerGuide, NSLayoutConstraint;
@protocol CPUINowPlayingLayoutProtocol;


#import "CPUIShadowImageView.h"
#import "CPUIPlayModeControlView.h"
#import "CPUIProgressView.h"
#import "CPUISongDetailsView.h"
#import "CPUITransportControlView.h"

@interface CPUINowPlayingView : UIView

@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (readonly, nonatomic) CPUIShadowImageView *artworkViewBrick; // ivar: _artworkViewBrick
@property (retain, nonatomic) UIFocusContainerGuide *bottomRegionFocusContainerGuide; // ivar: _bottomRegionFocusContainerGuide
@property (retain, nonatomic) UIFocusContainerGuide *controlsFocusContainerGuide; // ivar: _controlsFocusContainerGuide
@property (readonly, nonatomic) NSObject<CPUINowPlayingLayoutProtocol> *nowPlayingLayout; // ivar: _nowPlayingLayout
@property (readonly, nonatomic) CPUIPlayModeControlView *playModeControlView; // ivar: _playModeControlView
@property (readonly, nonatomic) CPUIProgressView *progressView; // ivar: _progressView
@property (readonly, nonatomic) CPUISongDetailsView *songDetailsView; // ivar: _songDetailsView
@property (retain, nonatomic) NSLayoutConstraint *songDetailsViewHeightConstraint; // ivar: _songDetailsViewHeightConstraint
@property (readonly, nonatomic) CPUITransportControlView *transportControlView; // ivar: _transportControlView
@property (retain, nonatomic) NSArray *verticalSpacerLayoutGuides; // ivar: _verticalSpacerLayoutGuides


-(id)_constraintsForNowPlayingLayout:(id)arg0 ;
-(id)_verticalSpacerLayoutGuidesForNowPlayingLayout:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)recalculateLayout:(BOOL)arg0 allowsAlbumArt:(BOOL)arg1 hasDataSource:(BOOL)arg2 viewArea:(struct CGRect )arg3 safeArea:(struct CGRect )arg4 rightHandDrive:(BOOL)arg5 ;


@end


#endif