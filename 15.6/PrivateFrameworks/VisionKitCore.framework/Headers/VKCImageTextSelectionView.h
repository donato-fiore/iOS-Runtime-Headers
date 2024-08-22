// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCIMAGETEXTSELECTIONVIEW_H
#define VKCIMAGETEXTSELECTIONVIEW_H

@class NSArray, UIBezierPath, CAShapeLayer, CALayer, NSString;
@protocol OS_dispatch_queue, VKCImageTextSelectionViewDelegate;


#import "VKCImageBaseOverlayView.h"
#import "VKTextRange.h"

@interface VKCImageTextSelectionView : VKCImageBaseOverlayView

@property (retain, nonatomic) NSArray *allLineQuads; // ivar: _allLineQuads
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // ivar: _analyticsQueue
@property (retain, nonatomic) UIBezierPath *borderedNormalizedHighlightPath; // ivar: _borderedNormalizedHighlightPath
@property (readonly, nonatomic) CGRect currentContentsRectInLayerCoodinates;
@property (retain, nonatomic) VKTextRange *documentRange; // ivar: _documentRange
@property (retain, nonatomic) CAShapeLayer *highlightLayer; // ivar: _highlightLayer
@property (nonatomic) CGRect highlightLayerStartContentsRect; // ivar: _highlightLayerStartContentsRect
@property (nonatomic) BOOL highlightSelectableItems; // ivar: _highlightSelectableItems
@property (retain, nonatomic) CALayer *highlightShadowLayer; // ivar: _highlightShadowLayer
@property (nonatomic) BOOL longPressDataDetectorsInTextMode; // ivar: _longPressDataDetectorsInTextMode
@property (retain, nonatomic) UIBezierPath *normalizedHighlightPath; // ivar: _normalizedHighlightPath
@property (retain, nonatomic) VKTextRange *selectedRange; // ivar: _selectedRange
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) NSString *text;
@property (weak, nonatomic) NSObject<VKCImageTextSelectionViewDelegate> *textSelectionDelegate; // ivar: _textSelectionDelegate


-(BOOL)containsSelectedTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)imageContainsPoint:(struct CGPoint )arg0 ;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSUInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)boundedPositionFromPosition:(id)arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSUInteger)arg1 ;
-(id)closestBlockOfType:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 maxDistance:(CGFloat)arg2 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)closestQuadForBlockOfType:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 maxDistance:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSUInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSUInteger)arg1 ;
-(id)quadsForAllWordsForCurrentLayout;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)textInRange:(id)arg0 ;
-(struct CGAffineTransform )transformForHighlightLayerInCurrentBounds;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(void)performHighlightSelectableTextAnimated:(BOOL)arg0 ;
-(void)sendAnalyticsEventWithSelector:(SEL)arg0 type:(NSInteger)arg1 source:(NSInteger)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setRecognitionResult:(id)arg0 ;
-(void)updateHighlightLayerContentIfVisible;
-(void)updateHighlightLayerGeometry;
-(void)updateHighlightLayerGeometryIfVisible;
-(void)updateSelectionRectsForBoundsChange;


@end


#endif