// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRERECOMMENDABLEOBJECTTYPELISTRULE_H
#define HRERECOMMENDABLEOBJECTTYPELISTRULE_H

@class NSSet;


#import "HRERecommendableObjectRule.h"

@interface HRERecommendableObjectTypeListRule : HRERecommendableObjectRule

@property (readonly, nonatomic) NSSet *typesSatisfyingRequirement; // ivar: _typesSatisfyingRequirement


+(id)ruleRequiringOneOfTypes:(id)arg0 ;
-(BOOL)passesWithHomeObjects:(id)arg0 ;
-(id)initWithRequiredTypeGroup:(id)arg0 ;


@end


#endif