// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCONTACTSUGGESTER_H
#define _PSCONTACTSUGGESTER_H

@class NSXPCConnection, CNContactStore, _CDInteractionStore;

#import <Foundation/Foundation.h>

#import "_PSContactResolver.h"

@interface _PSContactSuggester : NSObject {
    _PSContactResolver *contactResolver;
    NSXPCConnection *_connection;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore


+(id)contactPriorSuggestionsForText:(id)arg0 ;
+(id)defaultCorrelationsSessionFileForContactPriors;
-(float)decayForReferenceDate:(id)arg0 relativeTo:(id)arg1 withTimeConstant:(CGFloat)arg2 ;
-(float)sigmoid:(float)arg0 ;
-(id)computeContactPriorsForContactIdentifiers:(id)arg0 ;
-(id)computeContactPriorsForContactIdentifiers:(id)arg0 withTimeConstant:(NSInteger)arg1 withInteractionMechanisms:(id)arg2 asOf:(id)arg3 overLookbackOf:(NSInteger)arg4 ;
-(id)contactAndGroupSuggestionsWithMaxSuggestions:(NSInteger)arg0 lookBackDays:(NSInteger)arg1 interactions:(id)arg2 ;
-(id)contactKeysToFetch;
-(id)contactPriorsForContactIdentifiers:(id)arg0 ;
-(id)contactSuggestionsForPeopleWidgetWithMaxSuggestions:(NSInteger)arg0 excludeContactsWithIdentifiers:(id)arg1 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 contactKeysTofetch:(id)arg1 interactionDomains:(id)arg2 appleUsersOnly:(BOOL)arg3 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 excludeContactsByIdentifiers:(id)arg1 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 excludeContactsByIdentifiers:(id)arg1 interactionHistoryCap:(NSInteger)arg2 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 excludeContactsByIdentifiers:(id)arg1 lookBackDays:(NSInteger)arg2 interactions:(id)arg3 modeAvocado:(BOOL)arg4 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 excludeContactsByIdentifiers:(id)arg1 lookBackDays:(NSInteger)arg2 interactions:(id)arg3 modeAvocado:(BOOL)arg4 interactionHistoryCap:(NSInteger)arg5 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 excludeContactsWithIdentifiers:(id)arg1 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 interactionDomains:(id)arg1 appleUsersOnly:(BOOL)arg2 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 interactionDomains:(id)arg1 referenceDate:(id)arg2 appleUsersOnly:(BOOL)arg3 includeGroups:(BOOL)arg4 ;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 interactionDomains:(id)arg1 referenceDate:(id)arg2 appleUsersOnly:(BOOL)arg3 includeGroups:(BOOL)arg4 excludeContactsByIdentifiers:(id)arg5 ;
-(id)contactsWithMaxSuggestions:(NSInteger)arg0 contactKeysTofetch:(id)arg1 interactionDomains:(id)arg2 referenceDate:(id)arg3 appleUsersOnly:(BOOL)arg4 ;
-(id)gameCenterSuggestionsWithMaxSuggestions:(NSInteger)arg0 interactionDomains:(id)arg1 appleUsersOnly:(BOOL)arg2 ;
-(id)gameCenterSuggestionsWithMaxSuggestions:(NSInteger)arg0 interactionDomains:(id)arg1 appleUsersOnly:(BOOL)arg2 includeGroupSuggestions:(BOOL)arg3 excludeContactsByIdentifiers:(id)arg4 ;
-(id)getDefaultContactPriorForContactId:(id)arg0 withModelName:(id)arg1 withModelVersion:(id)arg2 ;
-(id)init;
-(void)computeAndSaveContactPriorArchive;
-(void)dealloc;
-(void)gameCenterSuggestionConsumedWithContactHandle:(id)arg0 ;
-(void)gameCenterSuggestionConsumedWithGroupIdentifier:(id)arg0 ;
-(void)peopleWidgetFeedbackWithContactHandle:(id)arg0 ;
-(void)peopleWidgetFeedbackWithContactIdentifier:(id)arg0 ;
-(void)writeArchive:(id)arg0 ;


@end


#endif