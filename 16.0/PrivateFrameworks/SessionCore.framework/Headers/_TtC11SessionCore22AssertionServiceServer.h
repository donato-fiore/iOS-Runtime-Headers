// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCORE22ASSERTIONSERVICESERVER_H
#define _TTC11SESSIONCORE22ASSERTIONSERVICESERVER_H

@protocol BSServiceConnectionListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCore22AssertionServiceServer : NSObject <BSServiceConnectionListenerDelegate>

 {
    ? lock;
    ? _lock_clients;
    ? requestProcessingQueue;
    ? listener;
    ? assertionManager;
}




-(id)init;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif