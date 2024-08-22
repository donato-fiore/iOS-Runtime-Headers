// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECONDITIONALRELEVANCEPROVIDER_H
#define RECONDITIONALRELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"
#import "RERelevanceCondition.h"

@interface REConditionalRelevanceProvider : RERelevanceProvider {
    RERelevanceCondition *_condition;
}


@property (readonly, nonatomic) RERelevanceCondition *condition;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(float)_evaluateCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRelevanceCondition:(id)arg0 ;


@end


#endif