// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKACTIONENUMPARAMETERDEFINITION_H
#define WFLINKACTIONENUMPARAMETERDEFINITION_H



#import "WFLinkActionParameterDefinition.h"

@interface WFLinkActionEnumParameterDefinition : WFLinkActionParameterDefinition



-(Class)parameterClass;
-(id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg0 ;
-(id)enumMetadata;
-(id)initWithParameterMetadata:(id)arg0 ;
-(id)linkValueFromParameterState:(id)arg0 ;
-(id)localizedTitleForLinkValue:(id)arg0 ;
-(id)parameterDefinitionDictionary;
-(id)parameterStateFromLinkValue:(id)arg0 ;
-(void)getLinkValueFromProcessedParameterValue:(id)arg0 parameterState:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif