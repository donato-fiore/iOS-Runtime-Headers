// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKENTITYACTION_H
#define WFLINKENTITYACTION_H

@class LNEntityMetadata;


#import "WFOverridableLinkAction.h"

@interface WFLinkEntityAction : WFOverridableLinkAction

@property (readonly, nonatomic) LNEntityMetadata *entityMetadata;


-(BOOL)shouldOverrideParameterLabels;
-(Class)overrideTypeDescriptions;
-(id)actualEntityParameterNameFromPossibleNames:(id)arg0 ;
-(id)capitalizedEntityName;
-(id)capitalizedVerb;
-(id)entityName;
-(id)entityParameterMetadata;
-(id)entityParameterName;
-(id)lowercaseEntityName;
-(id)overrideEntityName;
-(id)overrideName;
-(id)overrideParameterSummary;
-(id)verb;


@end


#endif