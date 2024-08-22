// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPOWERMANAGER_H
#define HMDPOWERMANAGER_H

@class HMFObject;
@protocol OS_dispatch_queue;



@interface HMDPowerManager : HMFObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _networkInterfaceActive;
    unsigned int _powerAssertion;
    *__SCDynamicStore _scStore;
    *void _scContext;
    BOOL _started;
}


@property (nonatomic, getter=isNetworkAccessRequired) BOOL networkAccessRequired; // ivar: _networkAccessRequired


-(id)init;
-(int)_ensureNetworkInterfaceMonitorStarted;
-(void)_ensureNetworkInterfaceMonitorStopped;
-(void)_update;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif