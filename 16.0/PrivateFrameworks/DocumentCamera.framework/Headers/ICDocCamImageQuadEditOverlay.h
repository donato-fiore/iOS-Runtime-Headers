// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMIMAGEQUADEDITOVERLAY_H
#define ICDOCCAMIMAGEQUADEDITOVERLAY_H

@class UIView, NSString, UIImage, UIColor, NSArray, CALayer, CAShapeLayer, UIBezierPath, NSMutableArray;
@protocol ICDocCamImageQuadEditPanGestureRecognizerDelegate, ICDocCamImageQuadEditOverlayDelegate;


#import "ICDocCamImageQuad.h"
#import "ICDocCamImageQuadEditPanGestureRecognizer.h"

@interface ICDocCamImageQuadEditOverlay : UIView <ICDocCamImageQuadEditPanGestureRecognizerDelegate>



@property (readonly, nonatomic) ICDocCamImageQuad *adjustedQuad;
@property (readonly, nonatomic) BOOL containsPointOutsideOfOverlayBounds;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICDocCamImageQuadEditOverlayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIColor *invalidRectColor; // ivar: _invalidRectColor
@property (nonatomic) BOOL isDisplayingValidQuad; // ivar: _isDisplayingValidQuad
@property (readonly, nonatomic) BOOL isDraggingKnob;
@property (readonly, nonatomic) BOOL isQuadValid;
@property (nonatomic) BOOL isTempOverlay; // ivar: _isTempOverlay
@property (copy, nonatomic) NSArray *knobAccessibilityElements; // ivar: _knobAccessibilityElements
@property (retain, nonatomic) UIColor *knobColor; // ivar: _knobColor
@property (nonatomic) CGFloat knobHeight; // ivar: _knobHeight
@property (retain, nonatomic) CALayer *knobLayer; // ivar: _knobLayer
@property (retain, nonatomic) NSArray *knobs; // ivar: _knobs
@property (nonatomic) CGPoint lastGestureTranslation; // ivar: _lastGestureTranslation
@property (retain, nonatomic) CALayer *loupeContentsLayer; // ivar: _loupeContentsLayer
@property (retain, nonatomic) CALayer *loupeLayer; // ivar: _loupeLayer
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) CAShapeLayer *outlineLayer; // ivar: _outlineLayer
@property (readonly, nonatomic) UIBezierPath *outlinePath;
@property (retain, nonatomic) ICDocCamImageQuadEditPanGestureRecognizer *panGR; // ivar: _panGR
@property (retain, nonatomic) NSMutableArray *panHistory; // ivar: _panHistory
@property (nonatomic) NSUInteger panHistoryIdx; // ivar: _panHistoryIdx
@property (retain, nonatomic) ICDocCamImageQuad *quad; // ivar: _quad
@property (retain, nonatomic) CALayer *selectedKnob; // ivar: _selectedKnob
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tempOverlayMagnification; // ivar: _tempOverlayMagnification
@property (nonatomic) BOOL tempOverlayQuadIsValid; // ivar: _tempOverlayQuadIsValid
@property (readonly, nonatomic) UIColor *validRectColor; // ivar: _validRectColor


-(BOOL)accessibilityIgnoresInvertColors;
-(id)accessibilityElements;
-(id)closestKnobToPoint:(struct CGPoint )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )rectFromApplyingOrientation:(NSInteger)arg0 toContentsRect:(struct CGRect )arg1 ;
-(void)commonInit;
-(void)didPan:(id)arg0 ;
-(void)layoutSubviews;
-(void)setUpKnobs;
-(void)setupLoupeLayerIfNeeded;
-(void)touchesBeganOnQuadEditPanGestureRecognizerDelegate:(id)arg0 ;
-(void)unselectAllKnobs;
-(void)updateKnobLocationsToRect:(id)arg0 ;
-(void)updateOutlineAndKnobColorForCurrentValidityIfNecessary;
-(void)updateOutlineAndKnobColorForIsValid:(BOOL)arg0 ;
-(void)updateOutlineLayer;
-(void)updateSelectedKnobContents;


@end


#endif