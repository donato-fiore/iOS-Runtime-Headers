// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLESTRING_H
#define WFVARIABLESTRING_H

@class NSString, NSArray;
@protocol WFVariableSerialization, NSCopying;

#import <Foundation/Foundation.h>


@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *stringByRemovingVariables;
@property (readonly, nonatomic) NSString *stringByReplacingVariablesWithNames;
@property (readonly, nonatomic) NSArray *stringsAndVariables; // ivar: _stringsAndVariables
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *variables;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)representsSingleContentVariable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttachmentCharacterString:(id)arg0 variableGetter:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithStringsAndVariables:(id)arg0 ;
-(id)initWithVariable:(id)arg0 ;
-(id)serializedRepresentation;
-(id)variablesOfType:(id)arg0 ;
-(void)addVariableDelegate:(id)arg0 ;
-(void)processIntoContentItemsWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)processIntoStringsAndAttachmentsWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)processWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeVariableDelegate:(id)arg0 ;


@end


#endif