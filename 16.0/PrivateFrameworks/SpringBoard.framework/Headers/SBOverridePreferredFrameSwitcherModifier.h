// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBOVERRIDEPREFERREDFRAMESWITCHERMODIFIER_H
#define SBOVERRIDEPREFERREDFRAMESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBDisplayItem.h"

@interface SBOverridePreferredFrameSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem
@property (nonatomic) CGPoint newPreferredCenter; // ivar: _newPreferredCenter
@property (nonatomic) CGRect newPreferredFrame;
@property (nonatomic) CGSize newPreferredSize; // ivar: _newPreferredSize


-(id)initWithDisplayItem:(id)arg0 ;
-(id)initWithNewPreferredCenter:(struct CGPoint )arg0 forDisplayItem:(id)arg1 ;
-(id)initWithNewPreferredFrame:(struct CGRect )arg0 forDisplayItem:(id)arg1 ;
-(id)initWithNewPreferredSize:(struct CGSize )arg0 forDisplayItem:(id)arg1 ;
-(id)initWithNewPreferredSize:(struct CGSize )arg0 newPreferredCenter:(struct CGPoint )arg1 forDisplayItem:(id)arg2 ;
-(struct CGRect )preferredFrameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 bounds:(struct CGRect )arg2 interfaceOrientation:(NSInteger)arg3 ;


@end


#endif