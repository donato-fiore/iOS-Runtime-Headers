// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTCOMPARISONPREDICATE_H
#define WFCONTENTCOMPARISONPREDICATE_H

@class NSSet;
@protocol WFContentPropertyContainer, NSCopying;


#import "WFContentPredicate.h"
#import "WFContentProperty.h"

@interface WFContentComparisonPredicate : WFContentPredicate <WFContentPropertyContainer>



@property (readonly, nonatomic) NSUInteger comparisonType; // ivar: _comparisonType
@property (readonly, nonatomic) NSSet *containedProperties;
@property (readonly, nonatomic) WFContentProperty *property; // ivar: _property
@property (readonly, copy, nonatomic) NSObject<NSCopying> *value; // ivar: _value
@property (readonly, copy, nonatomic) id *valueBlock; // ivar: _valueBlock


+(id)predicateWithValue:(id)arg0 forProperty:(id)arg1 comparisonType:(NSUInteger)arg2 ;
// +(id)predicateWithValueBlock:(id)arg0 forProperty:(unk)arg1  ;
+(void)initialize;
+(void)registerValueMapping:(id)arg0 ;
-(BOOL)evaluateWithValues:(id)arg0 ;
-(id)comparableValueForValue:(id)arg0 ;
-(id)description;
// -(id)initWithValue:(id)arg0 valueBlock:(id)arg1 property:(unk)arg2 comparisonType:(id)arg3  ;
// -(void)evaluateWithObject:(id)arg0 propertySubstitutor:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif