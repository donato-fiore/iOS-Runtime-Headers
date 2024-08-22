// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYBACKPERFORMANCECONTROLLER_H
#define MPCPLAYBACKPERFORMANCECONTROLLER_H

@class NSMutableDictionary, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface MPCPlaybackPerformanceController : NSObject {
    NSMutableDictionary *_trialExperiments;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *deploymentID;
@property (readonly, copy, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSDate *lastCDNWarming; // ivar: _lastCDNWarming
@property (readonly, copy, nonatomic) NSString *treatmentID;


+(id)sharedController;
-(id)init;
-(id)sortedExperiments;
-(id)trialExperimentWithNamespaceName:(id)arg0 ;
-(void)loadAVAssetWithURL:(id)arg0 ;
-(void)markCDNConnectionWarmed;
-(void)warmCDNConnection;


@end


#endif