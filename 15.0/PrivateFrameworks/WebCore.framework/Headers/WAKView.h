// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WAKVIEW_H
#define WAKVIEW_H

@class NSMutableSet;


#import "WAKResponder.h"

@interface WAKView : WAKResponder {
    _WKViewContext viewContext;
    *_WKView viewRef;
    NSMutableSet *subviewReferences;
    BOOL _isHidden;
    BOOL _drawsOwnDescendants;
}




+(id)_wrapperForViewRef:(struct _WKView *)arg0 ;
+(id)focusView;
+(void)_setInterpolationQuality:(int)arg0 ;
-(BOOL)_handleResponderCall:(int)arg0 ;
-(BOOL)_selfHandleEvent:(id)arg0 ;
-(BOOL)accessibilityIsIgnored;
-(BOOL)inLiveResize;
-(BOOL)isDescendantOf:(id)arg0 ;
-(BOOL)isHiddenOrHasHiddenAncestor;
-(BOOL)mouse:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(BOOL)needsDisplay;
-(BOOL)needsPanelToBecomeKey;
-(BOOL)scrollRectToVisible:(struct CGRect )arg0 ;
-(float)scale;
-(id)_initWithViewRef:(struct _WKView *)arg0 ;
-(id)_subviewReferences;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)lastScrollableAncestor;
-(id)nextKeyView;
-(id)nextResponder;
-(id)nextValidKeyView;
-(id)previousKeyView;
-(id)previousValidKeyView;
-(id)subviews;
-(id)superview;
-(id)window;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromView:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toView:(id)arg1 ;
-(struct CGRect )bounds;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromView:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toView:(id)arg1 ;
-(struct CGRect )frame;
-(struct CGRect )visibleRect;
-(struct CGSize )convertSize:(struct CGSize )arg0 toView:(id)arg1 ;
-(struct _WKView *)_viewRef;
-(unsigned int)autoresizingMask;
-(void)_appendDescriptionToString:(id)arg0 atLevel:(int)arg1 ;
-(void)_drawRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 lockFocus:(BOOL)arg2 ;
-(void)_lockFocusViewInContext:(struct CGContext *)arg0 ;
-(void)_setDrawsOwnDescendants:(BOOL)arg0 ;
-(void)_unlockFocusViewInContext:(struct CGContext *)arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)dealloc;
-(void)display;
-(void)displayIfNeeded;
-(void)displayRect:(struct CGRect )arg0 ;
-(void)displayRectIgnoringOpacity:(struct CGRect )arg0 ;
-(void)displayRectIgnoringOpacity:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)frameSizeChanged;
-(void)handleEvent:(id)arg0 ;
-(void)invalidateGState;
-(void)layout;
-(void)layoutIfNeeded;
-(void)lockFocus;
-(void)releaseGState;
-(void)removeFromSuperview;
-(void)scrollPoint:(struct CGPoint )arg0 ;
-(void)setAutoresizingMask:(unsigned int)arg0 ;
-(void)setBoundsOrigin:(struct CGPoint )arg0 ;
-(void)setBoundsSize:(struct CGSize )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setFrameOrigin:(struct CGPoint )arg0 ;
-(void)setFrameSize:(struct CGSize )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setNeedsDisplay:(BOOL)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsLayout:(BOOL)arg0 ;
-(void)setNextKeyView:(id)arg0 ;
-(void)setScale:(float)arg0 ;
-(void)unlockFocus;
-(void)viewDidMoveToWindow;
-(void)viewWillDraw;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif