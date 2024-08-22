// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKADAPTIVESERVICE_H
#define AKADAPTIVESERVICE_H

@class NSXPCInterface, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCInterface *_exportedInterface;
    id *_exportedObject;
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_initWithInterface:(id)arg0 object:(id)arg1 ;
-(id)initWithInterface:(id)arg0 strongObject:(id)arg1 ;
-(id)initWithInterface:(id)arg0 weakObject:(id)arg1 ;
-(id)listenerEndpoint;
-(void)dealloc;
-(void)resume;


@end


#endif