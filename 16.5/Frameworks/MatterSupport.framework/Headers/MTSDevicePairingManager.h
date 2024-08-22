// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICEPAIRINGMANAGER_H
#define MTSDEVICEPAIRINGMANAGER_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "MTSXPCServerProxy.h"
#import "MTSSystemCommissionerPairing.h"

@interface MTSDevicePairingManager : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MTSXPCServerProxy *serverProxy; // ivar: _serverProxy
@property (readonly) Class superclass;
@property (readonly, copy) MTSSystemCommissionerPairing *systemCommissionerPairing; // ivar: _systemCommissionerPairing


+(id)logCategory;
-(id)init;
-(id)initWithSystemCommissionerPairing:(id)arg0 ;
-(id)initWithSystemCommissionerPairing:(id)arg0 serverProxy:(id)arg1 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)fetchDevicePairingsWithCompletionHandler:(id)arg0 ;
-(void)fetchPairingsWithCompletionHandler:(id)arg0 ;
-(void)removeAllPairingsWithCompletionHandler:(id)arg0 ;
-(void)removeDevicePairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif