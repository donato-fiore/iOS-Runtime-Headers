// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCLISTENER_H
#define CDMXPCLISTENER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface CDMXPCListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    id *_callback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)cleanup;
-(void)dealloc;
-(void)setupWithCallback:(id)arg0 ;


@end


#endif