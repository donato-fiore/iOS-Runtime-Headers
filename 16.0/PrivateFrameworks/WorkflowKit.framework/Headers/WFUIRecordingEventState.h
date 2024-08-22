// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFUIRECORDINGEVENTSTATE_H
#define WFUIRECORDINGEVENTSTATE_H

@class NSString;
@protocol WFParameterState;

#import <Foundation/Foundation.h>

#import "WFUIRUserEvent.h"

@interface WFUIRecordingEventState : NSObject <WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) WFUIRUserEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif