// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSHAREDADDRESSBOOK_H
#define CHSHAREDADDRESSBOOK_H

@class NSMutableDictionary;


#import "CHSynchronizedLoggable.h"

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache; // ivar: _addressBookCache


+(id)get;
-(NSUInteger)cachedCount;
-(id)description;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg0 ;
-(id)init;
-(void)cleanUpAddressBookCache_sync;
-(void)dealloc;
-(void)insertAddressBookInfoDictionaryIntoCache:(id)arg0 ;
-(void)insertAddressBookInfoIntoCache:(id)arg0 forKey:(id)arg1 ;
-(void)registerForContactsNotifications;
-(void)revertAddressBook:(id)arg0 ;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg0 ;


@end


#endif