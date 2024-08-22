// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHSCROLLABLEZOOMINGICONVIEWINTERACTION_H
#define SBHSCROLLABLEZOOMINGICONVIEWINTERACTION_H



#import "SBHScrollableIconViewInteraction.h"

@interface SBHScrollableZoomingIconViewInteraction : SBHScrollableIconViewInteraction

@property (nonatomic) BOOL considersFolderIconTargets; // ivar: _considersFolderIconTargets


-(BOOL)isIconViewTheInteractingTargetIconView:(id)arg0 ;
-(CGFloat)_clippingFudgeInset;
-(void)handleTargetIconViewClipped:(id)arg0 ;


@end


#endif