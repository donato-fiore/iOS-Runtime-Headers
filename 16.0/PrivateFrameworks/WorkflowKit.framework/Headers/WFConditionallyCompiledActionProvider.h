// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONDITIONALLYCOMPILEDACTIONPROVIDER_H
#define WFCONDITIONALLYCOMPILEDACTIONPROVIDER_H



#import "WFActionProvider.h"

@interface WFConditionallyCompiledActionProvider : WFActionProvider



-(id)actionDefinitionsWithIdentifiers:(id)arg0 ;
-(id)allActionDefinitionsByIdentifier;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg0 ;


@end


#endif