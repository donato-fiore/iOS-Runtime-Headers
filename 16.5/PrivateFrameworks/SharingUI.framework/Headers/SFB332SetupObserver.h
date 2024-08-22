// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFB332SETUPOBSERVER_H
#define SFB332SETUPOBSERVER_H

@class SFXPCClient;
@protocol SFB332UIProtocol;



@interface SFB332SetupObserver : SFXPCClient

@property (weak, nonatomic) NSObject<SFB332UIProtocol> *delegate; // ivar: _delegate


-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(void)acquireHUDTransaction;
-(void)activate;
-(void)dismissBTPrompt;
-(void)dismissChargingStatus;
-(void)dismissUIAnimated:(BOOL)arg0 ;
-(void)dismissUnlockPrompt;
-(void)enableBluetoothTapped;
-(void)invalidate;
-(void)pairTapped;
-(void)releaseHUDTransaction;
-(void)setDeviceType:(NSUInteger)arg0 ;
-(void)setShouldShowWhatsNew:(BOOL)arg0 ;
-(void)showChargingStatus;
-(void)showEnableBluetoothPill;
-(void)showPairConsentPrompt;
-(void)showPairingFailure;
-(void)showPairingStarted;
-(void)showPairingSuccess;
-(void)showSubsequentPairSuccess;
-(void)showUnlockPrompt;
-(void)updateDeviceInfoWithName:(id)arg0 batteryLevel:(CGFloat)arg1 batteryLevelKnown:(BOOL)arg2 edge:(NSUInteger)arg3 orientation:(NSUInteger)arg4 ;


@end


#endif