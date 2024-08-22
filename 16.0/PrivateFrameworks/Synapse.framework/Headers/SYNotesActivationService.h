// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYNOTESACTIVATIONSERVICE_H
#define SYNOTESACTIVATIONSERVICE_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, SYNotesActivationServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SYNotesActivationService : NSObject <NSXPCListenerDelegate, SYNotesActivationServiceProtocol>



@property (retain, nonatomic, setter=_setListener:) NSXPCListener *_listener; // ivar: __listener
@property (retain, nonatomic, setter=_setServiceQueue:) NSObject<OS_dispatch_queue> *_serviceQueue; // ivar: __serviceQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)activateNotesWithContext:(id)arg0 completion:(id)arg1 ;
-(void)beginListeningToConnections;


@end


#endif