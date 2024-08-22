// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCONTROLLISTENER_H
#define ARCONTROLLISTENER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, ARControlListenerDelegate;

#import <Foundation/Foundation.h>


@interface ARControlListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARControlListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif