// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RADIONETWORKOBSERVER_H
#define RADIONETWORKOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RadioNetworkObserver : NSObject {
    NSInteger _networkUsageCount;
    NSObject<OS_dispatch_queue> *_networkUsageQueue;
}


@property (readonly, nonatomic) BOOL isCellularNetworkingAllowed;
@property (readonly, nonatomic) BOOL isUsingNetwork;


+(id)sharedNetworkObserver;
-(id)_init;
-(id)init;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg0 ;
-(void)beginUsingNetwork;
-(void)dealloc;
-(void)endUsingNetwork;


@end


#endif