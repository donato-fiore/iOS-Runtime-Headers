// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSDAEMON_H
#define PDSDAEMON_H

@class NSString;
@protocol PDSDaemonListenerVendor, PDSCDCache><PDSKVStore;

#import <Foundation/Foundation.h>

#import "PDSXPCServer.h"
#import "PDSBag.h"
#import "PDSCDCacheContainer.h"
#import "PDSConfiguration.h"
#import "PDSCoordinator.h"
#import "PDSEntryStore.h"
#import "PDSRequestQueue.h"
#import "PDSUserTracker.h"

@interface PDSDaemon : NSObject <PDSDaemonListenerVendor>



@property (retain, nonatomic) PDSXPCServer *XPCServer; // ivar: _XPCServer
@property (retain, nonatomic) PDSBag *bag; // ivar: _bag
@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer; // ivar: _cacheContainer
@property (retain, nonatomic) PDSConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) PDSCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PDSEntryStore *entryStore; // ivar: _entryStore
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PDSRequestQueue *requestQueue; // ivar: _requestQueue
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PDSCDCache><PDSKVStore> *underlyingStorage; // ivar: _underlyingStorage
@property (retain, nonatomic) PDSUserTracker *userTracker; // ivar: _userTracker


-(id)initWithConfiguration:(id)arg0 ;
-(id)remoteInternalListener;
-(id)remoteListenerForAllClientIDs;
-(id)remoteListenerForClientIDs:(id)arg0 ;
-(void)start;


@end


#endif