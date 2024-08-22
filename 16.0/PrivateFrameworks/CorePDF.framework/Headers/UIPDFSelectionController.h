// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFSELECTIONCONTROLLER_H
#define UIPDFSELECTIONCONTROLLER_H

@protocol UIPDFSelectionWidget;

#import <Foundation/Foundation.h>

#import "UIPDFPageView.h"

@interface UIPDFSelectionController : NSObject {
    BOOL _resizingWidget;
    CGPoint _selectionFixedPoint;
    CGRect _selectionBounds;
    BOOL _preceeds;
    BOOL _hiding;
    NSInteger _firstIndex;
    NSInteger _lastIndex;
    CGPoint _startPoint;
    BOOL _needsLayout;
    BOOL _cancelled;
    BOOL _instantModeIsSuspended;
}


@property (readonly, nonatomic) CGPoint adjustedPoint; // ivar: _adjustedPoint
@property (readonly, nonatomic) CGPoint currentSelectionPoint;
@property (readonly, nonatomic) CGPoint initialSelectionPoint;
@property (nonatomic) BOOL instantHighlightMode; // ivar: _instantHighlightMode
@property (readonly, nonatomic) BOOL isTracking; // ivar: _isTracking
@property (nonatomic) UIPDFPageView *pageView; // ivar: _pageView
@property (readonly, nonatomic) BOOL rangeMode; // ivar: _rangeMode
@property (readonly, nonatomic) NSObject<UIPDFSelectionWidget> *selectionWidget; // ivar: _selectionWidget


-(BOOL)shouldTrackAt:(struct CGPoint )arg0 ;
-(BOOL)useParagraphMode;
-(id)description;
-(id)init;
-(struct CGPoint )selectedPointOffset;
-(void)addSelectionWidget:(id)arg0 ;
-(void)adjustSelection:(struct CGPoint )arg0 ;
-(void)clearSelection;
-(void)dealloc;
-(void)endTracking:(struct CGPoint )arg0 ;
-(void)extendSelectionToParagraph;
-(void)hideWidget;
-(void)layoutSelections;
-(void)selectionHide:(id)arg0 ;
-(void)selectionHideFromAncestor:(id)arg0 ;
-(void)selectionShow:(id)arg0 ;
-(void)selectionShowDelayed:(id)arg0 ;
-(void)selectionShowToAncestor:(id)arg0 ;
-(void)setSelectionFor:(struct CGPoint )arg0 ;
-(void)startSelectingAt:(struct CGPoint )arg0 ;
-(void)startTracking:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
-(void)startTracking:(struct CGPoint )arg0 showMagnifier:(*BOOL)arg1 ;
-(void)suspendInstantHighlightMode;
-(void)tracking:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
-(void)tracking:(struct CGPoint )arg0 showMagnifier:(*BOOL)arg1 ;


@end


#endif