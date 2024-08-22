// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTITEMFILTERACTION_H
#define WFCONTENTITEMFILTERACTION_H

@class NSString, WFContentQuery;
@protocol WFDynamicEnumerationDataSource;


#import "WFContentItemAction.h"

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mode;
@property (readonly, nonatomic) WFContentQuery *query;
@property (readonly, nonatomic) _WFContentSlice slice;
@property (readonly) Class superclass;


-(BOOL)canHandleInputOfContentClasses:(id)arg0 withSupportedClasses:(id)arg1 ;
-(BOOL)hasMultipleFilterConditions;
-(BOOL)inputRequired;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(NSUInteger)parameterCollapsingBehavior;
-(id)auxiliaryButton;
-(id)createStateForParameter:(id)arg0 fromSerializedRepresentation:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)inputParameterKey;
-(id)keywords;
-(id)localizedName;
-(id)localizedParameterSummaryStringForFilter;
-(id)localizedParameterSummaryStringForFilterWithFilterConditions;
-(id)localizedParameterSummaryStringForFilterWithMultipleFilterConditions;
-(id)localizedParameterSummaryStringForFind;
-(id)localizedParameterSummaryStringForFindWithFilterConditions;
-(id)localizedParameterSummaryStringForFindWithMultipleFilterConditions;
-(id)outputContentClasses;
-(id)parameterDefinitions;
-(id)parameterStateForKey:(id)arg0 ;
-(id)parameterSummary;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)sortablePropertyDisplayNames;
-(id)sortablePropertyNames;
-(id)tableTemplate;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runFilterWithInput:(id)arg0 query:(id)arg1 ;
-(void)updateCompoundParameterVisibility;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif