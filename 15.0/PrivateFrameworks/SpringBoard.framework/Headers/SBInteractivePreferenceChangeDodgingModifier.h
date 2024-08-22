// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERACTIVEPREFERENCECHANGEDODGINGMODIFIER_H
#define SBINTERACTIVEPREFERENCECHANGEDODGINGMODIFIER_H

@class NSString;


#import "SBDodgingModifier.h"
#import "SBPreferenceChangeDodgingModifier.h"

@interface SBInteractivePreferenceChangeDodgingModifier : SBDodgingModifier {
    NSString *_identifier;
    SBPreferenceChangeDodgingModifier *_preferenceChangeModifier;
    NSUInteger _style;
    BOOL _awaitingFinalAnimation;
}




-(BOOL)completesWhenChildrenComplete;
-(NSInteger)animationBehaviorModeForIdentifier:(id)arg0 ;
-(id)framesForIdentifiers;
-(id)handlePreferenceChangeEvent:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)zOrderedIdentifiers;


@end


#endif