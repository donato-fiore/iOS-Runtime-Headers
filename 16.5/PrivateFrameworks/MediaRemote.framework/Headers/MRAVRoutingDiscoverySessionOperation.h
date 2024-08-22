// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVROUTINGDISCOVERYSESSIONOPERATION_H
#define MRAVROUTINGDISCOVERYSESSIONOPERATION_H

@class NSMutableSet, NSDate, NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRAVRoutingDiscoverySession.h"
#import "MRBlockGuard.h"

@interface MRAVRoutingDiscoverySessionOperation : NSObject {
    id *_outputDeviceDiscoveredHandler;
    id *_endpointDiscoveredHandler;
    id *_finishHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_discoveredEndpoints;
    NSMutableSet *_discoveredOutputDevices;
    NSMutableSet *_discoveredTargetOutputDeviceUIDs;
    MRAVRoutingDiscoverySession *_session;
    MRBlockGuard *_guard;
    NSDate *_startDate;
    NSString *_requestID;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id *endpointDiscoveredHandler;
@property (copy, nonatomic) id *finishHandler;
@property (copy, nonatomic) id *outputDeviceDiscoveredHandler;
@property (readonly, copy, nonatomic) NSArray *outputDeviceUIDs; // ivar: _outputDeviceUIDs


-(id)initWithOutputDeviceUIDs:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_notifyDiscoveredEndpoint:(id)arg0 outputDevice:(id)arg1 forTargetOutputDevice:(id)arg2 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)executeWithTimeout:(CGFloat)arg0 ;


@end


#endif