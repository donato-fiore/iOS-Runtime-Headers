// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMNETWORKACTIVITYOBSERVER_H
#define CMNETWORKACTIVITYOBSERVER_H


#import <Foundation/Foundation.h>

#import "CMNetworkActivityMonitor.h"

@interface CMNetworkActivityObserver : NSObject {
    BOOL _valid;
    BOOL _registered;
    int _cmActivityToken;
    int _cmActivityPollingToken;
    CMNetworkActivityMonitor *_activityMonitor;
}


@property (readonly, nonatomic) CMNetworkActivityMonitor *activityMonitor;


+(id)registeredObserverForActivityMonitor:(id)arg0 ;
-(id)initForActivityMonitor:(id)arg0 ;
-(void)_pollWithInterval:(CGFloat)arg0 networkActivityDidCompleteBlock:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)registerObservations;
-(void)unregisterObservations;


@end


#endif