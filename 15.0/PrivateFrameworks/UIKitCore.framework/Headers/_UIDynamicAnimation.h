// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDYNAMICANIMATION_H
#define _UIDYNAMICANIMATION_H


#import <Foundation/Foundation.h>


@interface _UIDynamicAnimation : NSObject {
    id *_completion;
    int _state;
    BOOL _began;
    BOOL _running;
    BOOL _completing;
    BOOL _yield;
    BOOL _grouped;
    BOOL _usesNSTimer;
}


@property (readonly, nonatomic) int state;


+(id)dynamicAnimationForView:(id)arg0 withInitialValue:(CGFloat)arg1 velocity:(CGFloat)arg2 type:(int)arg3 anchorPoint:(struct CGPoint )arg4 ;
+(void)_updateAnimations:(id)arg0 ;
+(void)_updateAnimations:(id)arg0 timer:(id)arg1 ;
+(void)_updateAnimationsWithTimer:(id)arg0 ;
-(BOOL)_animateForInterval:(CGFloat)arg0 ;
-(BOOL)_isGrouped;
-(BOOL)_isRunning;
-(BOOL)_shouldYield;
-(BOOL)_usesNSTimer;
-(id)description;
-(id)init;
-(void)_appendDescriptionToString:(id)arg0 atLevel:(int)arg1 ;
-(void)_appendSubclassDescription:(id)arg0 atLevel:(int)arg1 ;
// -(void)_callAppliers:(id)arg0 additionalEndAppliers:(unk)arg1 done:(id)arg2  ;
-(void)_cancelWithAppliers:(id)arg0 ;
-(void)_completeWithFinished:(BOOL)arg0 ;
-(void)_setGrouped:(BOOL)arg0 ;
-(void)_setShouldYield:(BOOL)arg0 ;
-(void)_setUsesNSTimer:(BOOL)arg0 ;
-(void)_stopAnimation;
-(void)dealloc;
-(void)runWithCompletion:(id)arg0 ;
// -(void)runWithCompletion:(id)arg0 forScreen:(unk)arg1 runLoopMode:(id)arg2  ;
-(void)stop;


@end


#endif