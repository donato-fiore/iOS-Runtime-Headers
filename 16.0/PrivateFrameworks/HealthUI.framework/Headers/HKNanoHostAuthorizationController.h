// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKNANOHOSTAUTHORIZATIONCONTROLLER_H
#define HKNANOHOSTAUTHORIZATIONCONTROLLER_H

@class NSXPCConnection;
@protocol HKHealthPrivacyHostRemoteViewController, HKHealthPrivacyHostAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>


@interface HKNanoHostAuthorizationController : NSObject <HKHealthPrivacyHostRemoteViewController>



@property (weak, nonatomic) NSObject<HKHealthPrivacyHostAuthorizationControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)init;
// -(void)_remoteObjectProxyWithCompletion:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionDidInterrupt;
-(void)connectionDidInvalidate;
-(void)didFinishWithError:(id)arg0 ;
-(void)invalidate;
-(void)setRequestRecord:(id)arg0 presentationRequests:(id)arg1 ;
-(void)show;


@end


#endif