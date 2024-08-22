// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKNETWORKOBSERVER_H
#define AKNETWORKOBSERVER_H

@class NSMutableDictionary;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AKNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
}


@property (readonly, nonatomic) BOOL isNetworkReachable; // ivar: _isNetworkReachable


+(id)sharedNetworkObserver;
-(id)init;
-(void)_networkReachabilityDidChange;
-(void)_startPathMonitor;
-(void)_stopPathMonitor;
-(void)addNetworkReachableObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)removeNetworkReachableObserver:(id)arg0 ;


@end


#endif