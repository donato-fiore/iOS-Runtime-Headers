// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MX_NETWORKOBSERVER_H
#define MX_NETWORKOBSERVER_H

@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;

#import <Foundation/Foundation.h>


@interface MX_NetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *mAccessQueue;
    NSObject<OS_nw_path_monitor> *mMonitor;
    NSObject<OS_nw_path> *mCurrentPath;
    BOOL mNetworkReachable;
}




-(BOOL)isCarrierNetworkReachable;
-(id)init;
-(void)dealloc;
-(void)networkPathUpdate:(id)arg0 ;


@end


#endif