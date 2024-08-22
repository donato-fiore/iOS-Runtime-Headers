// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPROXIMITYDEVICE_H
#define PRPROXIMITYDEVICE_H

@class NSString, NSUUID;
@protocol PRProximityDeviceProtocol, OS_os_log;

#import <Foundation/Foundation.h>

#import "PRProximityDeviceParameters.h"

@interface PRProximityDevice : NSObject <PRProximityDeviceProtocol>

 {
    NSObject<OS_os_log> *_logger;
    NSString *_model;
    PRProximityDeviceParameters *_proximityParameters;
    deque<BtProxData, std::allocator<BtProxData>> _samples;
    NSInteger _proximity;
}


@property (readonly) NSUUID *peer; // ivar: _peer


-(BOOL)proxReady;
-(NSInteger)deviceProximity;
-(id)init;
-(id)initWithPeer:(id)arg0 andPeerModel:(id)arg1 withError:(*id)arg2 ;
-(void)addSample:(struct BtProxData )arg0 ;
-(void)estimateProximity;


@end


#endif