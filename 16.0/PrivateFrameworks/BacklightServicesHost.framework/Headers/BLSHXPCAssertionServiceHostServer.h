// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHXPCASSERTIONSERVICEHOSTSERVER_H
#define BLSHXPCASSERTIONSERVICEHOSTSERVER_H

@class BSServiceConnectionListener, NSString;
@protocol BSServiceConnectionListenerDelegate, BLSAssertionService, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLSHXPCAssertionServiceHostServer : NSObject <BSServiceConnectionListenerDelegate>

 {
    id<BLSAssertionService> *_localAssertionService;
    BSServiceConnectionListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)domainSpecification;
+(id)serverWithLocalAssertionService:(id)arg0 ;
-(id)initWithLocalAssertionService:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif