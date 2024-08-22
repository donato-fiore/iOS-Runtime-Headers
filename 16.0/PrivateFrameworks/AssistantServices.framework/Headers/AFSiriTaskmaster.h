// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRITASKMASTER_H
#define AFSIRITASKMASTER_H

@class NSXPCListener, NSMapTable, NSString;
@protocol AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling, AFSiriRequestFailureHandling, OS_dispatch_queue, AFSiriTaskDelivering, AFSiriTaskmasterDelegate;

#import <Foundation/Foundation.h>


@interface AFSiriTaskmaster : NSObject <AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling, AFSiriRequestFailureHandling>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFSiriTaskDelivering> *_taskDeliverer;
    NSXPCListener *_usageResultListener;
    NSMapTable *_executorForRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFSiriTaskmasterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)arg0 ;
+(id)taskmasterForMachServiceWithName:(id)arg0 ;
+(id)taskmasterForUIApplicationWithBundleIdentifier:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithTaskDeliverer:(id)arg0 ;
-(void)_handleFailureOfRequest:(id)arg0 error:(id)arg1 atTime:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)handleFailureOfRequest:(id)arg0 error:(id)arg1 atTime:(NSUInteger)arg2 ;
// -(void)handleSiriRequest:(id)arg0 deliveryHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)handleSiriTaskUsageResult:(id)arg0 fromRequest:(id)arg1 ;


@end


#endif