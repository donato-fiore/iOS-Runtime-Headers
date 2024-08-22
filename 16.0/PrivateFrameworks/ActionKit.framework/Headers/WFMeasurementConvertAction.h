// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMEASUREMENTCONVERTACTION_H
#define WFMEASUREMENTCONVERTACTION_H

@class WFAction;



@interface WFMeasurementConvertAction : WFAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)currentUnitType;
-(id)outputMeasurementUnitType;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg0 ;
-(id)unitParameter;
-(id)unitWithSymbol:(id)arg0 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif