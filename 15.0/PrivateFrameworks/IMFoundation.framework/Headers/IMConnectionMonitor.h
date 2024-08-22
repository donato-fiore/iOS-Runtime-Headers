// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCONNECTIONMONITOR_H
#define IMCONNECTIONMONITOR_H

@class NSString;
@protocol IMConnectionMonitorDelegate;

#import <Foundation/Foundation.h>


@interface IMConnectionMonitor : NSObject

@property (weak, nonatomic) NSObject<IMConnectionMonitorDelegate> *delegate; // ivar: _delegate
@property (nonatomic, setter=setDataConnectionActive:) BOOL isDataConnectionActive;
@property (readonly, nonatomic) BOOL isImmediatelyReachable;
@property (readonly, retain, nonatomic) NSString *remoteHost; // ivar: _remoteHost
@property (readonly, nonatomic) BOOL requiresDataConnectionActivation;


+(id)alloc;
-(id)initWithRemoteHost:(id)arg0 delegate:(id)arg1 ;
-(void)_setup;
-(void)clear;
-(void)goConnectedWithLocalSocketAddress:(id)arg0 remoteSocketAddress:(id)arg1 ;
-(void)goDisconnected;


@end


#endif