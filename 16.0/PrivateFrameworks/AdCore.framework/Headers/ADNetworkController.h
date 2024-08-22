// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADNETWORKCONTROLLER_H
#define ADNETWORKCONTROLLER_H

@class NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ADNetworkController : NSObject {
    *__SCDynamicStore _store;
    NSTimer *_notificationTimer;
    int _networkType;
    *__SCNetworkReachability _reachability;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
}


@property BOOL canReachTheNetwork; // ivar: _canReachTheNetwork
@property BOOL isUpdating; // ivar: _isUpdating


+(id)sharedNetworkController;
-(id)getDataContext:(id)arg0 ;
-(int)cellNetworkType;
-(int)dataIndicatorToConnection:(int)arg0 ;
-(int)networkType;
-(void)_checkForNetwork;
-(void)_checkForNetworkAndNotify;
-(void)_updateStatus:(BOOL)arg0 ;
-(void)start;


@end


#endif