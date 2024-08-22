// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCSCONTACTS_H
#define TCSCONTACTS_H

@class NSHashTable, NPSManager, CNCoalescingTimer, NSMutableDictionary, NSUserDefaults, NSArray;

#import <Foundation/Foundation.h>


@interface TCSContacts : NSObject {
    NSHashTable *_observers;
    NPSManager *_npsManager;
    CNCoalescingTimer *_allowlistSaveTimer;
    int _prefSyncToken;
    int _demoResetToken;
    os_unfair_lock_s _allowlistLock;
}


@property (retain, nonatomic) NSMutableDictionary *allowlist; // ivar: _allowlist
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) NSArray *destinations; // ivar: _destinations
@property (nonatomic) BOOL shouldObserveAllowlistDefaultChanges; // ivar: _shouldObserveAllowlistDefaultChanges


+(BOOL)_contact:(id)arg0 hasKeysForFormatterStye:(NSInteger)arg1 ;
+(BOOL)_isContact:(id)arg0 similarToContact:(id)arg1 ;
+(BOOL)_isUnknownContact:(id)arg0 equalToUnknownContact:(id)arg1 ;
+(id)_canonicalDestinationForString:(id)arg0 ;
+(id)_canonicalPhoneNumberFromCNPhoneNumber:(id)arg0 ;
+(id)_canonicalPhoneNumberFromPhoneNumberString:(id)arg0 ;
+(id)_destinationsFromAllowlistDictionary:(id)arg0 onlyAccepted:(BOOL)arg1 ;
+(id)_firstPhoneNumberOrEmailAddressFromContact:(id)arg0 formatPhoneNumber:(BOOL)arg1 ;
+(id)_pauseCharacterSet;
+(id)_safeContactDetailStringForLogging:(id)arg0 ;
+(id)_safeContactNameStringForLogging:(id)arg0 handle:(id)arg1 ;
+(id)_tinCanUserNotificationCenter;
+(id)_unifiedContactWithIdentifier:(id)arg0 orDestination:(id)arg1 usingContactStore:(id)arg2 keysToFetch:(id)arg3 ;
+(id)_unifiedMeContactFromContactStore:(id)arg0 keysToFetch:(id)arg1 ;
+(id)_unknownContactWithDestination:(id)arg0 ;
+(id)canonicalDestinationsForContact:(id)arg0 ;
+(id)validatedAllowlistFromDictionary:(id)arg0 ;
+(void)dismissInvitationNotificationsFromContact:(id)arg0 ;
-(BOOL)_didIncomingOutgoingOrSupportChange:(id)arg0 ;
-(BOOL)_generateDestinationsFromAllowlist;
-(BOOL)_loadAllowlistFromDefaults;
-(BOOL)_shouldHandleResetStoreDemoContent;
-(BOOL)contactSupportsTinCan:(id)arg0 ;
-(BOOL)isContactAccepted:(id)arg0 ;
-(BOOL)isContactAnInviter:(id)arg0 ;
-(BOOL)isDestinationAccepted:(id)arg0 ;
-(BOOL)isDestinationAnInviter:(id)arg0 ;
-(NSInteger)stateForContact:(id)arg0 ;
-(id)_removeDestinationFromAllowlist:(id)arg0 ;
-(id)dateAddedForDestination:(id)arg0 ;
-(id)init;
-(id)mostRecentCallDateForContact:(id)arg0 ;
-(id)mostRecentCallDateForDestination:(id)arg0 ;
-(void)_addDestinations:(id)arg0 asType:(NSInteger)arg1 ;
-(void)_deleteAllowlist;
-(void)_didInitiateCallToDestination:(id)arg0 date:(id)arg1 ;
-(void)_didReceiveCallFromDestination:(id)arg0 date:(id)arg1 ;
-(void)_handleContactsPrefSync;
-(void)_handleDeviceFirstUnlock;
-(void)_loadDataFromDefaults;
-(void)_logDestinations;
-(void)_notifyObserversContactBecameAccepted:(id)arg0 ;
-(void)_notifyObserversDestinationsChanged;
-(void)_notifyObserversRecencyChanged;
-(void)_reloadAllowlist;
-(void)_resetStoreDemoContent;
-(void)_saveAllowlist;
-(void)addDestinations:(id)arg0 ;
-(void)addDestinationsForInviter:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)didInitiateCallToContact:(id)arg0 date:(id)arg1 ;
-(void)didReceiveCallFromContact:(id)arg0 date:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeDestinations:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setContact:(id)arg0 supportsTinCan:(BOOL)arg1 ;
-(void)setContactAsAccepted:(id)arg0 ;
-(void)setDestinationAsAccepted:(id)arg0 ;


@end


#endif