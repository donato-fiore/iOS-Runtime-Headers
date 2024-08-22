// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCSCONTACTSDATASOURCE_H
#define TCSCONTACTSDATASOURCE_H

@class NSMutableSet, NSDictionary, CNContactStore, NSString, NSArray;
@protocol TCSContactsObserver, TCSContactsDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "TCSContacts.h"

@interface TCSContactsDataSource : NSObject <TCSContactsObserver>

 {
    NSMutableSet *_allowedContactIdentifiers;
    NSMutableSet *_inviterContactIdentifiers;
    NSDictionary *_allowedContactMap;
    NSDictionary *_inviterContactMap;
    NSDictionary *_inviteeContactMap;
    int _namePrefChangeToken;
}


@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) TCSContacts *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TCSContactsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sectionCount;
@property (retain, nonatomic) NSArray *sortedContacts; // ivar: _sortedContacts
@property (retain, nonatomic) NSArray *sortedInvitees; // ivar: _sortedInvitees
@property (retain, nonatomic) NSArray *sortedInviters; // ivar: _sortedInviters
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(BOOL)_contactArray:(id)arg0 differsFromArray:(id)arg1 ;
-(BOOL)isContactAllowed:(id)arg0 ;
-(BOOL)isContactAnInviter:(id)arg0 ;
-(NSInteger)_sectionForContact:(id)arg0 ;
-(NSInteger)inviteContact:(id)arg0 ;
-(id)_contactMapFromArray:(id)arg0 ;
-(id)_contactsForSection:(NSInteger)arg0 ;
-(id)_sortedContactsArrayFromArray:(id)arg0 ;
-(id)_sortedContactsArrayFromArray:(id)arg0 forSection:(NSInteger)arg1 ;
-(id)contactWithIdentifier:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 contacts:(id)arg1 ;
-(void)_handleContactStoreDidChange:(id)arg0 ;
-(void)_handleDeviceFirstUnlock;
-(void)_handlePersonNamePreferencesChangeNotification;
-(void)_notifyDelegateContactsChanged;
-(void)_notifyDelegateRecencyChanged;
-(void)_updateSortedContactsAndNotifyIfChanged:(BOOL)arg0 ;
-(void)contactBecameAccepted:(id)arg0 ;
-(void)dealloc;
-(void)destinationsDidChange:(id)arg0 ;
-(void)logSortedContacts;
-(void)recencyDidChange:(id)arg0 ;
-(void)removeContact:(id)arg0 ;
-(void)removeContact:(id)arg0 inSection:(NSInteger)arg1 ;


@end


#endif