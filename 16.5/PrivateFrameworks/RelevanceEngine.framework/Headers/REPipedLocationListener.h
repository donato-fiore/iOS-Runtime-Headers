// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REPIPEDLOCATIONLISTENER_H
#define REPIPEDLOCATIONLISTENER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate;


#import "RESingleton.h"

@interface REPipedLocationListener : RESingleton <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_init;
-(void)dealloc;


@end


#endif