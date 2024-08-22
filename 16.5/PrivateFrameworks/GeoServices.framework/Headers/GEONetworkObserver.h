// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONETWORKOBSERVER_H
#define GEONETWORKOBSERVER_H

@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;

#import <Foundation/Foundation.h>


@interface GEONetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_nw_path_monitor> *_monitor;
    NSObject<OS_nw_path> *_currentPath;
    BOOL _initialized;
    BOOL _networkReachable;
    BOOL _networkConstrained;
}


@property (readonly, nonatomic, getter=isCellConnection) BOOL cellConnection;
@property (readonly, nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic, getter=isWiFiConnection) BOOL wifiConnection;


+(id)sharedNetworkObserver;
-(BOOL)_isConnectionType:(int)arg0 ;
-(id)init;
-(void)_initializeNetworkMonitor;
-(void)_networkPathUpdated:(id)arg0 ;
-(void)addNetworkReachableObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)initializeIfNecessary;
-(void)removeNetworkReachableObserver:(id)arg0 ;


@end


#endif