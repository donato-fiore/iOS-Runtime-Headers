// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTPAGECONTROL_H
#define SBICONLISTPAGECONTROL_H

@class UIPageControl, NSString, _UILegibilitySettings, UITapGestureRecognizer, NSArray;
@protocol UIGestureRecognizerDelegate, SBIconListPageControlDelegate;



@interface SBIconListPageControl : UIPageControl <UIGestureRecognizerDelegate>

 {
    CGFloat _cachedDefaultHeight;
}


@property (nonatomic) BOOL actsAsButton; // ivar: _actsAsButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultHeight;
@property (weak, nonatomic) NSObject<SBIconListPageControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEffectivelyVisible) BOOL effectivelyVisible;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (copy, nonatomic) NSArray *touchIgnoreRects; // ivar: _touchIgnoreRects


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)effectiveLegibilitySettings;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)pageControlCurrentPageDidChange:(id)arg0 ;
-(void)setButtonHighlighted:(BOOL)arg0 ;
-(void)tapGestureDidUpdate:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif