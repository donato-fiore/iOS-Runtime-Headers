// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSDATABASEBLOCKINGFETCHSERVER_H
#define LSDATABASEBLOCKINGFETCHSERVER_H

@class NSXPCListener;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BOOL _running;
}




+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_init;
-(id)getEndpoint;
-(void)startRunningIfNecessary;


@end


#endif