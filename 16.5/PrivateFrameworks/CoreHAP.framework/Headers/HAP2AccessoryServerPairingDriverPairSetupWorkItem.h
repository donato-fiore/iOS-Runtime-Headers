// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERPAIRINGDRIVERPAIRSETUPWORKITEM_H
#define HAP2ACCESSORYSERVERPAIRINGDRIVERPAIRSETUPWORKITEM_H

@class NSError, NSString;
@protocol HAPPairSetupSessionClientDelegate, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerTransport;


#import "HAP2AccessoryServerPairingDriverWorkItem.h"
#import "HAPPairSetupSession.h"

@interface HAP2AccessoryServerPairingDriverPairSetupWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPPairSetupSessionClientDelegate>



@property (nonatomic) CGFloat backoffInterval; // ivar: _backoffInterval
@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerPairingDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidSetupCode) BOOL invalidSetupCode; // ivar: _invalidSetupCode
@property (readonly, nonatomic) NSUInteger pairSetupType; // ivar: _pairSetupType
@property (retain, nonatomic) HAPPairSetupSession *pairingSession; // ivar: _pairingSession
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransport> *transport; // ivar: _transport


+(id)pairSetupWithType:(NSUInteger)arg0 ;
-(BOOL)pairSetupSession:(id)arg0 didPairWithPeer:(id)arg1 error:(*id)arg2 ;
-(BOOL)pairSetupSession:(id)arg0 didReceiveBackoffRequestWithTimeInterval:(CGFloat)arg1 ;
-(id)initWithPairSetupType:(NSUInteger)arg0 ;
-(id)pairSetupSession:(id)arg0 didReceiveLocalPairingIdentityRequestWithError:(*id)arg1 ;
-(void)_pairingStoppedWithError:(id)arg0 ;
-(void)_resetPairingState;
-(void)cancelWithError:(id)arg0 ;
-(void)pairSetupSession:(id)arg0 didReceiveProductData:(id)arg1 ;
-(void)pairSetupSession:(id)arg0 didReceiveSetupCodeRequestWithCompletionHandler:(id)arg1 ;
-(void)pairSetupSession:(id)arg0 didReceiveSetupExchangeData:(id)arg1 ;
-(void)pairSetupSession:(id)arg0 didStopWithError:(id)arg1 ;
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg0 ;
-(void)pairSetupSessionDidStart:(id)arg0 ;
-(void)runForPairingDriver:(id)arg0 ;


@end


#endif