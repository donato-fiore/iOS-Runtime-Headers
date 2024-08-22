// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIGRAVITYWELLADAPTOREFFECT_H
#define _UIGRAVITYWELLADAPTOREFFECT_H

@class UIGravityWellEffect;
@protocol _UIClickHighlightEffect;


#import "_UIGravityWellAdaptorInteraction.h"

@interface _UIGravityWellAdaptorEffect : UIGravityWellEffect

@property (retain, nonatomic) NSObject<_UIClickHighlightEffect> *adaptedEffect; // ivar: _adaptedEffect
@property (retain, nonatomic) _UIGravityWellAdaptorInteraction *adaptorInteraction; // ivar: _adaptorInteraction
@property (nonatomic) CGFloat maxProgress; // ivar: _maxProgress


+(id)effectWithAdaptedClickEffect:(id)arg0 ;
-(id)previewForContinuingToEffectWithPreview:(id)arg0 ;
-(id)secondaryBodyPreviews;
-(void)addCompletion:(id)arg0 ;
-(void)begin;
-(void)end;
-(void)endForHandOff;
-(void)updateWithProgress:(CGFloat)arg0 ;


@end


#endif