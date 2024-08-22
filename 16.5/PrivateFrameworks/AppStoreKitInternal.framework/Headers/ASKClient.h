// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASKCLIENT_H
#define ASKCLIENT_H

@class NSString, AMSPromise;
@protocol ASKClientExports;

#import <Foundation/Foundation.h>


@interface ASKClient : NSObject <ASKClientExports>



@property (readonly, copy) NSString *activePairedWatchSystemVersion;
@property (readonly) NSString *buildType;
@property NSInteger currentNotificationAuthorizationStatus; // ivar: _currentNotificationAuthorizationStatus
@property (readonly) NSString *deviceType;
@property (readonly, copy) NSString *guid;
@property (readonly) BOOL isActivityAvailable;
@property (readonly) BOOL isCharonSupported;
@property (readonly) BOOL isElectrocardiogramInstallationAllowed;
@property (readonly) BOOL isMandrakeSupported;
@property (readonly) BOOL isSidepackingEnabled;
@property (readonly) BOOL isTinkerWatch;
@property (readonly) BOOL newPaymentMethodEnabled;
@property (readonly) CGFloat screenCornerRadius;
@property (readonly) CGSize screenSize;
@property (readonly, copy) NSString *storefrontIdentifier;
@property (retain) AMSPromise *storefrontIdentifierPromise; // ivar: _storefrontIdentifierPromise
@property (readonly) BOOL supportsHEIF;
@property (readonly, copy) NSString *thinnedApplicationVariantIdentifier;


+(id)getStorefrontIdentifierPromise:(id)arg0 ;
-(BOOL)canUpdateNotificationAuthorizationStatus;
-(BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg0 ;
-(BOOL)deviceHasCapabilities:(id)arg0 ;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg0 minorVersion:(id)arg1 patchVersion:(id)arg2 ;
-(BOOL)isAuthorizedForUserNotifications;
-(BOOL)isAutomaticDownloadingEnabled;
-(id)init;
-(id)isPairedSystemVersionAtLeast:(id)arg0 ;
-(void)accountStoreDidChange:(id)arg0 ;
-(void)applicationDidForeground:(id)arg0 ;
-(void)dealloc;
-(void)updateNotificationAuthorisationStatus;


@end


#endif