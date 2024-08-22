// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDICTIONARYPARAMETERKEYVALUEPAIR_H
#define WFDICTIONARYPARAMETERKEYVALUEPAIR_H

@class NSString, NSUUID;
@protocol WFVariableSerialization, NSCopying;

#import <Foundation/Foundation.h>

#import "WFVariableString.h"
#import "WFPropertyListParameterValue.h"

@interface WFDictionaryParameterKeyValuePair : NSObject <WFVariableSerialization, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly, nonatomic) WFVariableString *key; // ivar: _key
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFPropertyListParameterValue *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 identity:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)getProcessedPair:(id)arg0 context:(unk)arg1 userInputRequiredHandler:(id)arg2  ;


@end


#endif