// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTOPTIONSRECENTS_H
#define PKPAYMENTOPTIONSRECENTS_H

@class CNContact, CRRecentContactsLibrary;
@protocol NSObject;

#import <Foundation/Foundation.h>

#import "PKPaymentOptionsSynchronization.h"

@interface PKPaymentOptionsRecents : NSObject {
    CNContact *_cachedMeContact;
    id<NSObject> *_meContactDidChangeNotificationObserver;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
}


@property (readonly, nonatomic) CNContact *meCard;
@property (nonatomic, getter=isMeCardCachingEnabled) BOOL meCardCachingEnabled; // ivar: _meCardCachingEnabled
@property (retain, nonatomic) CRRecentContactsLibrary *recentContactsLibrary; // ivar: _recentContactsLibrary


+(id)_coreRecentsKindForPreference:(id)arg0 ;
+(id)defaultInstance;
-(id)_contactFromRecent:(id)arg0 preference:(id)arg1 ;
-(id)_contactsFromKeychainForPreference:(id)arg0 ;
-(id)_defaultCRSearchQuery;
-(id)_keychainDataForKey:(id)arg0 ;
-(id)_keychainKeyFromContactKey:(id)arg0 ;
-(id)_labelsToPropertiesDictionaryForContact:(id)arg0 ;
-(id)_meCardEntries:(id)arg0 forContactKey:(id)arg1 labelsToProperties:(id)arg2 ;
-(id)_meCardEntries:(id)arg0 forContactKeys:(id)arg1 labelsToProperties:(id)arg2 ;
-(id)_postalAddressLabeledValueFromRecent:(id)arg0 ;
-(id)contactMetadataForContact:(id)arg0 preference:(id)arg1 ;
-(id)init;
-(id)meCardEntriesForPreference:(id)arg0 ;
-(id)postalAddressMetadataForContact:(id)arg0 ;
-(id)recentsForPreference:(id)arg0 ;
-(id)saveContactToCoreRecents:(id)arg0 preference:(id)arg1 ;
-(void)_addContactToKeychain:(id)arg0 forPreference:(id)arg1 ;
-(void)_coreRecentsContactsForPreference:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_deleteRecentContactFromKeychain:(id)arg0 forPreference:(id)arg1 ;
-(void)_deleteRecentContactsFromKeychainForContactKey:(id)arg0 ;
-(void)_deleteRecentContactsFromKeychainForPreference:(id)arg0 ;
-(void)_setKeychainData:(id)arg0 forKey:(id)arg1 ;
-(void)_updateRecentsWithContactsFromContactInformation:(id)arg0 currentKeychainContacts:(id)arg1 forContactKey:(id)arg2 ;
-(void)dealloc;
-(void)deleteAllRecentsWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)deleteRecent:(id)arg0 ;
-(void)deleteRecentsForPreference:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)meCardEntriesForPreference:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)recentsForPreference:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)updateRecentsAndKeychainWithContactInformation:(id)arg0 ;


@end


#endif