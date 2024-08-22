// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMEDIAROUTESTATE_H
#define WFMEDIAROUTESTATE_H

@class WFVariableSubstitutableParameterState, MPAVRoute;



@interface WFMediaRouteState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) MPAVRoute *route; // ivar: _route


+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithRoute:(id)arg0 ;


@end


#endif