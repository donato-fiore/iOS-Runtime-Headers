// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFANNOTATIONCONTROLLER_H
#define UIPDFANNOTATIONCONTROLLER_H

@class UIColor, NSString, CALayer;
@protocol UIGestureRecognizerDelegate, NSObject><UIPDFAnnotationControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIPDFAnnotation.h"
#import "UIPDFPageView.h"

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate>

 {
    os_unfair_lock_s _lock;
    CGPoint _startPoint;
    BOOL _moving;
    ? _initialRange;
    CGSize _cachedMarginNoteSize;
}


@property (nonatomic) BOOL allowEditing; // ivar: _allowEditing
@property (retain, nonatomic) UIPDFAnnotation *currentAnnotation; // ivar: _currentAnnotation
@property (nonatomic) UIColor *currentColor; // ivar: _currentColor
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<NSObject><UIPDFAnnotationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CALayer *drawingSurface; // ivar: _drawingSurface
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL makeUnderlineAnnotation; // ivar: makeUnderlineAnnotation
@property (readonly, nonatomic) UIPDFPageView *pageView; // ivar: _pageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tracking; // ivar: _tracking


+(BOOL)pageHasAnnotations:(id)arg0 ;
+(id)newAnnotation:(struct CGPDFDictionary *)arg0 type:(char *)arg1 ;
+(struct CGImage *)newMaskImage:(struct CGPDFPage *)arg0 size:(struct CGSize )arg1 ;
-(BOOL)annotationBriefPressRecognized:(id)arg0 ;
-(BOOL)annotationLongPressRecognized:(id)arg0 ;
-(BOOL)annotationSingleTapRecognized:(id)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)intersects:(struct CGPDFSelection *)arg0 with:(struct CGPDFSelection *)arg1 ;
-(BOOL)isLinkAnnotationAt:(struct CGPoint )arg0 ;
-(BOOL)isSelection:(struct CGPDFSelection *)arg0 equalTo:(struct CGPDFSelection *)arg1 ;
-(BOOL)linkAnnotationShouldBegin:(id)arg0 ;
-(BOOL)madeInstantAnnotation;
-(BOOL)trackMoved:(struct CGPoint )arg0 ;
-(BOOL)willDoSomethingWithTap:(struct CGPoint )arg0 ;
-(BOOL)willHandleTouchGestureAtPoint:(struct CGPoint )arg0 ;
-(BOOL)willTrackAtPoint:(struct CGPoint )arg0 ;
-(id)_linkAnnotationViewAt:(struct CGPoint )arg0 ;
-(id)annotatePageSelection;
-(id)annotationAt:(struct CGPoint )arg0 ;
-(id)init;
-(id)initWithPageView:(id)arg0 ;
-(id)linkAnnotationAt:(struct CGPoint )arg0 ;
-(id)marginNoteImage:(id)arg0 ;
-(struct CGImage *)newHighlightMaskImageFor:(struct CGRect )arg0 ;
-(struct CGImage *)underlineImageFor:(struct CGRect )arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toSurfaceLayer:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toSurfaceLayer:(id)arg1 ;
-(struct CGSize )marginNoteImageSize;
-(void)_addAnnotationViewFor:(id)arg0 ;
-(void)_addLinkAnnotationViewFor:(id)arg0 ;
-(void)_addRecognizers:(id)arg0 ;
-(void)_initialRange:(struct CGPoint )arg0 ;
-(void)addAnnotation:(id)arg0 ;
-(void)addDrawingSurface:(id)arg0 view:(id)arg1 ;
-(void)addLinkAnnotationViews;
-(void)annotationTapRecognized:(id)arg0 ;
-(void)copyAttributesOf:(id)arg0 to:(id)arg1 ;
-(void)dealloc;
-(void)didEndTrackingAtPoint:(struct CGPoint )arg0 ;
-(void)doubleTapRecognized:(id)arg0 ;
-(void)drawAnnotations:(struct CGContext *)arg0 ;
-(void)endTrackingAtPoint:(struct CGPoint )arg0 ;
-(void)hostViewDidScroll;
-(void)layoutAnnotationViews:(id)arg0 ;
-(void)linkPressRecognized:(id)arg0 ;
-(void)lock;
-(void)mergeSelectionOfAnnotation:(id)arg0 ;
-(void)resetBeingPressedForRecognizer:(id)arg0 withDelegate:(id)arg1 withAnnotation:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)setSurfacePosition:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)startTracking:(struct CGPoint )arg0 ;
-(void)tracking:(struct CGPoint )arg0 ;
-(void)unlock;


@end


#endif