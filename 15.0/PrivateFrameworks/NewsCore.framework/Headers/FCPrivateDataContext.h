// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPRIVATEDATACONTEXT_H
#define FCPRIVATEDATACONTEXT_H

@class NSString;
@protocol FCPrivateDataContext, FCContentContext, FCPrivateDataContextInternal, FCPushNotificationHandling;

#import <Foundation/Foundation.h>

#import "FCAudioPlaylist.h"
#import "FCIssueReadingHistory.h"
#import "FCNetworkBehaviorMonitor.h"
#import "FCPersonalizationData.h"
#import "FCPrivateChannelMembershipController.h"
#import "FCReadingHistory.h"
#import "FCReadingList.h"
#import "FCSubscriptionList.h"
#import "FCTagSettings.h"
#import "FCUserInfo.h"

@interface FCPrivateDataContext : NSObject <FCPrivateDataContext>



@property (readonly, nonatomic) FCAudioPlaylist *audioPlaylist; // ivar: _audioPlaylist
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<FCPrivateDataContextInternal> *internalPrivateDataContext; // ivar: _internalPrivateDataContext
@property (readonly, nonatomic) FCIssueReadingHistory *issueReadingHistory; // ivar: _issueReadingHistory
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // ivar: _networkBehaviorMonitor
@property (readonly, nonatomic) FCPersonalizationData *personalizationData; // ivar: _personalizationData
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // ivar: _privateChannelMembershipController
@property (readonly, copy, nonatomic) NSString *privateDataDirectory; // ivar: _privateDataDirectory
@property (readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled; // ivar: _privateDataSyncingEnabled
@property (readonly, nonatomic) NSObject<FCPushNotificationHandling> *privatePushNotificationHandler; // ivar: _privatePushNotificationHandler
@property (readonly, nonatomic) FCReadingHistory *readingHistory; // ivar: _readingHistory
@property (readonly, nonatomic) FCReadingList *readingList; // ivar: _readingList
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList; // ivar: _subscriptionList
@property (readonly) Class superclass;
@property (readonly, nonatomic) FCTagSettings *tagSettings; // ivar: _tagSettings
@property (readonly, nonatomic) FCUserInfo *userInfo; // ivar: _userInfo


-(id)_privateDataControllers;
-(id)init;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 privateDataHostDirectory:(id)arg2 privateDataActionProvider:(id)arg3 encryptionDelegate:(id)arg4 networkBehaviorMonitor:(id)arg5 privateDataSyncingEnabled:(BOOL)arg6 ;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 privateDatabase:(id)arg2 privateDataDirectory:(id)arg3 privateDataActionProvider:(id)arg4 encryptionDelegate:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(BOOL)arg7 ;
-(id)privateStoreWithName:(id)arg0 version:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(void)preparePrivateDataControllersForUse;


@end


#endif