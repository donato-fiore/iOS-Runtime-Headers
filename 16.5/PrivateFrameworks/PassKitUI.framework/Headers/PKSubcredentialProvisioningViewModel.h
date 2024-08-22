// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGVIEWMODEL_H
#define PKSUBCREDENTIALPROVISIONINGVIEWMODEL_H

@class PKSubcredentialProvisioningConfiguration, NSString, PKSubcredentialProvisioningController;
@protocol PKSubcredentialProvisioningViewModelProtocol;

#import <Foundation/Foundation.h>


@interface PKSubcredentialProvisioningViewModel : NSObject <PKSubcredentialProvisioningViewModelProtocol>



@property (retain, nonatomic) PKSubcredentialProvisioningConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKSubcredentialProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)cancelProvisioningWithCompletion:(id)arg0 ;
-(void)rescindSimilarInvitationsToSharingRequest:(id)arg0 withWebService:(id)arg1 completion:(id)arg2 ;
-(void)setNewAuthRandomIfNecessaryWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)startProvisioning;


@end


#endif