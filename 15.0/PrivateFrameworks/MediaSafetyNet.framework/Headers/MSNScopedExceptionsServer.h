// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSNSCOPEDEXCEPTIONSSERVER_H
#define MSNSCOPEDEXCEPTIONSSERVER_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, MSNScopedExceptionsProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSNScopedExceptionsServer : NSObject <NSXPCListenerDelegate, MSNScopedExceptionsProtocol>

 {
    NSXPCListener *_listener;
    NSMutableArray *_activeExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProxy;
+(id)validEntitlements;
+(id)validExceptions;
-(BOOL)isConnectionAllowedToAssertException:(id)arg0 ;
-(BOOL)isExceptionInEffect:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)beginException:(id)arg0 ;
-(void)endException:(id)arg0 ;


@end


#endif