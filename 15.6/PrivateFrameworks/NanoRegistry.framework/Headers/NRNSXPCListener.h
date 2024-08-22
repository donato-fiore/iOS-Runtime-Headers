// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRNSXPCLISTENER_H
#define NRNSXPCLISTENER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, NRNSXPCListenerProtocol, NRNSXPCListenerDelegate;



@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol>

 {
    id<NRNSXPCListenerDelegate> *_listenerDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<NRNSXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;


@end


#endif