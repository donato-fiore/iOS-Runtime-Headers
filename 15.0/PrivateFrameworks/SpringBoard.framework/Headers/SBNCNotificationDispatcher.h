// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBNCNOTIFICATIONDISPATCHER_H
#define SBNCNOTIFICATIONDISPATCHER_H

@class BSServiceConnectionEndpoint, NSString, NCNotificationDispatcher, SBNotificationCenterDestination, NCBulletinNotificationSource;
@protocol CSCoverSheetViewControllerObserver, SBFNotificationExtensionVisibilityProviding, SBNotificationDestination;

#import <Foundation/Foundation.h>

#import "SBNCAlertingController.h"
#import "SBNotificationBannerDestination.h"
#import "SBNotificationCarPlayDestination.h"
#import "SBCommunicationPolicyManager.h"
#import "SBNCNotificationDispatcherDelegate.h"
#import "SBLockScreenManager.h"
#import "SBLockStateAggregator.h"
#import "SBUserAlertNotificationSource.h"
#import "SBWalletNotificationSource.h"

@interface SBNCNotificationDispatcher : NSObject <CSCoverSheetViewControllerObserver, SBFNotificationExtensionVisibilityProviding>



@property (retain, nonatomic) SBNCAlertingController *alertingController; // ivar: _alertingController
@property (readonly, nonatomic) SBNotificationBannerDestination *bannerDestination; // ivar: _bannerDestination
@property (retain, nonatomic) SBNotificationCarPlayDestination *carDestination; // ivar: _carDestination
@property (readonly, nonatomic) BSServiceConnectionEndpoint *carOpenServiceEndpoint;
@property (retain, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager; // ivar: _communicationPolicyManager
@property (readonly, nonatomic) NSObject<SBNotificationDestination> *dashBoardDestination; // ivar: _dashBoardDestination
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationDispatcher *dispatcher; // ivar: _dispatcher
@property (retain, nonatomic) SBNCNotificationDispatcherDelegate *dispatcherDelegate; // ivar: _dispatcherDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCarDestinationActive;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // ivar: _lockStateAggregator
@property (readonly, nonatomic) SBNotificationCenterDestination *notificationCenterDestination; // ivar: _notificationCenterDestination
@property (retain, nonatomic) NCBulletinNotificationSource *notificationSource; // ivar: _notificationSource
@property (readonly) Class superclass;
@property (retain, nonatomic) SBUserAlertNotificationSource *userNotificationAlertSource; // ivar: _userNotificationAlertSource
@property (readonly, nonatomic) SBWalletNotificationSource *walletNotificationSource; // ivar: _walletNotificationSource


-(BOOL)_lockScreenWantsBanners;
-(BOOL)isNotificationContentExtensionVisible:(id)arg0 ;
-(id)init;
-(id)keyWindowForScreen:(id)arg0 ;
-(void)_aggregateLockStateDidChange;
-(void)_carPlayDestinationAvailabilityDidChange;
-(void)_setupNewDestinationsForDispatcher:(id)arg0 ;
-(void)_updateActiveDestinations;
-(void)coverSheetViewController:(id)arg0 didChangeActiveBehavior:(id)arg1 ;


@end


#endif