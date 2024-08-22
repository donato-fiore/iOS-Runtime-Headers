// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNBANNERHOSTMONITORLISTENER_H
#define BNBANNERHOSTMONITORLISTENER_H

@class NSSet, BSServiceConnectionListener, NSMutableArray, NSHashTable, NSString;
@protocol BSServiceConnectionListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BNBannerHostMonitorListener : NSObject <BSServiceConnectionListenerDelegate>

 {
    NSSet *_authorizedBundleIDs;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    NSHashTable *_observers;
}


@property (readonly, nonatomic, getter=isBannerHostAvailable) BOOL bannerHostAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_isConnectingProcessAuthorized:(id)arg0 error:(*id)arg1 ;
-(id)initWithServiceDomain:(id)arg0 authorizedBundleIDs:(id)arg1 ;
-(void)_addConnection:(id)arg0 ;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif