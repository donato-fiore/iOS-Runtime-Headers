// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPANORAMAVIEW_H
#define CAMPANORAMAVIEW_H

@class UIView, NSString;
@protocol CAMPanoramaViewDelegate;


#import "CAMPanoramaArrowView.h"
#import "CAMPanoramaPaintingStatus.h"
#import "CAMPanoramaLabel.h"
#import "CAMPanoramaLevelView.h"
#import "CAMPanoramaPreviewView.h"

@interface CAMPanoramaView : UIView

@property (readonly, copy, nonatomic) NSString *_arrowString; // ivar: __arrowString
@property (nonatomic, setter=_setArrowUpdateFrame:) NSUInteger _arrowUpdateFrame; // ivar: __arrowUpdateFrame
@property (readonly, nonatomic) CAMPanoramaArrowView *_arrowView; // ivar: __arrowView
@property (nonatomic, setter=_setCurrentAverageSpeed:) CGFloat _currentAverageSpeed; // ivar: __currentAverageSpeed
@property (retain, nonatomic, setter=_setCurrentPaintingStatus:) CAMPanoramaPaintingStatus *_currentPaintingStatus; // ivar: __currentPaintingStatus
@property (nonatomic, getter=_isCurrentlyMovingTooFast, setter=_setCurrentlyMovingTooFast:) BOOL _currentlyMovingTooFast; // ivar: __currentlyMovingTooFast
@property (nonatomic, getter=_isCurrentlyShowingMoveInstructions, setter=_setCurrentlyShowingMoveInstructions:) BOOL _currentlyShowingMoveInstructions; // ivar: __currentlyShowingMoveInstructions
@property (nonatomic, setter=_setFilteredNormalizedBaselineOffset:) CGFloat _filteredNormalizedBaselineOffset; // ivar: __filteredNormalizedBaselineOffset
@property (nonatomic, setter=_setInitialArrowCenter:) CGPoint _initialArrowCenter; // ivar: __initialArrowCenter
@property (readonly, nonatomic) CAMPanoramaLabel *_instructionLabel; // ivar: __instructionLabel
@property (readonly, copy, nonatomic) NSString *_instructionString; // ivar: __instructionString
@property (nonatomic, setter=_setLastLayoutBounds:) CGRect _lastLayoutBounds; // ivar: __lastLayoutBounds
@property (readonly, nonatomic) CAMPanoramaLevelView *_levelView; // ivar: __levelView
@property (readonly, nonatomic) UIView *_maskingView; // ivar: __maskingView
@property (readonly, copy, nonatomic) NSString *_moveDownString; // ivar: __moveDownString
@property (readonly, copy, nonatomic) NSString *_moveUpString; // ivar: __moveUpString
@property (readonly, nonatomic) *CGFloat _previousSpeeds; // ivar: __previousSpeeds
@property (readonly, copy, nonatomic) NSString *_speedString; // ivar: __speedString
@property (readonly, nonatomic) UIView *_stripBackgroundView; // ivar: __stripBackgroundView
@property (readonly, nonatomic) UIView *_stripContainerView; // ivar: __stripContainerView
@property (weak, nonatomic) NSObject<CAMPanoramaViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) UIView *instructionView;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isPainting, setter=_setPainting:) BOOL painting; // ivar: _painting
@property (nonatomic) CGSize panoramaCaptureSize; // ivar: _panoramaCaptureSize
@property (readonly, nonatomic) CAMPanoramaPreviewView *previewView; // ivar: _previewView


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPanoramaPreviewView:(id)arg0 layoutStyle:(NSInteger)arg1 ;
-(struct CGRect )_frameForArrowViewWithDirection:(NSInteger)arg0 offset:(CGFloat)arg1 ;
-(struct CGSize )_previewSizeForBounds:(struct CGRect )arg0 ;
-(void)_cancelDelayedMoveInstructions;
-(void)_hideArrowInstructionsAfterDelay;
-(void)_hideInstructionLabel;
-(void)_hideSpeedInstructionsAfterDelay;
-(void)_resetPaintingUIAnimated:(BOOL)arg0 ;
-(void)_showArrowInstructions;
-(void)_showMoveDownInstructions;
-(void)_showMoveDownInstructionsAfterDelay;
-(void)_showMoveUpInstructions;
-(void)_showMoveUpInstructionsAfterDelay;
-(void)_showSpeedInstructions;
-(void)_updateInstructionLabelForInstruction:(NSInteger)arg0 ;
-(void)dealloc;
-(void)finishedProcessingPanorama;
-(void)layoutSubviews;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)startPainting;
-(void)startProcessingPanorama;
-(void)stopPainting;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePaintingWithStatus:(id)arg0 ;


@end


#endif