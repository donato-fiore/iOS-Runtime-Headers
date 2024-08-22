// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWFIGCAPTUREATTACHEDACCESSORIESMONITOR_H
#define BWFIGCAPTUREATTACHEDACCESSORIESMONITOR_H

@class ACCConnectionInfo, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject {
    ACCConnectionInfo *_connectionInfoProvider;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_walletAccessoryUUID;
    NSString *_batteryPackAccessoryUUID;
}


@property (readonly, nonatomic) BOOL batteryPackAccessoryConnected;
@property (readonly, nonatomic) BOOL walletAccessoryConnected;


+(id)sharedAttachedAccessoriesMonitor;
+(void)initialize;
-(id)init;
-(void)accessoryConnectionDetached:(id)arg0 ;
-(void)accessoryEndpointAttached:(id)arg0 transportType:(int)arg1 protocol:(int)arg2 forConnection:(id)arg3 ;
-(void)dealloc;


@end


#endif