// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMEASUREMENTCREATEACTION_H
#define WFMEASUREMENTCREATEACTION_H

@class WFAction;



@interface WFMeasurementCreateAction : WFAction



-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)currentUnit;
-(id)currentUnitTypeState;
-(id)currentValue;
-(id)outputMeasurementUnitType;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg0 ;
-(id)unitParameter;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif