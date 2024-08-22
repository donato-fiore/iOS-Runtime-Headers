// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDLOGICALDEVICESCOPEDSTATEMANAGER_H
#define CKDLOGICALDEVICESCOPEDSTATEMANAGER_H

@protocol CKXPCLogicalDeviceScopedDaemon;

#import <Foundation/Foundation.h>

#import "CKDLogicalDeviceContext.h"

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>



@property (retain, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext


-(id)initWithDeviceContext:(id)arg0 ;
-(void)addClouddThrottle:(id)arg0 ;
-(void)allClouddThrottlesWithCompletionHandler:(id)arg0 ;
-(void)clearAllClouddThrottles;
-(void)postClouddWalrusUpdateNotification;


@end


#endif