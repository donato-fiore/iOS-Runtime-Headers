// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIXPCNAMESPACEMANAGEMENTSERVICELISTENER_H
#define TRIXPCNAMESPACEMANAGEMENTSERVICELISTENER_H

@class NSXPCInterface, NSString;
@protocol NSXPCListenerDelegate, TRITaskQueuing;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"
#import "TRIXPCServerContextPromise.h"

@interface TRIXPCNamespaceManagementServiceListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCInterface *_interface;
    TRIServerContext *_serverContext;
    id<TRITaskQueuing> *_taskQueue;
    TRIXPCServerContextPromise *_promise;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServerContextPromise:(id)arg0 ;


@end


#endif