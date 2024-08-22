// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSNETWORKQUALITYINQUIRY_H
#define AMSNETWORKQUALITYINQUIRY_H

@class NSArray, NSMutableSet, NSMutableArray, NWNetworkOfInterestManager;
@protocol NWNetworkOfInterestManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSPromise.h"

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate>

 {
    NSArray *_lastKnownReports;
    NSInteger _lastReportRefreshTimestamp;
    AMSPromise *_currentInvestigation;
}


@property (readonly, nonatomic) NSMutableSet *knownNetworks; // ivar: _knownNetworks
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers; // ivar: _knownNetworksReadyHandlers
@property (readonly, nonatomic) NWNetworkOfInterestManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)isEntitled;
+(id)lastConnectionReport;
+(id)reportForTask:(id)arg0 fromReports:(id)arg1 ;
+(id)sharedInstance;
+(void)updateLastConnectionReportWithTask:(id)arg0 ;
-(BOOL)areKnownNetworksReady;
-(id)init;
-(id)investigateNetworks;
-(void)dealloc;
-(void)didStartTrackingNOI:(id)arg0 ;
-(void)didStopTrackingAllNOIs:(id)arg0 ;
-(void)didStopTrackingNOI:(id)arg0 ;
-(void)drainKnownNetworksReadyHandlers;
-(void)performWhenKnownNetworksReady:(id)arg0 ;


@end


#endif