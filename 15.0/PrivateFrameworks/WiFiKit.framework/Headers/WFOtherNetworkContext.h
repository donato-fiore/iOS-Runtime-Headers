// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOTHERNETWORKCONTEXT_H
#define WFOTHERNETWORKCONTEXT_H

@class NSArray, NSString, UIViewController<WFNetworkView>;
@protocol WFContextPresenting, WFOtherNetworkProviderContext, WFOtherNetworkViewControllerDelegate;


#import "WFCredentialsContext.h"
#import "WFNetworkScanRecord.h"
#import "WFNetworkProfile.h"
#import "WFUserSuppliedNetwork.h"

@interface WFOtherNetworkContext : WFCredentialsContext <WFContextPresenting, WFOtherNetworkProviderContext, WFOtherNetworkViewControllerDelegate>



@property (readonly, nonatomic) BOOL WAPIEnabled;
@property (retain, nonatomic) NSArray *WAPIIdentities; // ivar: _WAPIIdentities
@property (retain, nonatomic) NSArray *WAPIRootCertificates; // ivar: _WAPIRootCertificates
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (nonatomic) NSInteger availableAuthTraits; // ivar: _availableAuthTraits
@property (retain, nonatomic) NSArray *availableTLSIdentities; // ivar: _availableTLSIdentities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnterprise) BOOL enterprise;
@property (copy, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUsingRandomMACAddress; // ivar: _isUsingRandomMACAddress
@property (readonly, nonatomic) BOOL needsDismissal;
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (readonly, nonatomic, getter=isPasswordSharingSupported) BOOL passwordSharingSupported; // ivar: passwordSharingSupported
@property (retain, nonatomic) WFNetworkProfile *profile; // ivar: _profile
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (copy, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (nonatomic) NSInteger requestedFields; // ivar: _requestedFields
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsRandomMACAddress; // ivar: _supportsRandomMACAddress
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) WFUserSuppliedNetwork *userSuppliedNetwork; // ivar: _userSuppliedNetwork
@property (readonly, nonatomic) NSString *username; // ivar: username
@property (readonly, nonatomic, getter=isWeakSecurity) BOOL weakSecurity;


-(BOOL)otherNetworkViewController:(id)arg0 isValidPassword:(id)arg1 ;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(NSInteger)securityMode;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 authTraits:(NSInteger)arg1 supportRandomAddress:(BOOL)arg2 useRandomAddress:(BOOL)arg3 randomMACAddress:(id)arg4 hardwareMACAddress:(id)arg5 ;
-(void)_updateActivityStringForError:(id)arg0 networkName:(id)arg1 ;
-(void)finishWithError:(id)arg0 forNetwork:(id)arg1 profile:(id)arg2 ;
-(void)gatherCredentials:(id)arg0 ;
-(void)otherNetworkViewControllerUserDidTapCancel:(id)arg0 ;
-(void)otherNetworkViewControllerUserDidTapJoin:(id)arg0 ;
-(void)saveHardwareMAC;
-(void)saveRandomMAC;


@end


#endif