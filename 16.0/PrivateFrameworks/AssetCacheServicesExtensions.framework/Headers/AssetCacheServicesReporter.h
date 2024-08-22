// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSETCACHESERVICESREPORTER_H
#define ASSETCACHESERVICESREPORTER_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_os_log, AssetCacheServicesReporterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AssetCacheServicesReporter : NSObject

@property (retain) NSMutableSet *allServerHostPorts; // ivar: _allServerHostPorts
@property (retain) NSObject<OS_os_log> *logHandle; // ivar: _logHandle
@property (retain) NSMutableDictionary *results; // ivar: _results
@property (weak) NSObject<AssetCacheServicesReporterDelegate> *weakDelegate; // ivar: _weakDelegate
@property (weak) NSObject<OS_dispatch_queue> *weakDelegateQueue; // ivar: _weakDelegateQueue


-(BOOL)doRanges:(id)arg0 containAddress:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(id)keyPath:(id)arg0 byAppendingKey:(id)arg1 ;
-(id)locateServersWithOptions:(id)arg0 ;
-(id)prettyRanges:(id)arg0 ;
-(id)serverSortInfoForHostPort:(id)arg0 rank:(id)arg1 ;
-(id)sortedHostPorts:(id)arg0 ;
-(id)sortedHostPorts:(id)arg0 usingSortInfo:(id)arg1 ;
-(void)didFinishWithResults:(id)arg0 ;
-(void)didGatherResults:(id)arg0 forKeyPath:(id)arg1 ;
-(void)reportCachedPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)arg0 ;
-(void)reportCachedServersWithKeyPath:(id)arg0 ;
-(void)reportFreshPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)arg0 ;
-(void)reportFreshServersWithKeyPath:(id)arg0 ;
-(void)reportMightHaveWithKeyPath:(id)arg0 ;
-(void)reportPublicIPAddress;
-(void)reportPublicIPAddressRangesWithKeyPath:(id)arg0 andFavoredServerRangesWithKeyPath:(id)arg1 generateOptions:(id)arg2 ;
-(void)reportReachability;
-(void)reportServersWithKeyPath:(id)arg0 generateOptions:(id)arg1 ;
-(void)start;
-(void)willStartGatheringResultsForKeyPath:(id)arg0 ;


@end


#endif