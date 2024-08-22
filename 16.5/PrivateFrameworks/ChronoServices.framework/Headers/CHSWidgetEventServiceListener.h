// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSWIDGETEVENTSERVICELISTENER_H
#define CHSWIDGETEVENTSERVICELISTENER_H

@class BSServiceConnectionListener, NSMutableArray, NSString;
@protocol BSServiceConnectionListenerDelegate, CHSWidgetEventServiceServerInterface, OS_dispatch_queue, CHSWidgetEventServiceListenerDelegate;

#import <Foundation/Foundation.h>


@interface CHSWidgetEventServiceListener : NSObject <BSServiceConnectionListenerDelegate, CHSWidgetEventServiceServerInterface>

 {
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CHSWidgetEventServiceListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isConnectingProcessAuthorized:(id)arg0 error:(*id)arg1 ;
-(id)initWithServiceDomain:(id)arg0 delegate:(id)arg1 ;
-(void)_addConnection:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)activate;
-(void)handleOpenEventWithURL:(id)arg0 ;
-(void)handleOpenEventWithUserActivityData:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif