// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFI3BARSSOURCE_H
#define WIFI3BARSSOURCE_H

@class NSString, NSMutableDictionary, NSURL;
@protocol WiFiAvailabilitySource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TBDataSourceMediator.h"
#import "WiFi3BarsTileFetcher.h"

@interface WiFi3BarsSource : NSObject <WiFiAvailabilitySource>



@property (nonatomic) NSUInteger cacheExpirationInDays; // ivar: _cacheExpirationInDays
@property (copy, nonatomic) id *changeHandler; // ivar: changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *networks; // ivar: _networks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *relevancyHandler; // ivar: relevancyHandler
@property (retain, nonatomic) TBDataSourceMediator *sourceMediator; // ivar: _sourceMediator
@property (copy, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (readonly) Class superclass;
@property (retain, nonatomic) WiFi3BarsTileFetcher *tileFetcher; // ivar: _tileFetcher


-(id)_descriptorForType:(NSUInteger)arg0 ;
-(id)_matchSearchBSSIDs:(id)arg0 toResponse:(id)arg1 ;
// -(id)initWithChangeHandler:(id)arg0 localStoreType:(unk)arg1  ;
-(id)relevantNetworks;
-(void)_handleRemoteFetchResponse:(id)arg0 ;
-(void)fetch3BarsNetworksFor:(id)arg0 ;
-(void)fetch3BarsNetworksForLocation:(id)arg0 forceRemote:(BOOL)arg1 trigger:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetch3BarsNetworksPredictedForLocation:(id)arg0 duration:(CGFloat)arg1 maxLocations:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchCandidateNetworksMatchingBSSIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceFetch3BarsNetworkMatchingBSSID:(id)arg0 completionHandler:(id)arg1 ;
-(void)prune3BarsNetworks:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)submitCacheAnalyticsEvent;


@end


#endif