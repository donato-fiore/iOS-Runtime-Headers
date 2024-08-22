// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREVEALCONTINUOUSEXPOSESTRIPSGESTUREMODIFIER_H
#define SBREVEALCONTINUOUSEXPOSESTRIPSGESTUREMODIFIER_H



#import "SBGestureSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBRevealContinuousExposeStripsGestureModifier : SBGestureSwitcherModifier {
    CGFloat _progress;
}


@property (readonly, nonatomic) SBAppLayout *initialAppLayout; // ivar: _initialAppLayout


-(CGFloat)continuousExposeAppStripUnoccludedProgress;
-(id)handleGestureEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 initialAppLayout:(id)arg1 ;


@end


#endif