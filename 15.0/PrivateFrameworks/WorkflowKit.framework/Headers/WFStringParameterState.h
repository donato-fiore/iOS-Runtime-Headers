// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSTRINGPARAMETERSTATE_H
#define WFSTRINGPARAMETERSTATE_H

@class NSString;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFStringParameterState : NSObject <WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif