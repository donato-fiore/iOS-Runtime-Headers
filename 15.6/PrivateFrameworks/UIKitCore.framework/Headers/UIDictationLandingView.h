// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONLANDINGVIEW_H
#define UIDICTATIONLANDINGVIEW_H

@class CADisplayLink, NSOperation, NSString;
@protocol _UIBasicAnimationFactory, UITextCursorAssertion;


#import "UIView.h"
#import "UITextRange.h"

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory>

 {
    UITextRange *_range;
    id *_placeholder;
    BOOL _didHaveText;
    CGFloat _angle;
    CGFloat _diameter;
    CADisplayLink *_displayLink;
    CGFloat _startTime;
    CGFloat _shrinkStartTime;
    BOOL _shrinking;
    NSOperation *_afterShrinkCompletionInvocation;
}


@property (retain, nonatomic) NSObject<UITextCursorAssertion> *blinkAssertion; // ivar: _blinkAssertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL willInsertResult; // ivar: _willInsertResult


+(CGFloat)diameterForLineHeight:(CGFloat)arg0 ;
+(CGFloat)widthForLineHeight:(CGFloat)arg0 ;
+(NSInteger)fallbackPlaceholderLength;
+(id)activeInstance;
+(id)sharedInstance;
-(BOOL)delegateWasEmpty;
-(BOOL)hasActivePlaceholder;
-(CGFloat)fadeOutDuration;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)advanceLanding:(id)arg0 ;
-(void)clearRotation;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)errorShakeDidFinish;
-(void)hideCursor;
-(void)rotateBy:(CGFloat)arg0 ;
-(void)showCursor;
-(void)shrinkWithCompletion:(id)arg0 ;
-(void)startDisplayLinkIfNecessary;
-(void)startLandingIfNecessary;
-(void)stopLanding;
-(void)stopLandingForError;
-(void)updatePosition;


@end


#endif