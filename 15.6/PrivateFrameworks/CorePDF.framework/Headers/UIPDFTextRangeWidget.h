// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPDFTEXTRANGEWIDGET_H
#define UIPDFTEXTRANGEWIDGET_H

@class CALayer;
@protocol UIPDFSelectionWidget;

#import <Foundation/Foundation.h>

#import "UIPDFPageView.h"

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget>

 {
    CALayer *_startSelectionGrabber;
    CALayer *_startBar;
    CALayer *_endSelectionGrabber;
    CALayer *_endBar;
    CALayer *_startHandle;
    CALayer *_endHandle;
    CALayer *_fixedSelectionGrabber;
    CGFloat _handleHeight;
    CGFloat _handleWidth;
    CGFloat _offsetX;
    CGFloat _offsetY;
    NSUInteger _startIndex;
    NSUInteger _endIndex;
    *CGColor _grabberColor;
    NSInteger _startRectangle;
    NSInteger _endRectangle;
    BOOL _startLeft;
    BOOL _endRight;
    CGFloat _startX;
    CGFloat _endX;
}


@property (readonly, nonatomic) CGPoint currentSelectionPointOnPage;
@property (readonly, nonatomic) CGPoint initialSelectionPointOnPage; // ivar: _initialSelectionPointOnPage
@property (nonatomic) UIPDFPageView *pageView; // ivar: _pageView


-(BOOL)hitTest:(struct CGPoint )arg0 fixedPoint:(struct CGPoint *)arg1 preceeds:(*BOOL)arg2 ;
-(id)description;
-(id)init;
-(struct CGPoint )selectedPointFor:(struct CGPoint )arg0 ;
-(struct CGPoint )viewOffset;
-(struct CGRect )selectionRectangle;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)endTracking;
-(void)hide;
-(void)layout;
-(void)layoutEndSelectionGrabber:(struct CGRect )arg0 transform:(struct CGAffineTransform *)arg1 width:(CGFloat)arg2 extraHeight:(CGFloat)arg3 unitSize:(struct CGSize )arg4 ;
-(void)layoutStartSelectionGrabber:(struct CGRect )arg0 transform:(struct CGAffineTransform *)arg1 width:(CGFloat)arg2 extraHeight:(CGFloat)arg3 unitSize:(struct CGSize )arg4 ;
-(void)layoutWidget;
-(void)remove;
-(void)setSelectedGrabber:(NSUInteger)arg0 ;
-(void)setSelection:(id)arg0 ;
-(void)track:(struct CGPoint )arg0 ;


@end


#endif