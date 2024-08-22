// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSIRITASKSERVICE_H
#define AFSIRITASKSERVICE_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFSiriTaskDeliveryHandler.h"

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    AFSiriTaskDeliveryHandler *_deliveryHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg0 ;
+(id)appTaskService;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)dealloc;
-(void)resume;
-(void)setDelegate:(id)arg0 ;


@end


#endif