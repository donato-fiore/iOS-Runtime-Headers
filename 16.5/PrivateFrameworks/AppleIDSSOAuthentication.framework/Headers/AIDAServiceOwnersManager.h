// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIDASERVICEOWNERSMANAGER_H
#define AIDASERVICEOWNERSMANAGER_H

@class ACAccountStore, NSString, NSDictionary;
@protocol AIDAServiceOwnerProtocol;

#import <Foundation/Foundation.h>


@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol>

 {
    os_unfair_lock_s _serviceOwnersLock;
    ACAccountStore *_accountStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *serviceOwners; // ivar: _serviceOwners
@property (readonly) Class superclass;


+(id)serviceOwnerBundles;
+(id)supportedServices;
-(id)DSIDForAccount:(id)arg0 service:(id)arg1 ;
-(id)_buildServiceOwnerMapping;
-(id)_postCloudSupportedServicesForAltDSID:(id)arg0 ;
-(id)accountForService:(id)arg0 ;
-(id)altDSIDForAccount:(id)arg0 service:(id)arg1 ;
-(id)init;
-(id)initWithAccountStore:(id)arg0 ;
-(id)nameComponentsForAccount:(id)arg0 service:(id)arg1 ;
-(void)signInService:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)signInToAllServicesInBackground:(BOOL)arg0 usingContext:(id)arg1 completion:(id)arg2 ;
-(void)signInToAllServicesInBackgroundUsingContext:(id)arg0 completion:(id)arg1 ;
-(void)signInToServices:(id)arg0 usingContext:(id)arg1 completion:(id)arg2 ;
-(void)signOutOfAllServicesUsingContext:(id)arg0 completion:(id)arg1 ;
-(void)signOutOfServices:(id)arg0 usingContext:(id)arg1 completion:(id)arg2 ;
-(void)signOutService:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;


@end


#endif