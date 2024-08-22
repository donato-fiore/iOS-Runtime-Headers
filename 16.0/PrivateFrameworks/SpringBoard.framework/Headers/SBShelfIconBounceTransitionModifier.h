// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHELFICONBOUNCETRANSITIONMODIFIER_H
#define SBSHELFICONBOUNCETRANSITIONMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBSwitcherShelf.h"

@interface SBShelfIconBounceTransitionModifier : SBTransitionSwitcherModifier {
    SBSwitcherShelf *_shelf;
}




-(NSUInteger)bounceIconGenerationCountForCurrentCount:(NSUInteger)arg0 ;
-(id)appLayoutsToResignActive;
-(id)bounceIconBundleIdentifier;
-(id)initWithTransitionID:(id)arg0 shelf:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(struct CGRect )bounceIconInitialFrame;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif