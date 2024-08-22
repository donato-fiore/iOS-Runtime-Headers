// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSREACHABILITYMANAGER_H
#define TPSREACHABILITYMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TPSReachability.h"

@interface TPSReachabilityManager : NSObject {
    BOOL _notifying;
    BOOL _hostActive;
}


@property (nonatomic) BOOL connected; // ivar: _connected
@property (retain, nonatomic) NSString *hostName; // ivar: _hostName
@property (retain, nonatomic) TPSReachability *hostReachability; // ivar: _hostReachability
@property (nonatomic) BOOL internetActive; // ivar: _internetActive
@property (retain, nonatomic) TPSReachability *internetReachability; // ivar: _internetReachability
@property (nonatomic) BOOL reachabilityInitialized; // ivar: _reachabilityInitialized


+(id)defaultManager;
-(BOOL)isNetworkError:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)reachabilityChanged:(id)arg0 ;
-(void)startNotifier;
-(void)stopNotifier;
-(void)updateStatus:(id)arg0 ;


@end


#endif