// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFPARAGRAPHWIDGET_H
#define UIPDFPARAGRAPHWIDGET_H

@class CAShapeLayer, CALayer;
@protocol UIPDFSelectionWidget;

#import <Foundation/Foundation.h>

#import "UIPDFPageView.h"

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget>

 {
    CAShapeLayer *_trackingBorder;
    CGRect _initialRect;
    BOOL _tracking;
    CGRect _currentTrackingRect;
    CALayer *_leftGrabber;
    CALayer *_rightGrabber;
    CALayer *_topGrabber;
    CALayer *_bottomGrabber;
    CALayer *_selectedGrabber;
    CGRect _boundsInPDFSpace;
    *CGColor _grabberColor;
}


@property (readonly, nonatomic) CGPoint currentSelectionPointOnPage;
@property (readonly, nonatomic) CGPoint initialSelectionPointOnPage; // ivar: _initialSelectionPointOnPage
@property (nonatomic) UIPDFPageView *pageView; // ivar: _pageView


-(BOOL)hitTest:(struct CGPoint )arg0 fixedPoint:(struct CGPoint *)arg1 preceeds:(*BOOL)arg2 ;
-(id)init;
-(struct CGPoint )selectedPointFor:(struct CGPoint )arg0 ;
-(struct CGPoint )viewOffset;
-(struct CGRect )adjustRect:(struct CGRect )arg0 toPoint:(struct CGPoint )arg1 ;
-(struct CGRect )selectionBoundsInEffectsSpace;
-(struct CGRect )selectionRectangle;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)endTracking;
-(void)hide;
-(void)layout;
-(void)remove;
-(void)setSelectedGrabber:(NSUInteger)arg0 ;
-(void)setSelectedGrabberPosition:(struct CGRect )arg0 ;
-(void)setSelection:(id)arg0 ;
-(void)track:(struct CGPoint )arg0 ;


@end


#endif