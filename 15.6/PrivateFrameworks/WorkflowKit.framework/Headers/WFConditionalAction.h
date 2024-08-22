// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONDITIONALACTION_H
#define WFCONDITIONALACTION_H

@class NSString;
@protocol WFDynamicEnumerationDataSource, WFVariableDelegate, WFVariableProvider;


#import "WFControlFlowAction.h"

@interface WFConditionalAction : WFControlFlowAction <WFDynamicEnumerationDataSource, WFVariableDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<WFVariableProvider> *parentVariableProvider; // ivar: _parentVariableProvider
@property (readonly) Class superclass;


+(id)serializedParametersForHome:(id)arg0 ;
-(BOOL)groupContainsOtherwiseAction;
-(BOOL)ignoresOutputFromAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)inputPassthrough;
-(BOOL)inputRequired;
-(BOOL)isDeletable;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(BOOL)skipsProcessingHiddenParameters;
-(BOOL)truthWithVariableSource:(id)arg0 ;
-(BOOL)useLegacyComparisonBehavior;
-(BOOL)usesLegacyInputBehavior;
-(Class)settingsViewControllerClass;
-(NSInteger)subjectContentType;
-(id)actionProvidingVariableWithOutputUUID:(id)arg0 ;
-(id)actionsProvidingVariableName:(id)arg0 ;
-(id)copyForProcessing;
-(id)createAccompanyingActions;
-(id)defaultOutputName;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)fileSizeForQuantityValue:(id)arg0 ;
-(id)inputContentClasses;
-(id)inputSourceInWorkflow:(id)arg0 ;
-(id)measurementForQuantityValue:(id)arg0 ;
-(id)minimumSupportedClientVersion;
-(id)name;
-(id)possibleContentClassesForVariableNamed:(id)arg0 context:(id)arg1 ;
-(id)predicateForComparisonOperator:(NSInteger)arg0 rightDate:(id)arg1 secondRightDate:(id)arg2 comparableTimeUnits:(NSUInteger)arg3 rightDurationValue:(id)arg4 ;
-(id)subjectState;
-(id)timeIntervalForQuantityValue:(id)arg0 ;
-(void)clearLegacyComparisonBehaviorFlag;
-(void)configureResourcesForParameter:(id)arg0 ;
-(void)initializeParameters;
-(void)loadHomesIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareToProcessWithCompletionHandler:(id)arg0 ;
-(void)reloadOpenActionInWorkflow:(id)arg0 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setTruth:(BOOL)arg0 withVariableSource:(id)arg1 ;
-(void)updatePossibleOperators;
-(void)updateRightExpressionParameters;
-(void)variableDidChange:(id)arg0 ;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif