// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTACTSUBSTITUTABLESTATE_H
#define WFCONTACTSUBSTITUTABLESTATE_H



#import "WFMultipleValueParameterState.h"

@interface WFContactSubstitutableState : WFMultipleValueParameterState



+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(BOOL)reinterpretsStringsAsContactHandlesFromVariable:(BOOL)arg0 ;
-(id)collectionByConvertingStringItemsToHandles:(id)arg0 allowsCustomHandles:(BOOL)arg1 ;
-(id)initWithValue:(id)arg0 ;
-(id)stringInterpretedAsContactHandle:(id)arg0 allowsCustomHandles:(BOOL)arg1 ;
-(id)valueItemClasses;
-(void)processContentCollection:(id)arg0 context:(id)arg1 fromVariable:(BOOL)arg2 valueHandler:(id)arg3 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif