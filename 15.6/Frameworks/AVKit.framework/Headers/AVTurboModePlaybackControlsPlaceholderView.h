// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTURBOMODEPLAYBACKCONTROLSPLACEHOLDERVIEW_H
#define AVTURBOMODEPLAYBACKCONTROLSPLACEHOLDERVIEW_H

@class UIView, NSValue, NSString;


#import "AVObservationController.h"
#import "AVPlayerController.h"
#import "AVButton.h"
#import "AVStyleSheet.h"
#import "AVVolumeButtonControl.h"

@interface AVTurboModePlaybackControlsPlaceholderView : UIView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger includedControlType; // ivar: _includedControlType
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline; // ivar: _overrideLayoutMarginsWhenEmbeddedInline
@property (nonatomic) CGAffineTransform overrideTransformForProminentPlayButton; // ivar: _overrideTransformForProminentPlayButton
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (nonatomic) NSInteger preferredUnobscuredArea; // ivar: _preferredUnobscuredArea
@property (weak, nonatomic) AVButton *prominentPlayButton; // ivar: _prominentPlayButton
@property (retain, nonatomic) UIView *prominentPlayButtonContainer; // ivar: _prominentPlayButtonContainer
@property (retain, nonatomic) AVStyleSheet *styleSheet; // ivar: _styleSheet
@property (weak, nonatomic) AVVolumeButtonControl *volumeButton; // ivar: _volumeButton
@property (retain, nonatomic) UIView *volumeButtonContainer; // ivar: _volumeButtonContainer
@property (copy, nonatomic) NSString *volumeButtonMicaPackageStateName; // ivar: _volumeButtonMicaPackageStateName


-(BOOL)hasVisibleControls;
-(id)_makeProminentPlayButtonAndContainer;
-(id)_makeVolumeButtonAndContainer;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 styleSheet:(id)arg1 ;
-(struct CGRect )_frameForIncludedViewType:(NSInteger)arg0 ;
-(void)_makeProminentPlayButtonAndContainerIfNeeded;
-(void)_makeVolumeButtonAndContainerIfNeeded;
-(void)_updateFramesAndHitRectInsets;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif