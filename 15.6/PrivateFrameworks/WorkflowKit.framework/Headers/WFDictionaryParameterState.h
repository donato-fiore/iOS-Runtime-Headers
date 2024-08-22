// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDICTIONARYPARAMETERSTATE_H
#define WFDICTIONARYPARAMETERSTATE_H

@class NSString, NSUUID, NSArray;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFDictionaryParameterState : NSObject <WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly, copy, nonatomic) NSArray *keyValuePairs; // ivar: _keyValuePairs
@property (readonly) Class superclass;


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKeyValuePairs:(id)arg0 ;
-(id)initWithKeyValuePairs:(id)arg0 identity:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif