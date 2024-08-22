// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDYNAMICCARETINPUT_H
#define _UIDYNAMICCARETINPUT_H

@class TIHandwritingStrokes, NSTimer;


#import "UIView.h"
#import "UIDelayedAction.h"
#import "_UIDynamicCaretDot.h"

@interface _UIDynamicCaretInput : UIView {
    *CGContext _bitmapContext;
    NSInteger _fadeCount;
    CGPoint _lastViewLoc;
    CGRect _inkedAreaOfBitmapContext;
}


@property (retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // ivar: _accumulatedStrokes
@property (retain, nonatomic) UIDelayedAction *committedAction; // ivar: _committedAction
@property (retain, nonatomic) _UIDynamicCaretDot *dotView; // ivar: _dotView
@property (retain, nonatomic) NSTimer *fadeTimer; // ivar: _fadeTimer
@property (readonly, nonatomic) BOOL hasInk;
@property (readonly, nonatomic) BOOL isInking;


-(CGFloat)inkWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_fadeInk;
-(void)addInkPoint:(struct CGPoint )arg0 fromLastPoint:(BOOL)arg1 ;
-(void)addTouchAtPoint:(struct CGPoint )arg0 ;
-(void)cancelTouchAtPoint:(struct CGPoint )arg0 ;
-(void)clearAndNotify:(BOOL)arg0 ;
-(void)clearFadeTimer;
-(void)committedStrokes;
-(void)dealloc;
-(void)drawPoint:(struct CGPoint )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endTouchAtPoint:(struct CGPoint )arg0 ;
-(void)log;
-(void)send;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)startTouchAtPoint:(struct CGPoint )arg0 ;


@end


#endif