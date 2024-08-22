// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONDITION_H
#define TPSCONDITION_H

@class TPSSerializableObject, NSArray, NSString;
@protocol TPSValidatable;



@interface TPSCondition : TPSSerializableObject <TPSValidatable>

 {
    NSArray *_validations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultJoinType;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger joinType; // ivar: _joinType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *targetingValidations;
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *valueType; // ivar: _valueType
@property (copy, nonatomic) NSArray *values; // ivar: _values


+(NSInteger)typeFromConditionDictionary:(id)arg0 ;
+(id)conditionFromDictionary:(id)arg0 ;
-(id)_valuesFromValuesArray:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif