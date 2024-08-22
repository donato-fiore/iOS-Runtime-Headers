// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADEVICERESOLVER_H
#define DADEVICERESOLVER_H

@class NSMutableDictionary, NSString, CUCoalescer, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DAEndpoint.h"

@interface DADeviceResolver : NSObject {
    *_DNSServiceRef_t _bonjourSharedService;
    NSUInteger _coalesceMinTicks;
    NSMutableDictionary *_devices;
    NSMutableDictionary *_endpoints;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _prefNameBasedSelect;
    BOOL _prefsInitialized;
    DAEndpoint *_selectedEndpoint;
}


@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) CUCoalescer *coalescer; // ivar: _coalescer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSMutableSet *resolveOperations; // ivar: _resolveOperations


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_addEndpoint:(id)arg0 ;
-(void)_ensureInitialized;
-(void)_evaluateEndpoints;
-(void)_groupEndpoint:(id)arg0 matchedEndpoint:(id)arg1 ;
-(void)_invalidated;
-(void)_removeEndpoint:(id)arg0 ;
-(void)_reportDeviceWithSoloEndpoint:(id)arg0 ;
-(void)_reportEvent:(id)arg0 ;
-(void)_reportEventType:(NSInteger)arg0 ;
-(void)_selectEndpoint:(id)arg0 ;
-(void)_startResolvingBonjourFullName:(char *)arg0 interfaceIndex:(unsigned int)arg1 endpoint:(id)arg2 ;
-(void)_startResolvingBonjourName:(char *)arg0 type:(char *)arg1 interfaceIndex:(unsigned int)arg2 endpoint:(id)arg3 ;
-(void)_startResolvingEndpoint:(id)arg0 ;
-(void)_startResolvingHostname:(char *)arg0 interfaceIndex:(unsigned int)arg1 endpoint:(id)arg2 ;
-(void)_updateSelectedEndpoint;
-(void)addEndpoint:(id)arg0 ;
-(void)invalidate;
-(void)removeEndpoint:(id)arg0 ;
-(void)selectEndpoint:(id)arg0 ;


@end


#endif