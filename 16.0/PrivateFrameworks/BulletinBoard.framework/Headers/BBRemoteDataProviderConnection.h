// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBREMOTEDATAPROVIDERCONNECTION_H
#define BBREMOTEDATAPROVIDERCONNECTION_H

@class NSMutableDictionary, NSString;
@protocol BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore, BBRemoteDataProviderStoreDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore>

 {
    BOOL _connected;
    id<BBRemoteDataProviderStoreDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    BOOL _clientReady;
}


@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConnected;
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(id)dataProviderForSectionID:(id)arg0 ;
-(id)dataProvidersForUniversalSectionID:(id)arg0 ;
-(id)debugDescriptionWithChildren:(NSUInteger)arg0 ;
-(id)initWithServiceName:(id)arg0 bundleID:(id)arg1 delegate:(id)arg2 ;
-(void)_queue_removeDataProvider:(id)arg0 ;
-(void)addDataProviderWithSectionID:(id)arg0 clientProxy:(id)arg1 identity:(id)arg2 completion:(id)arg3 ;
-(void)addParentSectionFactory:(id)arg0 ;
-(void)clientIsReady:(id)arg0 ;
-(void)loadAllDataProviders;
-(void)performBlockOnDataProviders:(id)arg0 ;
-(void)remoteDataProviderNeedsToWakeClient:(id)arg0 ;
-(void)removeDataProvider:(id)arg0 ;
-(void)removeDataProviderWithSectionID:(id)arg0 ;
-(void)setConnected:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif