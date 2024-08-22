// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNAPPCONTEXT_H
#define LNAPPCONTEXT_H


#import <Foundation/Foundation.h>


@interface LNAppContext : NSObject



-(?)fetchActionAppContextForActioncompletionHandler;
-(?)fetchActionForAutoShortcutPhrasecompletionHandler;
-(?)fetchActionOutputValueWithIdentifiercompletionHandler;
-(?)fetchDestinationMDMAccountIdentifierForActioncompletionHandler;
-(?)fetchDisplayRepresentationForActionscompletionHandler;
-(?)fetchOptionsDefaultValuesForActioncompletionHandler;
-(?)fetchOptionsForActionMetadata:(?)arg0 parameterMetadata:(?)arg1 searchTerm:(?)arg2 localeIdentifiercompletionHandler;
-(?)fetchParameterOptionDefaultValueForActionMetadata:(?)arg0 parameterIdentifiercompletionHandler;
-(?)fetchStructuredDataWithTypeIdentifier:(?)arg0 forEntityIdentifierscompletionHandler;
-(?)fetchSuggestedActionsForStartWorkoutActioncompletionHandler;
-(?)fetchSuggestedActionsWithSiriLanguageCodecompletionHandler;
-(?)fetchSuggestedFocusActionsForActionMetadata:(?)arg0 suggestionContextcompletionHandler;
-(?)fetchViewActionsWithCompletionHandler;
-(?)fetchViewEntitiesWithInteractionIDscompletionHandler;
-(?)performAction:(?)arg0 options:(?)arg1 delegate:(?)arg2 auditTokencompletionHandler;
-(?)performPropertyQuerycompletionHandler;
-(?)performSuggestedEntitiesQueryWithEntityMangledTypeNamecompletionHandler;
-(?)performSuggestedResultsQueryWithEntityTypecompletionHandler;
-(id)init;
-(void)fetchMetadataWithCompletionHandler:(id)arg0 ;
-(void)removeAllDeferredOutputs;


@end


#endif