// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC26SIRIPRIVATELEARNINGLOGGING32PLLOGGINGSERVICELISTENERDELEGATE_H
#define _TTC26SIRIPRIVATELEARNINGLOGGING32PLLOGGINGSERVICELISTENERDELEGATE_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPrivateLearningLogging32PLLoggingServiceListenerDelegate : NSObject <NSXPCListenerDelegate>

 {
    ? queue;
    ? connections;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif