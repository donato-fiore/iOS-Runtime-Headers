// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETESUGGESTIONSPROBE_H
#define CNAUTOCOMPLETESUGGESTIONSPROBE_H

@class NSString, NSMutableArray;
@protocol CNAutocompleteSuggestionsProbe, SGSuggestionsServiceContactsProtocol, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNAutocompleteSuggestionsProbe : NSObject <CNAutocompleteSuggestionsProbe>



@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *pendingBlocks; // ivar: _pendingBlocks
@property (readonly, nonatomic) NSObject<SGSuggestionsServiceContactsProtocol> *sgService; // ivar: _sgService
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNScheduler> *workScheduler; // ivar: _workScheduler


+(id)contactIdentifierForAutocompleteResult:(id)arg0 ;
+(id)suggestionIdentifierForAutocompleteResult:(id)arg0 ;
+(int)suggestionSourcesForAutocompleteResult:(id)arg0 ;
-(id)init;
-(id)initWithSuggestionsService:(id)arg0 schedulerProvider:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)recordSGServiceMessage:(id)arg0 ;
-(void)recordUserSawResultsConsideredSuggestion;
-(void)recordUserSelectedAutocompleteResult:(id)arg0 ;
-(void)sendData;


@end


#endif