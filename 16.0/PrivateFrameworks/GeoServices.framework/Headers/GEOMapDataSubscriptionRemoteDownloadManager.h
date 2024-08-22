// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPDATASUBSCRIPTIONREMOTEDOWNLOADMANAGER_H
#define GEOMAPDATASUBSCRIPTIONREMOTEDOWNLOADMANAGER_H

@class geo_isolater, NSMapTable, NSString;
@protocol GEOMapDataSubscriptionDownloadManager, OS_dispatch_queue, OS_xpc_object, GEOMapDataSubscriptionDownloadManagerDelegate;

#import <Foundation/Foundation.h>


@interface GEOMapDataSubscriptionRemoteDownloadManager : NSObject <GEOMapDataSubscriptionDownloadManager>

 {
    int _geodLaunchedNotifyToken;
    GEOOnce_s _configuredConnection;
    NSObject<OS_dispatch_queue> *_incomingMessageQueue;
    NSObject<OS_xpc_object> *_connection;
    geo_isolater *_statesLock;
    NSMapTable *_states;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOMapDataSubscriptionDownloadManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(id)init;
-(void)_handleEvent:(id)arg0 ;
-(void)_receivedStateUpdate:(id)arg0 ;
-(void)_reconnectIfNecessary;
-(void)_startObservingStateForIdentifier:(id)arg0 ;
-(void)_stopObservingStateForIdentifier:(id)arg0 ;
-(void)cancelDownloadForSubscriptionIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)fetchStateForSubscriptionWithIdentifier:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)startDownloadForSubscriptionIdentifiers:(id)arg0 ;


@end


#endif