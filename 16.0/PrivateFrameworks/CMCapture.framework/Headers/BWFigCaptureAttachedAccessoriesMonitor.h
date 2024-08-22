// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFIGCAPTUREATTACHEDACCESSORIESMONITOR_H
#define BWFIGCAPTUREATTACHEDACCESSORIESMONITOR_H

@class ACCConnectionInfo, NSString;
@protocol ACCConnectionInfoDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject <ACCConnectionInfoDelegateProtocol>

 {
    ACCConnectionInfo *_connectionInfoProvider;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_walletAccessoryUUID;
    NSString *_batteryPackAccessoryUUID;
}


@property (readonly, nonatomic) BOOL batteryPackAccessoryConnected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL walletAccessoryConnected;


+(id)sharedAttachedAccessoriesMonitor;
+(void)initialize;
-(id)init;
-(void)accessoryConnectionDetached:(id)arg0 ;
-(void)accessoryEndpointAttached:(id)arg0 transportType:(int)arg1 protocol:(int)arg2 forConnection:(id)arg3 ;
-(void)dealloc;


@end


#endif