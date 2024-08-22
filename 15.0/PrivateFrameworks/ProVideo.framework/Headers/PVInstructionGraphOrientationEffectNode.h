// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVINSTRUCTIONGRAPHORIENTATIONEFFECTNODE_H
#define PVINSTRUCTIONGRAPHORIENTATIONEFFECTNODE_H



#import "PVInstructionGraphEffectNode.h"
#import "PVEffect.h"

@interface PVInstructionGraphOrientationEffectNode : PVInstructionGraphEffectNode {
    BOOL _bypassOutOfRangeEffects;
    PVEffect *_effect;
}




+(id)newOrientationEffectNodeWithInputs:(id)arg0 inputIDs:(id)arg1 effect:(id)arg2 ;
-(BOOL)bypassOutOfRangeEffects;
-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)effect;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)setBypassOutOfRangeEffects:(BOOL)arg0 ;
-(void)setEffect:(id)arg0 ;


@end


#endif