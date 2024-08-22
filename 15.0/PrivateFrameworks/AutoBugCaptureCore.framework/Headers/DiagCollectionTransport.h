// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGCOLLECTIONTRANSPORT_H
#define DIAGCOLLECTIONTRANSPORT_H

@class NSXPCListener;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DiagCollectionServiceImpl.h"

@interface DiagCollectionTransport : NSObject {
    NSXPCListener *listener;
    DiagCollectionServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}




-(id)init;
-(void)dealloc;
-(void)setListeningPort:(char *)arg0 ;
-(void)shutdown;


@end


#endif