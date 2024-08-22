// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETELOCALCONTACTRESULTTRANSFORMBUILDER_H
#define CNAUTOCOMPLETELOCALCONTACTRESULTTRANSFORMBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CNAutocompleteResultFactory.h"

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject {
    NSMutableArray *_transforms;
    CNAutocompleteResultFactory *_factory;
}


@property NSUInteger builtContactType; // ivar: _builtContactType


+(NSInteger)addressTypeForProperty:(id)arg0 ;
+(id)localContactBuilderWithResultFactory:(id)arg0 ;
+(id)resultValueForContactPropertyValue:(id)arg0 propertyKey:(id)arg1 contact:(id)arg2 ;
+(id)serverContactBuilderWithResultFactory:(id)arg0 ;
+(id)suggestedContactBuilderWithResultFactory:(id)arg0 ;
-(id)build:(SEL)arg0 ;
-(id)buildAggregateTransform:(SEL)arg0 ;
-(id)initWithResultFactory:(id)arg0 ;
-(id)makeTransformForProperty:(SEL)arg0 ;
-(void)addTransformForProperty:(id)arg0 ;


@end


#endif