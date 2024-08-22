// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTDAEMON_H
#define _LTDAEMON_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, _LTClientConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_LTTranslationServer.h"

@interface _LTDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate>

 {
    NSXPCListener *_translationListener;
    NSXPCListener *_textTranslationListener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSMutableArray *_connections;
    _LTTranslationServer *_server;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_cacheDirectoryPath;
-(id)init;
-(void)_enterSandbox;
-(void)_setupMemoryWarningListener;
-(void)clientConnectionClosed:(id)arg0 ;
-(void)run;


@end


#endif