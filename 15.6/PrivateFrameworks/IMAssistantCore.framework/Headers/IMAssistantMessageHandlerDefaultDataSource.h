// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSISTANTMESSAGEHANDLERDEFAULTDATASOURCE_H
#define IMASSISTANTMESSAGEHANDLERDEFAULTDATASOURCE_H

@class NSCache, CNContactStore, NSString;
@protocol IMAssistantMessageHandlerDataSource, IMAssistantAccountDataSource, IMAssistantChatDataSource, IMAssistantCommSafetyManager, IMAssistantContactsDataSource, IMAssistantCoreTelephonySubscriptionsDataSource, IMAssistantFileManager, IMFileTransferCenter, IMLocationManager;

#import <Foundation/Foundation.h>


@interface IMAssistantMessageHandlerDefaultDataSource : NSObject <IMAssistantMessageHandlerDataSource>



@property (readonly, nonatomic) NSObject<IMAssistantAccountDataSource> *accountDataSource;
@property (readonly, nonatomic) NSObject<IMAssistantChatDataSource> *chatDataSource;
@property (readonly, nonatomic) NSObject<IMAssistantCommSafetyManager> *commSafetyDataSource;
@property (readonly, nonatomic) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSObject<IMAssistantContactsDataSource> *contactsDataSource;
@property (readonly, nonatomic) NSObject<IMAssistantCoreTelephonySubscriptionsDataSource> *coreTelephonySubscriptionsDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisterForContactStoreChangeNotifications; // ivar: _didRegisterForContactStoreChangeNotifications
@property (readonly, nonatomic) NSObject<IMAssistantFileManager> *fileManagerDataSource;
@property (readonly, nonatomic) NSObject<IMFileTransferCenter> *fileTransferCenterDataSource;
@property (readonly, nonatomic) NSCache *handleToContactIdentifierCache;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInternationalSpamFilteringEnabled;
@property (readonly, nonatomic) NSObject<IMLocationManager> *locationManagerDataSource;
@property (readonly, nonatomic) NSCache *spiHandleToPersonCache;
@property (readonly) Class superclass;


-(BOOL)screentimeAllowedToShowChat:(id)arg0 error:(*id)arg1 ;
-(BOOL)screentimeAllowedToShowConversationWithHandleIDs:(id)arg0 error:(*id)arg1 ;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)registerForContactStoreChangeNotificationsIfNecessary;


@end


#endif