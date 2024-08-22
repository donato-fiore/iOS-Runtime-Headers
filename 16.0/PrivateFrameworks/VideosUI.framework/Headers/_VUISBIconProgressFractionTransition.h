// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VUISBICONPROGRESSFRACTIONTRANSITION_H
#define _VUISBICONPROGRESSFRACTIONTRANSITION_H

@class VUISBIconProgressTransition;



@interface _VUISBIconProgressFractionTransition : VUISBIconProgressTransition {
    CGFloat _targetFraction;
}




+(id)newTransitionToFraction:(CGFloat)arg0 ;
-(BOOL)isCompleteWithView:(id)arg0 ;
-(void)_updateView:(id)arg0 forDisplayedFraction:(CGFloat)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg0 ;
-(void)updateToFraction:(CGFloat)arg0 ;
-(void)updateView:(id)arg0 withElapsedTime:(CGFloat)arg1 ;


@end


#endif