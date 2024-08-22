// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPLAYBUTTON_H
#define PXSTORYPLAYBUTTON_H

@class UIView, NSString, CAShapeLayer;
@protocol PXChangeObserver, PXGReusableView;


#import "PXStoryChromeButton.h"
#import "PXStoryChromeButtonConfiguration.h"
#import "PXStoryPlayButtonConfiguration.h"
#import "PXUpdater.h"
#import "PXStoryViewModel.h"

@interface PXStoryPlayButton : UIView <PXChangeObserver, PXGReusableView>



@property (readonly, nonatomic) NSString *axPauseLabel; // ivar: _axPauseLabel
@property (readonly, nonatomic) NSString *axPlayLabel; // ivar: _axPlayLabel
@property (readonly, nonatomic) NSString *axReplayLabel; // ivar: _axReplayLabel
@property (readonly, nonatomic) PXStoryChromeButton *button; // ivar: _button
@property (readonly, nonatomic) PXStoryChromeButtonConfiguration *buttonConfiguration; // ivar: _buttonConfiguration
@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (retain, nonatomic) PXStoryPlayButtonConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets hitTestEdgeOutsets; // ivar: _hitTestEdgeOutsets
@property (readonly, nonatomic) CAShapeLayer *progressIndicator; // ivar: _progressIndicator
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (copy, nonatomic) PXStoryPlayButtonConfiguration *userData; // ivar: _userData
@property (retain, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateButton;
-(void)_invalidateProgressIndicator;
-(void)_setNeedsUpdate;
-(void)_updateButton;
-(void)_updateProgressIndicator;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif