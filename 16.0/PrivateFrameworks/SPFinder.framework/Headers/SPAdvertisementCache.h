// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPADVERTISEMENTCACHE_H
#define SPADVERTISEMENTCACHE_H

@class NSString, FMXPCServiceDescription, FMXPCSession;
@protocol SPAdvertisementCaching, SPBeaconPayloadCaching, SPAdvertisementCacheXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPAdvertisementCache : NSObject <SPAdvertisementCaching, SPBeaconPayloadCaching>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SPAdvertisementCacheXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)init;
-(id)remoteInterface;
-(void)advertisementsForSearchCriteria:(id)arg0 completion:(id)arg1 ;
-(void)beaconAdvertisementAtFileURL:(id)arg0 beaconIdentifier:(id)arg1 scanDate:(id)arg2 completion:(id)arg3 ;
-(void)beaconPayloadsForSearchCriteria:(id)arg0 completion:(id)arg1 ;
-(void)clearCacheWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)markAdvertisementsProcessed:(id)arg0 completion:(id)arg1 ;
-(void)markBeaconPayloadsProcessed:(id)arg0 completion:(id)arg1 ;
-(void)markRecordsProcessed:(id)arg0 completion:(id)arg1 ;
-(void)mockingEnabled:(BOOL)arg0 ;
-(void)saveAdvertisements:(id)arg0 completion:(id)arg1 ;
-(void)saveBeaconPayloads:(id)arg0 completion:(id)arg1 ;


@end


#endif