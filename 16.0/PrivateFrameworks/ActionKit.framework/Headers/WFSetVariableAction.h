// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSETVARIABLEACTION_H
#define WFSETVARIABLEACTION_H

@class WFAction;



@interface WFSetVariableAction : WFAction



-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)accessibilityName;
-(id)outputVariableWithVariableProvider:(id)arg0 UUIDProvider:(id)arg1 ;
-(id)providedVariableNames;
-(id)variableName;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;


@end


#endif