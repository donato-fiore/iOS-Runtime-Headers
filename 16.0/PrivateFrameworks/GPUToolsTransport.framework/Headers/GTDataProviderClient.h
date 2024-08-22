// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTDATAPROVIDERCLIENT_H
#define GTDATAPROVIDERCLIENT_H

@class NSUUID;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "GTDataProviderServiceXPCProxy.h"

@interface GTDataProviderClient : NSObject {
    NSObject<OS_os_log> *_log;
    GTDataProviderServiceXPCProxy *_dataProvider;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_fragmentCompleteSemaphore;
    NSUInteger _nextHandle;
    NSUUID *_thisDeviceUUID;
}




-(NSUInteger)getNextHandle;
-(id)getDataProvider:(id)arg0 deviceUUID:(id)arg1 ;
-(id)init;
-(void)transferData:(id)arg0 overConnection:(id)arg1 toDevice:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif