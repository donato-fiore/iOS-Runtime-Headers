// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCFNETWORKMONITOR_H
#define _NSCFNETWORKMONITOR_H

@class CoreTelephonyClient, CTDataStatusBasic, NSString;
@protocol CoreTelephonyClientDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _NSCFNetworkMonitor : NSObject <CoreTelephonyClientDataDelegate>

 {
    CoreTelephonyClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    CTDataStatusBasic *_status;
    os_unfair_lock_s _statusLock;
    BOOL _queryFailed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)internetDataStatusBasic:(id)arg0 ;


@end


#endif