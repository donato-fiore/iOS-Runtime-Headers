// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSCHRONOEVENTSERVICELISTENER_H
#define CHSCHRONOEVENTSERVICELISTENER_H

@class BSServiceConnectionListener, NSMutableArray, NSString;
@protocol BSServiceConnectionListenerDelegate, CHSChronoEventServiceServerInterface, OS_dispatch_queue, CHSChronoEventServiceListenerDelegate;

#import <Foundation/Foundation.h>


@interface CHSChronoEventServiceListener : NSObject <BSServiceConnectionListenerDelegate, CHSChronoEventServiceServerInterface>

 {
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CHSChronoEventServiceListenerDelegate> *delegate; // ivar: _delegate
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