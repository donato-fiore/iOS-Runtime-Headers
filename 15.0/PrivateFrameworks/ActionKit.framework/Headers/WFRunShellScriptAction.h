// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRUNSHELLSCRIPTACTION_H
#define WFRUNSHELLSCRIPTACTION_H

@class WFAction, NSString, NSDictionary;
@protocol WFDynamicEnumerationDataSource;



@interface WFRunShellScriptAction : WFAction <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *shells; // ivar: _shells
@property (readonly) Class superclass;


-(id)contentDestination;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)initializeParameters;


@end


#endif