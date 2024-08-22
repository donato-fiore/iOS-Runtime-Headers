// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEREMOTEDATASOURCEFETCHER_H
#define TSCEREMOTEDATASOURCEFETCHER_H

@class NSString, TSUNetworkReachability, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "TSCERemoteDataSpecifierSet.h"
#import "TSCERemoteDataCoordinator.h"

@interface TSCERemoteDataSourceFetcher : NSObject

@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *allRequestedKeys; // ivar: _allRequestedKeys
@property (readonly, weak, nonatomic) TSCERemoteDataCoordinator *coordinator; // ivar: _coordinator
@property (readonly, nonatomic) NSInteger dataKind;
@property BOOL doFullRefresh; // ivar: _doFullRefresh
@property BOOL earlyRefreshRequested; // ivar: _earlyRefreshRequested
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) TSUNetworkReachability *internetReachability; // ivar: _internetReachability
@property (retain, nonatomic) NSDate *lastFullRefreshDate; // ivar: _lastFullRefreshDate
@property (retain, nonatomic) NSDate *lastRequestDate; // ivar: _lastRequestDate
@property (readonly, nonatomic) CGFloat minimumTimeBetweenRequests;
@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *newlyRequestedKeys; // ivar: _newlyRequestedKeys
@property BOOL offline; // ivar: _offline
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *reachabilityCheckHost;
@property (readonly, nonatomic) CGFloat recommendedTimeBetweenRequests;
@property (readonly, nonatomic) CGFloat recommendedTimeBetweenRequestsForWWAN;
@property NSInteger requestsInFlight; // ivar: _requestsInFlight
@property (retain, nonatomic) TSUNetworkReachability *serverReachability; // ivar: _serverReachability
@property NSInteger state; // ivar: _state
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(id)fetcherWithCoordinator:(id)arg0 ;
-(BOOL)canFetchKey:(id)arg0 ;
-(id)addRemoteDataInterest:(id)arg0 ;
-(id)fetchableKeysFromSet:(id)arg0 ;
-(id)init;
-(id)initWithCoordinator:(id)arg0 ;
-(id)removeRemoteDataInterest:(id)arg0 ;
-(void)autoCompleteQuotesWithInput:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)enqueueRequestForKeys:(id)arg0 ;
-(void)fetchQuotesWithTickers:(id)arg0 completion:(id)arg1 ;
-(void)p_configureReachabilityWithHost:(id)arg0 ;
-(void)p_refreshSpecifiers;
-(void)requestCompleted;
-(void)requestLaunched;
-(void)resumeUpdating;
-(void)sendRequestForKeys:(id)arg0 ;
-(void)stopUpdating;


@end


#endif