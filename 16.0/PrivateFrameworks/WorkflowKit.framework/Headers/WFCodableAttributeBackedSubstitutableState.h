// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCODABLEATTRIBUTEBACKEDSUBSTITUTABLESTATE_H
#define WFCODABLEATTRIBUTEBACKEDSUBSTITUTABLESTATE_H

@class INCodableAttribute, NSString, INStringLocalizer;


#import "WFVariableSubstitutableParameterState.h"

@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute
@property (copy, nonatomic) NSString *readableSubtitle; // ivar: _readableSubtitle
@property (copy, nonatomic) NSString *readableTitle; // ivar: _readableTitle
@property (readonly, nonatomic) INStringLocalizer *stringLocalizer; // ivar: _stringLocalizer


+(id)processingValueClasses;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithValue:(id)arg0 codableAttribute:(id)arg1 stringLocalizer:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;
-(void)resizeDisplayImageIfNecessary:(id)arg0 ;


@end


#endif