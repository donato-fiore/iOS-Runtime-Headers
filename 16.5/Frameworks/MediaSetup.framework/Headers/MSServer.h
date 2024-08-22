// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSERVER_H
#define MSSERVER_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, MSAccountsImplementer, MediaServiceUpdatedClientDelegate;

#import <Foundation/Foundation.h>


@interface MSServer : NSObject <NSXPCListenerDelegate, MSAccountsImplementer, MediaServiceUpdatedClientDelegate>

 {
    NSXPCListener *_serverListener;
}


@property (weak, nonatomic) NSObject<MSAccountsImplementer> *accountsInterfaceDelegate; // ivar: _accountsInterfaceDelegate
@property (retain) NSMutableSet *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isConnectionEntitled:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithAccountsDelegate:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_initializeServer;
-(void)_removeConnection:(id)arg0 ;
-(void)activeServiceApplicationInformationForSharedUserID:(id)arg0 completionHandler:(id)arg1 ;
-(void)addMediaServiceToHome:(id)arg0 homeID:(id)arg1 homeUserID:(id)arg2 completion:(id)arg3 ;
-(void)getAvailableServices:(id)arg0 userIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)getCachedAvailableServices:(id)arg0 userIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)getCachedServiceInfo:(id)arg0 homeUserID:(id)arg1 endpointID:(id)arg2 completion:(id)arg3 ;
-(void)getDefaultMediaService:(id)arg0 homeUserID:(id)arg1 completion:(id)arg2 ;
-(void)getDefaultMediaServiceForAllUsers:(id)arg0 ;
-(void)getMediaServiceChoicesForAllUsers:(id)arg0 ;
-(void)getPublicInfoForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)getResolvedServiceInfo:(id)arg0 completion:(id)arg1 ;
-(void)getResolvedServiceInfo:(id)arg0 sharedUserID:(id)arg1 completion:(id)arg2 ;
-(void)getServiceConfigurationInfo:(id)arg0 serviceID:(id)arg1 completion:(id)arg2 ;
-(void)openConnection;
-(void)overrideAppleMusicSubscriptionStatus:(BOOL)arg0 homeUserIDS:(id)arg1 completion:(id)arg2 ;
-(void)removeMediaService:(id)arg0 homeID:(id)arg1 homeUserID:(id)arg2 completion:(id)arg3 ;
-(void)requestAuthRenewalForMediaService:(id)arg0 homeUserID:(id)arg1 parentNetworkActivity:(id)arg2 completion:(id)arg3 ;
-(void)serviceSettingDidUpdate:(id)arg0 homeUserID:(id)arg1 ;
-(void)setVersion:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)switchUserAccountInfo:(id)arg0 homeID:(id)arg1 homeUserID:(id)arg2 completion:(id)arg3 ;
-(void)thirdPartyMusicAvailable:(id)arg0 completion:(id)arg1 ;
-(void)updateDefaultMediaService:(id)arg0 homeID:(id)arg1 homeUserID:(id)arg2 completion:(id)arg3 ;
-(void)updateProperty:(id)arg0 homeID:(id)arg1 homeUserID:(id)arg2 withOptions:(id)arg3 completion:(id)arg4 ;
-(void)userDidRemoveService:(id)arg0 homeUserID:(id)arg1 ;
-(void)userDidUpdateDefaultService:(id)arg0 homeUserID:(id)arg1 ;


@end


#endif