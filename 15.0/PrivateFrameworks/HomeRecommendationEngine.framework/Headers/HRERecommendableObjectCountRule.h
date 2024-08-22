// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRERECOMMENDABLEOBJECTCOUNTRULE_H
#define HRERECOMMENDABLEOBJECTCOUNTRULE_H



#import "HRERecommendableObjectTypeRule.h"

@interface HRERecommendableObjectCountRule : HRERecommendableObjectTypeRule

@property (readonly, nonatomic) _NSRange allowedCount; // ivar: _allowedCount


+(id)ruleWithAccessoryType:(id)arg0 allowedCount:(struct _NSRange )arg1 ;
-(BOOL)passesWithHomeObjects:(id)arg0 ;
-(id)initWithAccessoryType:(id)arg0 allowedCount:(struct _NSRange )arg1 ;


@end


#endif