// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSESSIONSERVERLISTENER_H
#define ATSESSIONSERVERLISTENER_H

@class NSXPCListener, NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, ATSessionServer;

#import <Foundation/Foundation.h>


@interface ATSessionServerListener : NSObject <NSXPCListenerDelegate, ATSessionServer>

 {
    NSXPCListener *_listener;
    NSMutableDictionary *_sessionProxiesBySessionID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedSessionServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_dumpDebugInformation;
-(void)addSession:(id)arg0 ;
-(void)cancelSessionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchActiveSessionCountForSessionTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchSessionsWithTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeSession:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif