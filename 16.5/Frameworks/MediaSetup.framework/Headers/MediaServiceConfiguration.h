// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIASERVICECONFIGURATION_H
#define MEDIASERVICECONFIGURATION_H

@class NSXPCConnection, NSString;
@protocol MediaServiceUpdatedServiceInterfaceDelegate, MSAccountsImplementer, MediaServiceUpdatedDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MediaServiceConfiguration : NSObject <MediaServiceUpdatedServiceInterfaceDelegate>

 {
    NSXPCConnection *_connection;
    id<MSAccountsImplementer> *_accountsImplementer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaServiceUpdatedDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)thirdPartyMusicAvailable:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_performBlock:(id)arg0 ;
-(void)activeServiceApplicationInformationForSharedUserID:(id)arg0 completionHandler:(id)arg1 ;
-(void)addMediaServiceToHome:(id)arg0 home:(id)arg1 completion:(id)arg2 ;
-(void)getAvailableServices:(id)arg0 completion:(id)arg1 ;
-(void)getCachedAvailableServices:(id)arg0 completion:(id)arg1 ;
-(void)getCachedServiceInfo:(id)arg0 homeUserID:(id)arg1 completion:(id)arg2 ;
-(void)getCachedServiceInfo:(id)arg0 homeUserID:(id)arg1 endpointID:(id)arg2 completion:(id)arg3 ;
-(void)getDefaultMediaService:(id)arg0 completion:(id)arg1 ;
-(void)getDefaultMediaServiceForAllUsers:(id)arg0 ;
-(void)getMediaServiceChoicesForAllUsers:(id)arg0 ;
-(void)getPublicInfoForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)getResolvedServiceAndUser:(id)arg0 sharedUserID:(id)arg1 completion:(id)arg2 ;
-(void)getResolvedServiceInfo:(id)arg0 completion:(id)arg1 ;
-(void)getResolvedServiceInfo:(id)arg0 sharedUserID:(id)arg1 completion:(id)arg2 ;
-(void)getServiceConfigurationInfo:(id)arg0 completion:(id)arg1 ;
-(void)getServiceConfigurationInfo:(id)arg0 serviceID:(id)arg1 completion:(id)arg2 ;
-(void)overrideAppleMusicSubscriptionStatus:(BOOL)arg0 homeUserIDS:(id)arg1 completion:(id)arg2 ;
-(void)removeServiceFromHome:(id)arg0 fromHome:(id)arg1 completion:(id)arg2 ;
-(void)requestAuthRenewalForMediaService:(id)arg0 homeUserID:(id)arg1 parentNetworkActivity:(id)arg2 completion:(id)arg3 ;
-(void)serviceSettingDidUpdate:(id)arg0 homeUserID:(id)arg1 ;
-(void)setVersion:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)switchUserAccountInfo:(id)arg0 home:(id)arg1 completion:(id)arg2 ;
-(void)updateDefaultMediaService:(id)arg0 forHome:(id)arg1 completion:(id)arg2 ;
-(void)updateProperty:(id)arg0 forHome:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)userDidRemoveService:(id)arg0 homeUserID:(id)arg1 ;
-(void)userDidUpdateDefaultService:(id)arg0 homeUserID:(id)arg1 ;


@end


#endif