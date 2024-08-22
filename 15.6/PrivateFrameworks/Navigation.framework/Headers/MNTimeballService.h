// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTIMEBALLSERVICE_H
#define MNTIMEBALLSERVICE_H

@class NSMapTable, NSLock, NSMutableDictionary, NSString;
@protocol MNTimeballServiceProxyDelegate, MNTimeballServiceProxyInterface;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"

@interface MNTimeballService : NSObject <MNTimeballServiceProxyDelegate>

 {
    id<MNTimeballServiceProxyInterface> *_proxy;
    NSMapTable *_handlerMap;
    NSLock *_subscribersLock;
    NSMutableDictionary *_subscribersPerDestination;
    MNObserverHashTable *_leechers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_addHandler:(id)arg0 ;
-(id)_handlerForID:(SEL)arg0 ;
-(id)initWithClientID:(id)arg0 ;
-(void)_removeHandlerWithID:(id)arg0 ;
-(void)addSubscriber:(id)arg0 forDestination:(id)arg1 options:(NSInteger)arg2 refreshPolicy:(NSUInteger)arg3 ;
-(void)completedUpdateForHandlerID:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveError:(id)arg0 forDestination:(id)arg1 ;
-(void)didReceiveUpdate:(id)arg0 forDestination:(id)arg1 ;
-(void)invokeHandlerWithID:(id)arg0 forDestination:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)removeSubscriber:(id)arg0 forDestination:(id)arg1 ;
-(void)removeSubscriberForAllDestinations:(id)arg0 ;
-(void)requestRoutingOptions:(NSInteger)arg0 forDestination:(id)arg1 freshness:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestRoutingOptions:(NSInteger)arg0 forDestinations:(id)arg1 freshness:(id)arg2 callbackBlock:(id)arg3 ;
-(void)startLeechingDestinationUpdates:(id)arg0 ;
-(void)stopLeechingDestinationUpdates:(id)arg0 ;


@end


#endif