// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPCLISTENER_H
#define ATXPCLISTENER_H

@class NSXPCListener, NSMutableArray, NSMapTable, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATXPCListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_xpcListener;
    NSMutableArray *_connections;
    NSMapTable *_proxyMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)run;
-(id)connections;
-(id)init;
-(id)proxyForConnection:(id)arg0 ;
-(void)dealloc;
-(void)stop;


@end


#endif