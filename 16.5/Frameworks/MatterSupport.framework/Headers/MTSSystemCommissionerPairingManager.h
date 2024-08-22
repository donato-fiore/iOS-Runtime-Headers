// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSSYSTEMCOMMISSIONERPAIRINGMANAGER_H
#define MTSSYSTEMCOMMISSIONERPAIRINGMANAGER_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "MTSXPCServerProxy.h"

@interface MTSSystemCommissionerPairingManager : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MTSXPCServerProxy *serverProxy; // ivar: _serverProxy
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithServerProxy:(id)arg0 ;
-(void)dealloc;
-(void)fetchDevicePairingsWithCompletionHandler:(id)arg0 ;
-(void)fetchPairingsWithCompletionHandler:(id)arg0 ;
-(void)removeDevicePairing:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDevicePairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif