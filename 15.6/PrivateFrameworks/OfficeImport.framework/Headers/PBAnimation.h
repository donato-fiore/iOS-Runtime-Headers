// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBANIMATION_H
#define PBANIMATION_H


#import <Foundation/Foundation.h>


@interface PBAnimation : NSObject



+(BOOL)hasPpt10Animations:(id)arg0 ;
+(NSUInteger)paragraphIndexFromBinaryTextBytesCharacterIndex:(NSUInteger)arg0 srcDrawable:(id)arg1 ;
+(id)newChartBuild:(id)arg0 ;
+(id)newColorFromBehaviorColor:(struct PptAnimColorBehavior_Color_Struct *)arg0 ;
+(id)newParaBuild:(id)arg0 ;
+(id)parseBehaviorContainer:(id)arg0 timeNode:(id)arg1 state:(id)arg2 ;
+(id)parseMediaContainer:(id)arg0 timeNode:(id)arg1 state:(id)arg2 ;
+(void)generatePpt10AnimationFromState:(id)arg0 timings:(id)arg1 ;
+(void)mapAnimationsFromSlide:(id)arg0 tgtSlide:(id)arg1 state:(id)arg2 ;
+(void)parseAnimateBehaviorContainer:(id)arg0 animBehavior:(id)arg1 timeNode:(id)arg2 ;
+(void)parseBuildList:(id)arg0 buildMap:(id)arg1 state:(id)arg2 ;
+(void)parseCmdBehaviorContainer:(id)arg0 cmdBehavior:(id)arg1 timeNode:(id)arg2 ;
+(void)parseColorBehaviorContainer:(id)arg0 colorBehavior:(id)arg1 timeNode:(id)arg2 ;
+(void)parseEffectBehaviorContainer:(id)arg0 effectBehavior:(id)arg1 timeNode:(id)arg2 ;
+(void)parseMotionBehaviorContainer:(id)arg0 motionBehavior:(id)arg1 timeNode:(id)arg2 ;
+(void)parsePpt10Animation:(id)arg0 timings:(id)arg1 state:(id)arg2 ;
+(void)parseRotationBehaviorContainer:(id)arg0 rotationBehavior:(id)arg1 timeNode:(id)arg2 ;
+(void)parseTargetContainerHolder:(id)arg0 setTargetObj:(id)arg1 state:(id)arg2 ;
+(void)parseTimeConditionsHolder:(id)arg0 commonData:(id)arg1 ;
+(void)parseTimeNodeContainer:(id)arg0 siblings:(id)arg1 state:(id)arg2 ;
+(void)parseTimeNodeVariants:(id)arg0 commonData:(id)arg1 ;


@end


#endif