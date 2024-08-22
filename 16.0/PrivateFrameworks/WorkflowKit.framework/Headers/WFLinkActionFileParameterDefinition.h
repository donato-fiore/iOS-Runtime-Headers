// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKACTIONFILEPARAMETERDEFINITION_H
#define WFLINKACTIONFILEPARAMETERDEFINITION_H

@class NSArray;


#import "WFLinkActionParameterDefinition.h"

@interface WFLinkActionFileParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic) NSArray *supportedUTIs;


-(Class)parameterClass;
-(id)initWithParameterMetadata:(id)arg0 ;
-(id)linkValueFromParameterState:(id)arg0 ;
-(id)localizedTitleForLinkValue:(id)arg0 ;
-(id)parameterDefinitionDictionary;
-(id)parameterStateFromLinkValue:(id)arg0 ;
-(void)getLinkValueFromProcessedParameterValue:(id)arg0 parameterState:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif