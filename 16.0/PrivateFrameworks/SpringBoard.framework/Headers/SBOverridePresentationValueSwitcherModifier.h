// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBOVERRIDEPRESENTATIONVALUESWITCHERMODIFIER_H
#define SBOVERRIDEPRESENTATIONVALUESWITCHERMODIFIER_H

@class NSSet;


#import "SBSwitcherModifier.h"

@interface SBOverridePresentationValueSwitcherModifier : SBSwitcherModifier {
    NSSet *_keys;
    CGFloat _presentationValue;
}




-(CGFloat)presentationValueForAnimatableProperty:(id)arg0 ;
-(id)initWithAnimatablePropertyKeys:(id)arg0 presentationValue:(CGFloat)arg1 ;


@end


#endif