// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUINETWORKREACHABILITYMONITOR_H
#define VUINETWORKREACHABILITYMONITOR_H

@class NSString;
@protocol ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>


@interface VUINetworkReachabilityMonitor : NSObject <ICEnvironmentMonitorObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *networkReachabilityChangedNotificationToken; // ivar: _networkReachabilityChangedNotificationToken
@property (getter=isNetworkReachable) BOOL networkReachable; // ivar: _networkReachable
@property (retain, nonatomic) id *networkTypeChangedNotificationToken; // ivar: _networkTypeChangedNotificationToken
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_updateNetworkReachability;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;


@end


#endif