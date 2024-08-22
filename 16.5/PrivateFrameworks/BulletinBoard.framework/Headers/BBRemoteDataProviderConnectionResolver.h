// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBREMOTEDATAPROVIDERCONNECTIONRESOLVER_H
#define BBREMOTEDATAPROVIDERCONNECTIONRESOLVER_H

@class NSXPCListener, NSMutableDictionary, BKSApplicationStateMonitor, NSString;
@protocol BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore, OS_dispatch_queue, BBDataProviderStoreDelegate;

#import <Foundation/Foundation.h>


@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore>

 {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_registerQueue;
    NSMutableDictionary *_dataProviderConnectionsByService;
    NSMutableDictionary *_dataProviderConnectionsBySectionID;
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;
    NSMutableDictionary *_xpcConnectionsByService;
    id<BBDataProviderStoreDelegate> *_delegate;
    int _listeningToken;
    BKSApplicationStateMonitor *_appStateMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)resolverWithDelegate:(id)arg0 ;
+(id)xpcInterface;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)dataProviderForSectionID:(id)arg0 ;
-(id)dataProvidersForUniversalSectionID:(id)arg0 ;
-(id)debugDescriptionWithChildren:(NSUInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_registerForPublicationNotification;
-(void)_registerServiceName:(id)arg0 appBundleID:(id)arg1 completion:(id)arg2 ;
-(void)dataProviderStore:(id)arg0 didAddDataProvider:(id)arg1 performMigration:(BOOL)arg2 completion:(id)arg3 ;
-(void)dataProviderStore:(id)arg0 didAddParentSectionFactory:(id)arg1 ;
-(void)dataProviderStore:(id)arg0 didRemoveDataProvider:(id)arg1 ;
-(void)dealloc;
-(void)loadAllDataProviders;
-(void)performBlockOnDataProviders:(id)arg0 ;
-(void)registerServiceName:(id)arg0 appBundleID:(id)arg1 completion:(id)arg2 ;
-(void)remoteDataProviderNeedsToWakeClient:(id)arg0 ;
-(void)removeDataProvider:(id)arg0 ;
-(void)wakeService:(id)arg0 bundleID:(id)arg1 ;


@end


#endif