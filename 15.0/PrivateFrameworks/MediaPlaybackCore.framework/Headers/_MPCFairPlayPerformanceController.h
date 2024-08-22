// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCFAIRPLAYPERFORMANCECONTROLLER_H
#define _MPCFAIRPLAYPERFORMANCECONTROLLER_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol MPCPlaybackEngineEventObserving, MPServerObjectDatabaseObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface _MPCFairPlayPerformanceController : NSObject <MPCPlaybackEngineEventObserving, MPServerObjectDatabaseObserver>

 {
    NSMutableSet *_SAPSignPrewarmingAccounts;
    NSMutableSet *_SAPSignPrewarmedAccounts;
    NSObject<OS_dispatch_queue> *_miniQueue;
    NSMutableSet *_miniSINFEndpointLoadingAccounts;
    NSMutableDictionary *_miniSINFAccounts;
    BOOL _scheduledMiniSINFs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly) Class superclass;


-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_fetchMiniSINFsWithCompletion:(id)arg0 ;
-(void)_optimisticallyFetchLeaseForAccount:(id)arg0 ;
-(void)_prewarmMiniSINFEndpointForAccount:(id)arg0 ;
-(void)_prewarmSAPSigningForAccount:(id)arg0 ;
-(void)database:(id)arg0 didFinishImportRequest:(id)arg1 ;
-(void)dealloc;
-(void)engine:(id)arg0 didChangeAccounts:(id)arg1 ;
-(void)scheduleMiniSINFFetch;


@end


#endif