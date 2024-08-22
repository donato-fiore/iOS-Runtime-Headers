// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREMOVALDODGINGMODIFIER_H
#define SBREMOVALDODGINGMODIFIER_H

@class NSUUID, NSString;


#import "SBDodgingModifier.h"

@interface SBRemovalDodgingModifier : SBDodgingModifier

@property (retain, nonatomic) NSUUID *completionIdentifier; // ivar: _completionIdentifier
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(NSInteger)animationBehaviorModeForIdentifier:(id)arg0 ;
-(id)handleAnimationCompletionEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)modelForInvalidatedModel:(id)arg0 ;


@end


#endif