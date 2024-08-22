// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKACTIONSTRINGPARAMETERDEFINITION_H
#define WFLINKACTIONSTRINGPARAMETERDEFINITION_H



#import "WFLinkActionParameterDefinition.h"

@interface WFLinkActionStringParameterDefinition : WFLinkActionParameterDefinition



-(Class)parameterClass;
-(id)autocapitalizationTypeFromStringCapitalizationType:(NSInteger)arg0 ;
-(id)initWithParameterMetadata:(id)arg0 ;
-(id)keyboardTypeFromStringKeyboardType:(NSInteger)arg0 ;
-(id)linkValueFromParameterState:(id)arg0 ;
-(id)localizedTitleForLinkValue:(id)arg0 ;
-(id)parameterDefinitionDictionary;
-(id)parameterStateFromLinkValue:(id)arg0 ;


@end


#endif