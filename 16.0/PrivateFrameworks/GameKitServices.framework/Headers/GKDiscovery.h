// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDISCOVERY_H
#define GKDISCOVERY_H


#import <Foundation/Foundation.h>

#import "GKDiscoveryManager.h"

@interface GKDiscovery : NSObject

@property (retain, nonatomic) GKDiscoveryManager *manager; // ivar: _manager
@property (copy, nonatomic) id *playerFoundHandler;
@property (copy, nonatomic) id *playerLostHandler;
@property (copy, nonatomic) id *receiveDataHandler;


-(id)init;
-(id)initWithDomain:(id)arg0 type:(id)arg1 ;
-(id)startAdvertisingLocalPlayer:(id)arg0 discoveryInfo:(id)arg1 ;
-(void)dealloc;
-(void)forgetParticipant:(id)arg0 deviceID:(id)arg1 ;
-(void)sendDataToParticipant:(id)arg0 deviceID:(id)arg1 data:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)startBrowsingLocalPlayer:(id)arg0 ;
-(void)stopAdvertising;
-(void)stopBrowsing;


@end


#endif