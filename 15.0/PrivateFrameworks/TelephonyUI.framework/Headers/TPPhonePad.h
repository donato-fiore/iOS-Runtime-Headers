// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPHONEPAD_H
#define TPPHONEPAD_H

@class UIControl, NSString;
@protocol TPDialerKeypadProtocol, TPDialerKeypadDelegate;



@interface TPPhonePad : UIControl <TPDialerKeypadProtocol>

 {
    NSInteger _downKey;
    NSInteger _highlightKey;
    id<TPDialerKeypadDelegate> *_delegate;
    BOOL _playsSounds;
    CGFloat _topHeight;
    CGFloat _midHeight;
    CGFloat _bottomHeight;
    CGFloat _leftWidth;
    CGFloat _midWidth;
    CGFloat _rightWidth;
    *__CFSet _inflightSounds;
    *__CFDictionary _keyToButtonMap;
    unsigned int _incompleteSounds;
    BOOL _delegateSoundCallbacks;
    BOOL _soundsActivated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)launchFieldTestIfNeeded:(id)arg0 ;
+(BOOL)shouldStringAutoDial:(id)arg0 givenLastChar:(char)arg1 ;
+(void)_delayedDeactivate;
-(BOOL)cancelTouchTracking;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_yFudge;
-(NSInteger)indexForHighlightedKey;
-(id)_buttonForKeyAtIndex:(NSUInteger)arg0 ;
-(id)_highlightedImage;
-(id)_imageByCroppingImage:(id)arg0 toRect:(struct CGRect )arg1 ;
-(id)_keypadImage;
-(id)_pressedImage;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)_keyForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_keypadOrigin;
-(struct CGRect )_rectForKey:(NSUInteger)arg0 ;
-(struct CGRect )_updateRect:(struct CGRect )arg0 withScale:(CGFloat)arg1 ;
-(void)_activateSounds:(BOOL)arg0 ;
-(void)_appResumed;
-(void)_appSuspended;
-(void)_handleKey:(id)arg0 forUIEvent:(id)arg1 ;
-(void)_handleKeyPressAndHoldForDownKey:(id)arg0 ;
-(void)_handleKeyPressAndHoldForHighlightedKey:(id)arg0 ;
-(void)_handleKeyPressAndHoldForKey:(NSInteger)arg0 ;
-(void)_notifySoundCompletionIfNecessary:(unsigned int)arg0 ;
-(void)_playSoundForKey:(NSUInteger)arg0 ;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg0 ;
-(void)_stopSoundForKey:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)highlightKeyAtIndex:(NSInteger)arg0 ;
-(void)movedFromWindow:(id)arg0 ;
-(void)movedToWindow:(id)arg0 ;
-(void)performTapActionCancelForHighlightedKey;
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)removeFromSuperview;
-(void)setButton:(id)arg0 forKeyAtIndex:(NSUInteger)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setNeedsDisplayForKey:(int)arg0 ;
-(void)setPlaysSounds:(BOOL)arg0 ;


@end


#endif