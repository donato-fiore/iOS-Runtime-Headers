// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPOSEIDONVIEWCONTROLLER_H
#define CSPOSEIDONVIEWCONTROLLER_H

@class NSString, SBUIPoseidonContainerViewController, UIView;
@protocol SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate, SBFAuthenticationStatusProvider, SBUIBiometricResource;


#import "CSCoverSheetViewControllerBase.h"

@interface CSPoseidonViewController : CSCoverSheetViewControllerBase <SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate>



@property (retain, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (retain, nonatomic) NSObject<SBUIBiometricResource> *biometricResource; // ivar: _biometricResource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBiometricLockedOut;
@property (retain, nonatomic) SBUIPoseidonContainerViewController *poseidonContainerViewController; // ivar: _poseidonContainerViewController
@property (readonly, nonatomic) UIView *poseidonView;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)poseidonContainerViewControllerCoachingStateDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif