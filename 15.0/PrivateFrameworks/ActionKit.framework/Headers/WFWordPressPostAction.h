// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORDPRESSPOSTACTION_H
#define WFWORDPRESSPOSTACTION_H

@class WFAction, NSString;
@protocol WFDynamicEnumerationDataSource, WFDynamicTagFieldDataSource;



@interface WFWordPressPostAction : WFAction <WFDynamicEnumerationDataSource, WFDynamicTagFieldDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *observer; // ivar: _observer
@property (readonly) Class superclass;


-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)suggestedTagsForTagField:(id)arg0 ;
-(void)generateHTMLFromInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateAccountMetadata;
-(void)updateHiddenStates;
-(void)updatePossibleStates;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif