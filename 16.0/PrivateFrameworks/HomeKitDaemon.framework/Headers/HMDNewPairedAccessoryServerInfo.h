// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNEWPAIREDACCESSORYSERVERINFO_H
#define HMDNEWPAIREDACCESSORYSERVERINFO_H

@class NSString, NSUUID, HAPAccessoryServer;
@protocol MKFAccessory;

#import <Foundation/Foundation.h>

#import "HMDAccessoryNetworkCredential.h"
#import "HMDAccessoryPairingEvent.h"

@interface HMDNewPairedAccessoryServerInfo : NSObject

@property (readonly) NSInteger certificationStatus; // ivar: _certificationStatus
@property (readonly) NSString *configurationAppIdentifier; // ivar: _configurationAppIdentifier
@property (readonly) NSObject<MKFAccessory> *hostAccessory; // ivar: _hostAccessory
@property (readonly) HMDAccessoryNetworkCredential *networkCredential; // ivar: _networkCredential
@property (readonly) HMDAccessoryPairingEvent *pairingEvent; // ivar: _pairingEvent
@property (readonly) NSUUID *primaryAccessoryUUID; // ivar: _primaryAccessoryUUID
@property (readonly) HAPAccessoryServer *server; // ivar: _server


-(id)description;
-(id)initWithServer:(id)arg0 primaryAccessoryUUID:(id)arg1 certificationStatus:(NSInteger)arg2 configurationAppIdentifier:(id)arg3 hostAccessory:(id)arg4 networkCredential:(id)arg5 pairingEvent:(id)arg6 ;


@end


#endif