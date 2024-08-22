// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDOWNTIMEWHITELISTCONTAINERFETCHER_H
#define CNDOWNTIMEWHITELISTCONTAINERFETCHER_H

@class ACAccountStore, NSString, NSNotificationCenter;
@protocol CNDowntimeWhitelistContainerFetching, NSObject;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"
#import "CNContainer.h"

@interface CNDowntimeWhitelistContainerFetcher : NSObject <CNDowntimeWhitelistContainerFetching>



@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) NSObject<NSObject> *accountStoreDidChangeNotificationToken; // ivar: _accountStoreDidChangeNotificationToken
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNContainer *downtimeWhitelistContainer;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) CNContainer *primaryiCloudContainer; // ivar: _primaryiCloudContainer
@property (readonly) Class superclass;


+(id)os_log;
-(id)fetchPrimaryiCloudCardDAVAccountIdentifier;
-(id)fetchPrimaryiCloudCardDAVContainer;
-(id)init;
-(id)initWithContactStore:(id)arg0 accountStore:(id)arg1 notificationCenter:(id)arg2 ;
-(void)beginObservingChangeNotifications;
-(void)dealloc;


@end


#endif