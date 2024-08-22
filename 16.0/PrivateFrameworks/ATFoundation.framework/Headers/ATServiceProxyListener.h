// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATSERVICEPROXYLISTENER_H
#define ATSERVICEPROXYLISTENER_H

@class NSXPCListener, NSString, ATService;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATServiceProxyListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ATService *service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithService:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif