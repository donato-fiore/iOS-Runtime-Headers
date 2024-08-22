// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDEVENTDELIVERYOBSERVERSERVICELISTENER_H
#define BKHIDEVENTDELIVERYOBSERVERSERVICELISTENER_H

@class BSServiceConnectionListener, NSString;
@protocol BSServiceConnectionListenerDelegate;

#import <Foundation/Foundation.h>

#import "BKHIDEventDeliveryObserverService.h"

@interface BKHIDEventDeliveryObserverServiceListener : NSObject <BSServiceConnectionListenerDelegate>

 {
    BSServiceConnectionListener *_connectionListener;
    BKHIDEventDeliveryObserverService *_service;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif