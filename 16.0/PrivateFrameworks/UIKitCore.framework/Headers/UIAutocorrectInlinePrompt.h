// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIAUTOCORRECTINLINEPROMPT_H
#define UIAUTOCORRECTINLINEPROMPT_H

@class NSString, NSMutableArray;


#import "UIView.h"

@interface UIAutocorrectInlinePrompt : UIView {
    CGRect m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    NSMutableArray *m_typedTextViews;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    BOOL m_fits;
    BOOL m_mouseDown;
    CGFloat m_originalTypedTextRectCorrectionAmount;
}


@property (nonatomic) unsigned int usageTrackingMask; // ivar: m_usageTrackingMask


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAcceptableTextEffectsFrame:(struct CGRect )arg0 afterScrollBy:(CGFloat)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)prepareForAnimation:(struct CGRect )arg0 ;
-(id)correction;
-(id)correctionAnimationView;
-(id)correctionShadowView;
-(id)correctionView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)typedText;
-(id)typedTextAnimationView;
-(id)typedTextView;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(struct CGRect )correctionFrameFromDesiredFrame:(struct CGRect )arg0 textHeight:(int)arg1 withExtraGap:(CGFloat)arg2 ;
-(struct CGRect )horizontallySquishedCorrectionFrame:(struct CGRect )arg0 ;
-(struct CGRect )shadowFrameForFrame:(struct CGRect )arg0 ;
-(void)addTypedTextRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)dismiss;
-(void)removePromptSubviews;
-(void)setCorrection:(id)arg0 typedText:(id)arg1 inRect:(struct CGRect )arg2 maxX:(CGFloat)arg3 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif