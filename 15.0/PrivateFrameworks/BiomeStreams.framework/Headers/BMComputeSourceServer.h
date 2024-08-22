// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMCOMPUTESOURCESERVER_H
#define BMCOMPUTESOURCESERVER_H

@class NSMapTable, NSString, NSXPCInterface, NSXPCListener;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, BMComputeSource;

#import <Foundation/Foundation.h>


@interface BMComputeSourceServer : NSObject <NSXPCListenerDelegate>



@property (readonly, nonatomic) NSMapTable *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCInterface *interface; // ivar: _interface
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, weak, nonatomic) NSObject<BMComputeSource> *source; // ivar: _source
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 source:(id)arg1 ;
-(id)initWithQueue:(id)arg0 source:(id)arg1 listener:(id)arg2 ;
-(void)activate;


@end


#endif