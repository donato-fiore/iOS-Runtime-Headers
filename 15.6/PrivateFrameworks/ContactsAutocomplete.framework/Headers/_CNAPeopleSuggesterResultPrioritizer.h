// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNAPEOPLESUGGESTERRESULTPRIORITIZER_H
#define _CNAPEOPLESUGGESTERRESULTPRIORITIZER_H

@class CNHandleStringClassifier, NSString;
@protocol CNAutocompleteSuggestedResultPrioritization;

#import <Foundation/Foundation.h>


@interface _CNAPeopleSuggesterResultPrioritizer : NSObject <CNAutocompleteSuggestedResultPrioritization>

 {
    CNHandleStringClassifier *_handleStringClassifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bundleIdentifierOfCurrentProcess;
+(id)makeBundleIdentifierOfCurrentProcess;
+(id)os_log;
-(BOOL)resultIdentifierIsValidMessagesChatGuid:(id)arg0 ;
-(BOOL)resultMatchesPrefix:(id)arg0 inNameComponentsOfResult:(id)arg1 ;
-(NSInteger)addressTypeForHandle:(id)arg0 ;
-(id)applyPriorityOrderToResults:(id)arg0 fetchRequest:(id)arg1 andCompletePriorityResultsPromise:(id)arg2 ;
-(id)identifierForGroupResultSuggestion:(id)arg0 ;
-(id)init;
-(id)messagesGroupResultForSuggestion:(id)arg0 ;
-(id)partitionCandidatesForRanking:(id)arg0 givenPrefix:(id)arg1 ;


@end


#endif