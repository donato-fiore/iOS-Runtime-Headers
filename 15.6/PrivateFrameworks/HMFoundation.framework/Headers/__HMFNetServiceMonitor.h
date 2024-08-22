// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMFNETSERVICEMONITOR_H
#define __HMFNETSERVICEMONITOR_H



#import "HMFNetMonitor.h"
#import "HMFNetService.h"

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service; // ivar: _service


-(NSUInteger)reachabilityPath;
-(id)initWithNetAddress:(id)arg0 ;
-(id)initWithNetService:(id)arg0 ;
-(id)logIdentifier;
-(id)netAddress;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif