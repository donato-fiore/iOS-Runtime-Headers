// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCSSUGGESTIONS_H
#define TCSSUGGESTIONS_H

@class NSHashTable, NPSManager, CNCoalescingTimer, NSTimer, IDSBatchIDQueryController, NSMutableDictionary, CNContactStore, NSString, NSUserDefaults, NSArray;
@protocol IDSBatchIDQueryControllerDelegate, TCSContactsObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TCSContacts.h"

@interface TCSSuggestions : NSObject <IDSBatchIDQueryControllerDelegate, TCSContactsObserver>

 {
    int _firstUnlockToken;
    int _npsInitialSyncToken;
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSObject<OS_dispatch_queue> *_coreRecentsQueue;
    NSHashTable *_observers;
    NPSManager *_npsManager;
    CNCoalescingTimer *_suggestionsSaveTimer;
    NSTimer *_suggestionGenerationTimer;
    IDSBatchIDQueryController *_queryController;
    NSMutableDictionary *_suggestedDestinationToStatus;
}


@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) TCSContacts *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL generationTimerEnabled; // ivar: _generationTimerEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldObserveSuggestionsDefaultChanges; // ivar: _shouldObserveSuggestionsDefaultChanges
@property (retain, nonatomic) NSArray *suggestedDestinations; // ivar: _suggestedDestinations
@property (retain, nonatomic) NSMutableDictionary *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;


+(id)_descriptorForRequiredKeys;
-(BOOL)_shouldGenerateNewSuggestions;
-(id)_destinationsFromCallHistory;
-(id)_destinationsFromCoreRecents;
-(id)_destinationsFromFavorites;
-(id)_performHousekeepingOnSuggestions:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 contacts:(id)arg1 ;
-(void)_addSuggestedDestination:(id)arg0 withTimestamp:(id)arg1 ;
-(void)_deleteSuggestions;
-(void)_deviceDidPair:(id)arg0 ;
-(void)_generateNewSuggestions;
-(void)_handleDeviceFirstUnlock;
-(void)_invalidate;
-(void)_notifyObserversSuggestionsChanged;
-(void)_performIDQueryForSuggestions:(id)arg0 ;
-(void)_saveSuggestions;
-(void)_startGenerationTimerWithFireDate:(id)arg0 ;
-(void)_stopGenerationTimer;
-(void)_syncSuggestions;
-(void)_updateGenerationTimestamps;
-(void)addObserver:(id)arg0 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(void)destinationsDidChange:(id)arg0 ;
-(void)generateNewSuggestionsIfNecessary;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif