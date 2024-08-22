// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONPARAMETERMETADATA_H
#define LNACTIONPARAMETERMETADATA_H

@class NSString, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNStaticDeferredLocalizedString.h"
#import "LNValueType.h"

@interface LNActionParameterMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger dynamicOptionsSupport; // ivar: _dynamicOptionsSupport
@property (readonly, nonatomic) BOOL hasDynamicOptions;
@property (readonly, nonatomic) NSInteger inputConnectionBehavior; // ivar: _inputConnectionBehavior
@property (readonly, nonatomic) BOOL isInput;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *parameterDescription; // ivar: _parameterDescription
@property (readonly, copy, nonatomic) NSArray *resolvableInputTypes; // ivar: _resolvableInputTypes
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSDictionary *typeSpecificMetadata; // ivar: _typeSpecificMetadata
@property (readonly, copy, nonatomic) LNValueType *valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 optional:(BOOL)arg2 title:(id)arg3 description:(id)arg4 resolvableInputTypes:(id)arg5 typeSpecificMetadata:(id)arg6 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 optional:(BOOL)arg2 title:(id)arg3 description:(id)arg4 resolvableInputTypes:(id)arg5 typeSpecificMetadata:(id)arg6 dynamicOptionsSupport:(NSInteger)arg7 inputConnectionBehavior:(NSInteger)arg8 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 optional:(BOOL)arg2 title:(id)arg3 description:(id)arg4 resolvableInputTypes:(id)arg5 typeSpecificMetadata:(id)arg6 dynamicOptionsSupport:(NSInteger)arg7 isInput:(BOOL)arg8 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 optional:(BOOL)arg2 title:(id)arg3 resolvableInputTypes:(id)arg4 typeSpecificMetadata:(id)arg5 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 optional:(BOOL)arg2 title:(id)arg3 resolvableInputTypes:(id)arg4 typeSpecificMetadata:(id)arg5 dynamicOptionsSupport:(NSInteger)arg6 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 optional:(BOOL)arg2 title:(id)arg3 resolvableInputTypes:(id)arg4 typeSpecificMetadata:(id)arg5 dynamicOptionsSupport:(NSInteger)arg6 isInput:(BOOL)arg7 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 optional:(BOOL)arg2 title:(id)arg3 resolvableInputTypes:(id)arg4 typeSpecificMetadata:(id)arg5 hasDynamicOptions:(BOOL)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif