// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPREACHABILITYMONITOR_H
#define TVPREACHABILITYMONITOR_H


#import <Foundation/Foundation.h>


@interface TVPReachabilityMonitor : NSObject {
    *__SCNetworkReachability _reachability;
}


@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isWifiEnabled;
@property (readonly, nonatomic) NSUInteger networkType; // ivar: _networkType


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_reachabilityDidChange:(id)arg0 ;
-(void)_wifiDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif