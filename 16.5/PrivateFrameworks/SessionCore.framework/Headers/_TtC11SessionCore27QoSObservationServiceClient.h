// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCORE27QOSOBSERVATIONSERVICECLIENT_H
#define _TTC11SESSIONCORE27QOSOBSERVATIONSERVICECLIENT_H


#import <Foundation/Foundation.h>


@interface _TtC11SessionCore27QoSObservationServiceClient : NSObject {
    ? delegate;
    ? connection;
    ? lock;
    ? _lock_bufferedQoSUpdate;
    ? _lock_pendingAck;
    ? _lock_predicate;
}




-(id)init;


@end


#endif