// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINSERTIONDODGINGMODIFIER_H
#define SBINSERTIONDODGINGMODIFIER_H

@class NSString;


#import "SBDodgingModifier.h"

@interface SBInsertionDodgingModifier : SBDodgingModifier

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGPoint initialCenter; // ivar: _initialCenter
@property (nonatomic) CGSize initialSize; // ivar: _initialSize
@property (nonatomic) NSUInteger phase; // ivar: _phase


-(NSInteger)animationBehaviorModeForIdentifier:(id)arg0 ;
-(id)_animationDidCompleteEventName;
-(id)_modelDidUpdateEventName;
-(id)framesForIdentifiers;
-(id)handleAnimationCompletionEvent:(id)arg0 ;
-(id)handleCustomEvent:(id)arg0 ;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 initialCenter:(struct CGPoint )arg1 initialSize:(struct CGSize )arg2 ;
-(id)modelForInvalidatedModel:(id)arg0 ;


@end


#endif