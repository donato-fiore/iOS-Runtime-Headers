// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPROPERTYLISTPARAMETERVALUE_H
#define WFPROPERTYLISTPARAMETERVALUE_H

@class NSString, NSUUID;
@protocol NSCopying, WFParameterState;

#import <Foundation/Foundation.h>


@interface WFPropertyListParameterValue : NSObject <NSCopying, WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly, nonatomic) NSObject<WFParameterState> *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


+(Class)classForValueType:(NSInteger)arg0 ;
+(Class)processedClassForValueType:(NSInteger)arg0 ;
+(id)defaultStateForValueType:(NSInteger)arg0 ;
+(id)localizedTitleForValueType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArray:(id)arg0 ;
-(id)initWithArrayState:(id)arg0 ;
-(id)initWithBoolean:(id)arg0 ;
-(id)initWithBooleanState:(id)arg0 ;
-(id)initWithChooseFromMenuItemState:(id)arg0 ;
-(id)initWithChooseFromMenuString:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionaryState:(id)arg0 ;
-(id)initWithNumber:(id)arg0 ;
-(id)initWithNumberState:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 valueType:(NSInteger)arg3 variableStringStateClass:(Class)arg4 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithStringState:(id)arg0 ;
-(id)initWithSynonymString:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 state:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 state:(id)arg1 identity:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif