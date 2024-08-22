// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERUISMARTCHARGECLIENT_H
#define POWERUISMARTCHARGECLIENT_H

@class NSString, NSXPCConnection;
@protocol PowerUISmartChargeClientManaging, OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUISmartChargeClient : NSObject <PowerUISmartChargeClientManaging>



@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


+(id)remoteInterface;
-(BOOL)disableMCM:(*id)arg0 ;
-(BOOL)disableSmartCharging:(*id)arg0 ;
-(BOOL)enableMCM:(*id)arg0 ;
-(BOOL)enableSmartCharging:(*id)arg0 ;
-(BOOL)isOBCEngaged:(*BOOL)arg0 asDesktopDevice:(*BOOL)arg1 chargingOverrideAllowed:(*BOOL)arg2 withError:(*id)arg3 ;
-(BOOL)isOBCEngaged:(*id)arg0 ;
-(BOOL)isOBCEngagedAsDesktopDevice:(*BOOL)arg0 chargingOverrideAllowed:(*BOOL)arg1 withError:(*id)arg2 ;
-(BOOL)isOBCSupported;
-(BOOL)setChargingStatus:(BOOL)arg0 ;
-(BOOL)setMCMState:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setState:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)shouldMCMBeDisplayed:(*id)arg0 ;
-(BOOL)temporarilyDisableMCM:(*id)arg0 ;
-(BOOL)temporarilyDisableSmartCharging:(*id)arg0 ;
-(BOOL)temporarilyEnableCharging:(*id)arg0 ;
-(NSUInteger)isMCMCurrentlyEnabled:(*id)arg0 ;
-(NSUInteger)isSmartChargingCurrentlyEnabled:(*id)arg0 ;
-(id)fullChargeDeadline:(*id)arg0 ;
-(id)initWithClientName:(id)arg0 ;
-(id)lastUsedLeewayWithError:(*id)arg0 ;
-(id)powerLogStatus;
-(id)simulateCurrentOutputAsOfDate:(id)arg0 overrideAllSignals:(BOOL)arg1 withError:(*id)arg2 ;
-(id)status;
-(void)disableMCMWithHandler:(id)arg0 ;
-(void)disableSmartChargingWithHandler:(id)arg0 ;
-(void)enableMCMWithHandler:(id)arg0 ;
-(void)enableSmartChargingWithHandler:(id)arg0 ;
-(void)engageFrom:(id)arg0 until:(id)arg1 repeatUntil:(id)arg2 overrideAllSignals:(BOOL)arg3 ;
-(void)enterDevelopmentMode;
-(void)forceModelUpdate;
-(void)fullChargeDeadlineWithHandler:(id)arg0 ;
-(void)isMCMCurrentlyEnabledWithHandler:(id)arg0 ;
-(void)isOBCEngagedAsDesktopDeviceWithHandler:(id)arg0 ;
-(void)isOBCEngagedWithHandler:(id)arg0 ;
-(void)isOBCSupportedWithHandler:(id)arg0 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(id)arg0 ;
-(void)listMonitorSignals;
-(void)resetDevelopmentMode;
-(void)resetEngagementOverride;
-(void)shouldMCMBeDisplayedWithHandler:(id)arg0 ;
-(void)temporarilyDisableMCMWithHandler:(id)arg0 ;
-(void)temporarilyDisableSmartChargingWithHandler:(id)arg0 ;
-(void)temporarilyEnableChargingWithHandler:(id)arg0 ;


@end


#endif