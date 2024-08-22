// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTNETWORKINGSERVICE_H
#define DTNETWORKINGSERVICE_H

@class DTXService, NSString;
@protocol DTNetworkingServiceAuthorizedAPI, OS_dispatch_queue, OS_dispatch_source;



@interface DTNetworkingService : DTXService <DTNetworkingServiceAuthorizedAPI>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    *__NStatManager _netstatMan;
    DTNStatSourceMap _sources;
    NSUInteger _seenInterfaces;
    NSUInteger _hiddenInterfaces;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSInteger _interval;
    int _filteredToPid;
    BOOL _isAppleInternal;
    BOOL _isDisconnected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceName;
+(void)registerCapabilities:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)setTargetPID:(id)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif