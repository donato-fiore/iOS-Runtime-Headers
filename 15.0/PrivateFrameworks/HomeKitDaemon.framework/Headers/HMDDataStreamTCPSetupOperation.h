// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDATASTREAMTCPSETUPOPERATION_H
#define HMDDATASTREAMTCPSETUPOPERATION_H

@class NSData, HMFNetAddress, HAPSecuritySessionEncryption;


#import "HMDDataStreamSetupOperation.h"

@interface HMDDataStreamTCPSetupOperation : HMDDataStreamSetupOperation

@property (retain, nonatomic) NSData *accessoryKeySalt; // ivar: _accessoryKeySalt
@property (readonly, nonatomic) NSData *controllerKeySalt; // ivar: _controllerKeySalt
@property (retain, nonatomic) HMFNetAddress *remoteNetAddress; // ivar: _remoteNetAddress
@property (nonatomic) NSInteger remoteTcpPort; // ivar: _remoteTcpPort
@property (retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // ivar: _sessionEncryption


+(id)logCategory;
-(BOOL)_isComplete;
-(id)_createTCPTransport;
-(id)_fullKeySalt;
-(id)initWithAccessory:(id)arg0 queue:(id)arg1 logIdentifier:(id)arg2 transferManagementService:(id)arg3 ;
-(void)_finishStreamTransport;
-(void)_generateStreamKeys;
-(void)processTransportSetupResponse:(id)arg0 ;
-(void)startSetup;


@end


#endif