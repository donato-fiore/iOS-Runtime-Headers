// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBROUTETOAPPEXPOSESWITCHERMODIFIER_H
#define SBROUTETOAPPEXPOSESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppExposeGridSwitcherModifier.h"

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    BOOL _isTransitioningOutOfAppExpose;
}


@property (nonatomic) BOOL reversesFloatingCardDirection;


-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)snapshotScaleForAppLayout:(id)arg0 ;
-(NSInteger)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(NSInteger)plusButtonStyle;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appExposeModifier:(id)arg1 ;
-(id)scrollViewAttributes;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;


@end


#endif