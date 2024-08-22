// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGNOSTICSTRANSPORT_H
#define DIAGNOSTICSTRANSPORT_H

@class NSXPCListener;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DiagnosticsServiceImpl.h"

@interface DiagnosticsTransport : NSObject {
    NSXPCListener *listener;
    DiagnosticsServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}




-(id)init;
-(void)setListeningPort:(char *)arg0 ;
-(void)shutdown;


@end


#endif