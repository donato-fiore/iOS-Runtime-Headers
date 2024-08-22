// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKREMOTEINTERFACEPRESENTER_H
#define NPKREMOTEINTERFACEPRESENTER_H

@class NSXPCConnection;
@protocol NPKRemoteInterfacePresenterDelegate;

#import <Foundation/Foundation.h>


@interface NPKRemoteInterfacePresenter : NSObject

@property (weak, nonatomic) NSObject<NPKRemoteInterfacePresenterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)init;
-(void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(id)arg0 withError:(id)arg1 ;
-(void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg0 fromSource:(NSInteger)arg1 completion:(id)arg2 ;
-(void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg0 forHostApplicationName:(id)arg1 hostBundleIdentifier:(id)arg2 hostProcessIdentifier:(int)arg3 hostIdentifier:(id)arg4 orientation:(id)arg5 completion:(id)arg6 ;
-(void)presentPasscodeUpgradeRequestWithChangeType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)presentSetupApplePayAlert:(id)arg0 ;
-(void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(id)arg0 completion:(id)arg1 ;
-(void)tearDownPasscodeUpgradeRequestWithPasscodeChanged:(BOOL)arg0 error:(id)arg1 ;


@end


#endif