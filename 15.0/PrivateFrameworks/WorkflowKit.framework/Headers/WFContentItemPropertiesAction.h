// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTITEMPROPERTIESACTION_H
#define WFCONTENTITEMPROPERTIESACTION_H



#import "WFContentItemAction.h"

@interface WFContentItemPropertiesAction : WFContentItemAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)inputRequired;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)descriptionSummary;
-(id)inputParameterKey;
-(id)keywords;
-(id)localizedDefaultOutputName;
-(id)localizedDescriptionResult;
-(id)name;
-(id)outputContentClasses;
-(id)outputMeasurementUnitType;
-(id)parameterDefinitions;
-(id)parameterSummary;
-(id)properties;
-(id)selectedProperty;
-(void)finishWithItems:(id)arg0 property:(id)arg1 coercionPerformed:(BOOL)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif