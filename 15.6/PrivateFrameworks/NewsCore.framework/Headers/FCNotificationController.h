// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNOTIFICATIONCONTROLLER_H
#define FCNOTIFICATIONCONTROLLER_H

@class NSString;
@protocol FCUserInfoObserving, FCCoreConfigurationManager;

#import <Foundation/Foundation.h>

#import "FCCommandQueue.h"
#import "FCUserInfo.h"

@interface FCNotificationController : NSObject <FCUserInfoObserving>



@property (nonatomic) BOOL appleNewsNotificationsAllowed; // ivar: _appleNewsNotificationsAllowed
@property (retain, nonatomic) FCCommandQueue *commandQueue; // ivar: _commandQueue
@property (retain, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceDigestMode; // ivar: _deviceDigestMode
@property (copy, nonatomic) NSString *deviceToken; // ivar: _deviceToken
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *notificationsUserID; // ivar: _notificationsUserID
@property (nonatomic) BOOL publisherNotificationsAllowed; // ivar: _publisherNotificationsAllowed
@property (nonatomic) BOOL shouldUseNewsUINotificationHandling; // ivar: _shouldUseNewsUINotificationHandling
@property (readonly) Class superclass;
@property (retain, nonatomic) FCUserInfo *userInfo; // ivar: _userInfo


-(BOOL)refreshNotificationsForChannelIDs:(id)arg0 paidChannelIDs:(id)arg1 ;
-(BOOL)registerNotificationsForTagID:(id)arg0 isPaid:(BOOL)arg1 ;
-(BOOL)setMarketingNotificationsEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)unregisterNotificationsForTagID:(id)arg0 ;
-(id)appendBreakingNewsIfNeededToChannelIDs:(id)arg0 ;
-(id)init;
-(id)initWithUserInfo:(id)arg0 commandQueue:(id)arg1 configurationManager:(id)arg2 publisherNotificationsAllowed:(BOOL)arg3 appleNewsNotificationsAllowed:(BOOL)arg4 ;
-(void)_registerDeviceToken:(id)arg0 deviceDigestMode:(int)arg1 ;
-(void)dealloc;
-(void)deviceDigestModeDidUpdateToDigestMode:(int)arg0 ;
-(void)refreshNotificationsFromAppleNews;
-(void)registerDeviceToken:(id)arg0 deviceDigestMode:(int)arg1 ;
-(void)setEndOfAudioTrackNotificationsEnabled:(BOOL)arg0 ;
-(void)setNewIssueNotificationsEnabled:(BOOL)arg0 ;
-(void)userInfoDidChangeNotificationsUserID:(id)arg0 ;


@end


#endif