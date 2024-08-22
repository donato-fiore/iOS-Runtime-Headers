// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRAFFICENGMANAGER_H
#define WFTRAFFICENGMANAGER_H

@class RPCompanionLinkClient;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

#import <Foundation/Foundation.h>


@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}


@property (nonatomic) NSObject<WFTrafficEngDelegate> *trafficEngDelegate; // ivar: _trafficEngDelegate


-(BOOL)__configureRapportDiscoveryClient;
-(id)__collectCriticalAppInfo;
-(id)initWithTrafficEngDelegate:(id)arg0 ;
-(void)__activateDiscovery;
-(void)__configureRapportSessionClient:(id)arg0 ;
-(void)__invalidateDiscovery;
-(void)__invalidateSession;
-(void)__registerCallbacksAndActivate;
-(void)__registerRequestHandler;
-(void)__requestCriticalAppInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)__sendEventToPeers;
-(void)__sendKeepAliveEvent:(id)arg0 dictionary:(id)arg1 ;
-(void)__sendPeriodicEvent:(id)arg0 ;
-(void)__tearDownRapportDataSession;
-(void)cleanup;
-(void)dealloc;


@end


#endif