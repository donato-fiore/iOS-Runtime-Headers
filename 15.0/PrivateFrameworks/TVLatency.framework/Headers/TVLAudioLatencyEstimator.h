// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVLAUDIOLATENCYESTIMATOR_H
#define TVLAUDIOLATENCYESTIMATOR_H

@class CUMessageSession;

#import <Foundation/Foundation.h>

#import "TVLNetworkInterface.h"
#import "TVLListenEngine.h"
#import "TVLNetworkMonitor.h"
#import "TVLTimeSync.h"

@interface TVLAudioLatencyEstimator : NSObject

@property (retain, nonatomic) TVLNetworkInterface *awdlInterface; // ivar: _awdlInterface
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) id *internalProgressEventHandler; // ivar: _internalProgressEventHandler
@property (retain, nonatomic) TVLListenEngine *listenEngine; // ivar: _listenEngine
@property (retain, nonatomic) TVLNetworkMonitor *networkMonitor; // ivar: _networkMonitor
@property (copy, nonatomic) id *progressEventHandler; // ivar: _progressEventHandler
@property (readonly, nonatomic) NSUInteger role; // ivar: _role
@property (retain, nonatomic) CUMessageSession *session; // ivar: _session
@property (retain, nonatomic) TVLTimeSync *timeSync; // ivar: _timeSync
@property (nonatomic) float version; // ivar: _version
@property (retain, nonatomic) TVLNetworkInterface *wifiInterface; // ivar: _wifiInterface


-(id)initWithMessageSession:(id)arg0 ;
-(id)networkInterfaceOfType:(NSUInteger)arg0 fromInterfaces:(id)arg1 ;
-(void)_estimateAudioLatencyWithOptions:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_initWithMessageSession:(id)arg0 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_postInternalProgressEvent:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)_postProgressEvent:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)_respondAndInvalidateWithError:(id)arg0 responseHandler:(id)arg1 ;
-(void)_sendMessage:(id)arg0 withResponse:(id)arg1 ;
-(void)_synchronizeClocksWithOptions:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_tearDown;
-(void)activate;
-(void)estimate;
-(void)estimateAudioLatencyWithToneIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)networkMonitorInterfacesDidUpdate:(id)arg0 ;
-(void)setAudioLatencyEstimationCompletionHandler:(id)arg0 ;
-(void)startNetworkMonitoring;


@end


#endif