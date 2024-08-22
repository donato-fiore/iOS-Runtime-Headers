// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUISTATUSBARSTYLESERVICE_H
#define CRSUISTATUSBARSTYLESERVICE_H

@class NSMutableArray, NSHashTable, NSString, BSServiceConnectionListener;
@protocol BSServiceConnectionListenerDelegate, CRSUIStatusBarStyleClientToServerInterface, BSInvalidatable, OS_dispatch_queue, CRSUIStatusBarStyleServiceDelegate;

#import <Foundation/Foundation.h>


@interface CRSUIStatusBarStyleService : NSObject <BSServiceConnectionListenerDelegate, CRSUIStatusBarStyleClientToServerInterface, BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_lock_assertions;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (retain, nonatomic) NSHashTable *connections; // ivar: _connections
@property (readonly, nonatomic) NSInteger contrast;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRSUIStatusBarStyleServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger interfaceStyle;
@property (retain, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly, nonatomic, getter=isSiriPresentation) BOOL siriPresentation;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_connectionQueue_addConnection:(id)arg0 ;
-(void)_connectionQueue_removeConnection:(id)arg0 ;
-(void)clientAcquireForSiriPresentationWithFenceHandle:(id)arg0 animationSettings:(id)arg1 ;
-(void)clientAcquireWithInterfaceStyle:(id)arg0 contrast:(id)arg1 fenceHandle:(id)arg2 animationSettings:(id)arg3 ;
-(void)clientReliquishWithFenceHandle:(id)arg0 animationSettings:(id)arg1 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif