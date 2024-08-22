// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCORE36PRESENTATIONOBSERVATIONSERVICECLIENT_H
#define _TTC11SESSIONCORE36PRESENTATIONOBSERVATIONSERVICECLIENT_H


#import <Foundation/Foundation.h>


@interface _TtC11SessionCore36PresentationObservationServiceClient : NSObject {
    ? delegate;
    ? connection;
    ? lock;
    ? _lock_bufferedPresentationUpdate;
    ? _lock_pendingAck;
    ? _lock_predicate;
}




-(id)init;


@end


#endif