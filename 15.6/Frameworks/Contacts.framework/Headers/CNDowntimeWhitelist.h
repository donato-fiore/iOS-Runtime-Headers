// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDOWNTIMEWHITELIST_H
#define CNDOWNTIMEWHITELIST_H

@class NSNotificationCenter;
@protocol NSObject, CNDowntimeWhitelistContainerFetching;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface CNDowntimeWhitelist : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSObject<NSObject> *contactStoreDidChangeNotificationToken; // ivar: _contactStoreDidChangeNotificationToken
@property (readonly, nonatomic) NSObject<CNDowntimeWhitelistContainerFetching> *containerFetcher; // ivar: _containerFetcher
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter


+(BOOL)anyContactIsWhitelisted:(id)arg0 ;
+(BOOL)isWhitelistedContact:(id)arg0 ;
+(id)keyDescriptor;
+(id)os_log;
-(BOOL)isHandleStringWhitelisted:(id)arg0 ;
-(BOOL)isHandleStringWhitelisted:(id)arg0 error:(*id)arg1 ;
-(id)allWhitelistedContacts:(*id)arg0 ;
-(id)allWhitelistedHandleStrings;
-(id)allWhitelistedHandleStrings:(*id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 accountStore:(id)arg1 notificationCenter:(id)arg2 ;
-(id)initWithContactStore:(id)arg0 notificationCenter:(id)arg1 ;
-(id)requestForContactsInPermittedContainers;
-(id)requestForContactsInPermittedContainersWithHandles:(id)arg0 ;
-(id)requestForNonUnifiedContacts;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg0 ;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg0 error:(*id)arg1 ;
-(void)beginObservingChangeNotifications;
-(void)dealloc;
-(void)setTestContainerFetcher:(id)arg0 ;


@end


#endif