// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPREFERENCECHANGEDODGINGMODIFIER_H
#define SBPREFERENCECHANGEDODGINGMODIFIER_H

@class NSString;


#import "SBDodgingModifier.h"

@interface SBPreferenceChangeDodgingModifier : SBDodgingModifier {
    NSString *_identifier;
    BOOL _animated;
    NSUInteger _phase;
}


@property (nonatomic, getter=isResigningLifecycleManagement) BOOL boostUpdatedIdentifier; // ivar: _boostUpdatedIdentifier
@property (nonatomic, getter=isResigningLifecycleManagement) BOOL resignLifecycleManagement; // ivar: _resignLifecycleManagement


-(NSInteger)animationBehaviorModeForIdentifier:(id)arg0 ;
-(id)handleAnimationCompletionEvent:(id)arg0 ;
-(id)handlePreferenceChangeEvent:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(id)modelForInvalidatedModel:(id)arg0 ;
-(id)zOrderedIdentifiers;


@end


#endif