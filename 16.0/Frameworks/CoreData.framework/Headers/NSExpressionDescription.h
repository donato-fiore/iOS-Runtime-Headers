// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSEXPRESSIONDESCRIPTION_H
#define NSEXPRESSIONDESCRIPTION_H

@class NSExpression, NSString;


#import "NSPropertyDescription.h"
#import "NSAttributeDescription.h"

@interface NSExpressionDescription : NSPropertyDescription {
    id *_reservedtype1_1;
    id *_reservedtype1_2;
    NSUInteger _reservedtype1_3;
    id *_reservedtype1_4;
    NSUInteger _reservedtype1_5;
    id *_reservedtype1_6;
    *void _reservedtype2_1;
    *void _reservedtype2_2;
    NSAttributeDescription *_underlyingAttribute;
    NSExpression *_expression;
    NSUInteger _expressionResultType;
}


@property (readonly, copy) NSString *attributeValueClassName;
@property (retain) NSExpression *expression;
@property NSUInteger expressionResultType;
@property (readonly, copy) NSString *valueTransformerName;


+(BOOL)supportsSecureCoding;
-(NSUInteger)_propertyType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif