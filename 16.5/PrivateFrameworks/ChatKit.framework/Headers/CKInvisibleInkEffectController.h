// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKINVISIBLEINKEFFECTCONTROLLER_H
#define CKINVISIBLEINKEFFECTCONTROLLER_H

@class UIView, NSString, UIView<CKInvisibleInkEffectHostView>, NSTimer;
@protocol CKInvisibleInkEffectViewDelegate;

#import <Foundation/Foundation.h>

#import "CKInvisibleInkEffectView.h"

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate>



@property (retain, nonatomic) UIView *borrowedEffectViewSnapshot; // ivar: _borrowedEffectViewSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKInvisibleInkEffectView *effectView; // ivar: _effectView
@property (nonatomic) BOOL effectViewNeedsReset; // ivar: _effectViewNeedsReset
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView<CKInvisibleInkEffectHostView> *hostView; // ivar: _hostView
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (retain, nonatomic) NSTimer *resumeTimer; // ivar: _resumeTimer
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(id)borrowEffectView;
-(id)initWithHostView:(id)arg0 ;
-(void)_updateBorrowedEffectViewSnapshot;
-(void)dealloc;
-(void)hostViewDidUpdateSnapshot:(id)arg0 ;
-(void)invisibleInkEffectViewWasUncovered:(id)arg0 ;
-(void)prepareForDisplay;
-(void)resumeTimerFired:(id)arg0 ;
-(void)returnBorrowedEffectView;
-(void)suspendForTimeInterval:(CGFloat)arg0 ;
-(void)updateBorrowedEffectViewSnapshot;


@end


#endif