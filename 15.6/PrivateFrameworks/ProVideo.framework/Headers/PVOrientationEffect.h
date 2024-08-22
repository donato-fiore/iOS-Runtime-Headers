// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVORIENTATIONEFFECT_H
#define PVORIENTATIONEFFECT_H

@protocol PVEffectTimeNotificationDelegate;


#import "PVHeliumEffect.h"

@interface PVOrientationEffect : PVHeliumEffect

@property (nonatomic) CGFloat animationTime; // ivar: _animationTime
@property (nonatomic) unsigned int inputID; // ivar: _inputID
@property (nonatomic) int oldInputID; // ivar: _oldInputID
@property (nonatomic) BOOL oldShowAlt; // ivar: _oldShowAlt
@property (nonatomic) BOOL showAlt; // ivar: _showAlt
@property (nonatomic) CGFloat switchSetTime; // ivar: _switchSetTime
@property (nonatomic) CGFloat switchTime; // ivar: _switchTime
@property (weak) NSObject<PVEffectTimeNotificationDelegate> *timeNotificationDelegate; // ivar: _timeNotificationDelegate


+(void)registerEffectWithID:(id)arg0 displayName:(id)arg1 ;
-(id)initWithEffectID:(id)arg0 ;
-(id)inputsForTime:(struct ? )arg0 ;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 inputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct HGRef<HGNode> )previewHGNodeForTime:(struct ? )arg0 inputHGNode:(struct HGRef<HGNode> )arg1 outputSize:(struct CGSize )arg2 renderer:(*void)arg3 ;
-(struct HGRef<HGXForm> )rotationNodeForPercent:(float)arg0 atCenter:(struct CGPoint )arg1 ;
-(void)dealloc;
-(void)orientationChangeRequest:(id)arg0 ;


@end


#endif