// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIUSERENGAGEMENTSHEETLAUNCHER_H
#define VUIUSERENGAGEMENTSHEETLAUNCHER_H

@class NSString;
@protocol AMSUserNotificationAuthorizationDelegate;

#import <Foundation/Foundation.h>


@interface VUIUserEngagementSheetLauncher : NSObject <AMSUserNotificationAuthorizationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAppLostConnectivity; // ivar: _hasAppLostConnectivity
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastTabIdentifier; // ivar: _lastTabIdentifier
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isAnotherSheetShowingToUser;
-(id)_init;
-(id)init;
-(void)_deleteKeysUsedForSheetPresentation;
-(void)_handleNetworkReachabilityDidChangeNotification:(id)arg0 ;
-(void)_handleTabBarChange:(id)arg0 ;
-(void)_handleUserNotificationAction:(NSInteger)arg0 ;
-(void)_showNotificationAuthorizationSheet;
-(void)dealloc;
-(void)handleAMSEngagementPresentationSheet:(BOOL)arg0 ;
-(void)handleAppEnteredBackgroundForUserEngagementSheet;
-(void)handleEngagementRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif