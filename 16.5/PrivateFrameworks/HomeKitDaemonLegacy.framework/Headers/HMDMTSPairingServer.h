// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMTSPAIRINGSERVER_H
#define HMDMTSPAIRINGSERVER_H

@class HMFObject, NSString, HMMTRSystemCommissionerPairingManager;
@protocol HMFLogging, MTSDevicePairingServerInterface, MTSSystemCommissionerPairingServerInterface;



@interface HMDMTSPairingServer : HMFObject <HMFLogging, MTSDevicePairingServerInterface, MTSSystemCommissionerPairingServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) HMMTRSystemCommissionerPairingManager *systemCommissionerPairingManager; // ivar: _systemCommissionerPairingManager


+(id)logCategory;
-(id)initWithAccessoryBrowser:(id)arg0 ;
-(id)initWithSystemCommissionerPairingManager:(id)arg0 ;
-(void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSystemCommissionerPairingsWithCompletionHandler:(id)arg0 ;
-(void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDevicePairingWithUUID:(id)arg0 forSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSystemCommissionerPairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif