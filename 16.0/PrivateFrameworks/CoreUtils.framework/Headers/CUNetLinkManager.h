// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUNETLINKMANAGER_H
#define CUNETLINKMANAGER_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUNetLinkManager : NSObject {
    NSMutableSet *_endpoints;
    unsigned int _endpointChanges;
    BOOL _hasIPv4Endpoint;
    BOOL _hasIPv6Endpoint;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_pollTimer;
    int _probeSocketV4;
    NSObject<OS_dispatch_source> *_probeSourceV4;
    int _probeSocketV6;
    NSObject<OS_dispatch_source> *_probeSourceV6;
    unsigned int _reReachableCount;
    unsigned int _rxCount;
    unsigned int _txCount;
    unsigned int _txErrors;
    *LogCategory _ucat;
    unsigned int _unreachableCount;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_invalidate;
-(void)_invalidated;
-(void)_monitorEnsureStarted;
-(void)_monitorEnsureStopped;
-(void)_monitorReadPacket:(int)arg0 ;
-(void)_monitorSendPacketToEndpoint:(id)arg0 ;
-(void)_monitorSetupSocket:(int)arg0 ;
-(void)_update;
-(void)_updateARP;
-(void)_updateEndpoint:(id)arg0 state:(int)arg1 ;
-(void)_updateEndpoints;
-(void)_updateNDP;
-(void)activate;
-(void)addEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeEndpoint:(id)arg0 ;


@end


#endif