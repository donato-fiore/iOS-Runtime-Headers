// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSUGGESTEDCONTACTSTORE_H
#define CNSUGGESTEDCONTACTSTORE_H

@protocol CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;


#import "CNContactStore.h"

@interface CNSuggestedContactStore : CNContactStore

@property (retain, nonatomic) NSObject<CNSiriIntelligenceSettingsProtocol> *siriIntelligenceSettings; // ivar: _siriIntelligenceSettings
@property (retain, nonatomic) NSObject<SGSuggestionsServiceContactsProtocol> *suggestionService; // ivar: _suggestionService


+(BOOL)isSuggestionsSupported;
+(id)os_log;
+(id)storeIdentifier;
+(id)storeInfoClasses;
-(BOOL)_processSuggestions:(id)arg0 error:(*id)arg1 withBlock:(id)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldLogContactsAccess;
-(id)init;
-(id)initWithSuggestionsService:(id)arg0 siriIntelligenceSettings:(id)arg1 ;
-(id)originForSuggestion:(id)arg0 error:(*id)arg1 ;
-(id)requestAccessForEntityType:(NSInteger)arg0 ;
-(id)unifiedContactsMatchingPredicate:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;


@end


#endif