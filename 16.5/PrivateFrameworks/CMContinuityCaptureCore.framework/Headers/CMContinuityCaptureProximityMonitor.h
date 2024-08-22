// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTUREPROXIMITYMONITOR_H
#define CMCONTINUITYCAPTUREPROXIMITYMONITOR_H

@class NISession, NIRegionPredicate, NSMutableSet, NSString;
@protocol NIInternalSessionDelegate, CMContinuityCaptureProximityMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureProximityMonitor : NSObject <NIInternalSessionDelegate>

 {
    BOOL _havePendingUpdates;
    id<CMContinuityCaptureProximityMonitorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NISession *_niSession;
    NIRegionPredicate *_innerPredicate;
    NIRegionPredicate *_outerPredicate;
    NSMutableSet *_tracking;
    NSMutableSet *_nearby;
    NSMutableSet *_knownDevices;
    int _errorCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDeviceKnown:(id)arg0 ;
-(BOOL)isDeviceNearby:(id)arg0 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_invalidate;
-(void)_startNearbyInteractionSession;
-(void)beginTracking:(id)arg0 ;
-(void)dealloc;
-(void)endTracking:(id)arg0 ;
-(void)invalidate;
-(void)session:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)session:(id)arg0 object:(id)arg1 didUpdateRegion:(id)arg2 previousRegion:(id)arg3 ;
-(void)sessionSuspensionEnded:(id)arg0 ;
-(void)sessionWasSuspended:(id)arg0 ;


@end


#endif