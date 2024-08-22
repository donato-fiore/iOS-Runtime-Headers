// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVISUALEFFECTALPHAENTRY_H
#define _UIVISUALEFFECTALPHAENTRY_H

@class UIVisualEffectViewEntry;



@interface _UIVisualEffectAlphaEntry : UIVisualEffectViewEntry {
    CGFloat _initialAlpha;
    CGFloat _finalAlpha;
}




-(id)copyForTransitionOut;
-(id)copyForTransitionToEffect:(id)arg0 ;
-(id)description;
-(id)initWithInitialAlpha:(CGFloat)arg0 finalAlpha:(CGFloat)arg1 ;
-(void)addEffectToView:(id)arg0 ;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif