// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REPIPEDLOCATIONRECEIVER_H
#define REPIPEDLOCATIONRECEIVER_H

@class NSXPCConnection, CLLocation, NSString;
@protocol REPipedLocationDonor, OS_dispatch_queue;


#import "RESingleton.h"

@interface REPipedLocationReceiver : RESingleton <REPipedLocationDonor>

 {
    NSXPCConnection *_connection;
    CLLocation *_location;
    NSInteger _connectionWindowRetainCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)_init;
-(void)dealloc;


@end


#endif