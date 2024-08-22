// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCORE27QOSOBSERVATIONSERVICESERVER_H
#define _TTC11SESSIONCORE27QOSOBSERVATIONSERVICESERVER_H

@protocol BSServiceConnectionListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCore27QoSObservationServiceServer : NSObject <BSServiceConnectionListenerDelegate>

 {
    ? requestProcessingQueue;
    ? listener;
    ? lock;
    ? _lock_clients;
    ? _lock_qos;
    ? qosSubscription;
}




-(id)init;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif