// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHXPCBACKLIGHTPROXYHOSTSERVER_H
#define BLSHXPCBACKLIGHTPROXYHOSTSERVER_H

@class BSServiceConnectionListener, NSString;
@protocol BSServiceConnectionListenerDelegate, BLSBacklightProxy, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLSHXPCBacklightProxyHostServer : NSObject <BSServiceConnectionListenerDelegate>

 {
    id<BLSBacklightProxy> *_localBacklightProxy;
    BSServiceConnectionListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)domainSpecification;
+(id)serverWithLocalBacklightProxy:(id)arg0 ;
-(id)initWithLocalBacklightProxy:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif