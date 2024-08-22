// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRERECOMMENDABLEOBJECTTYPERULE_H
#define HRERECOMMENDABLEOBJECTTYPERULE_H

@class NSString;


#import "HRERecommendableObjectRule.h"

@interface HRERecommendableObjectTypeRule : HRERecommendableObjectRule

@property (readonly, nonatomic) NSString *requiredType; // ivar: _requiredType


+(id)ruleWithRequiredType:(id)arg0 ;
-(BOOL)passesWithHomeObjects:(id)arg0 ;
-(BOOL)passesWithObject:(id)arg0 ;
-(id)initWithRequiredType:(id)arg0 ;


@end


#endif