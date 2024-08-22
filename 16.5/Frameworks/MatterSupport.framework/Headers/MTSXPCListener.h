// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSXPCLISTENER_H
#define MTSXPCLISTENER_H

@class HMFObject, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, MTSXPCListener, MTSXPCListenerDelegate;



@interface MTSXPCListener : HMFObject <NSXPCListenerDelegate, MTSXPCListener>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<MTSXPCListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithXPCListener:(id)arg0 ;
-(void)start;


@end


#endif