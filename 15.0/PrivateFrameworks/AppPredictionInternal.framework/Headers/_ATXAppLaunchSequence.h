// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXAPPLAUNCHSEQUENCE_H
#define _ATXAPPLAUNCHSEQUENCE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"

@interface _ATXAppLaunchSequence : NSObject {
    _ATXDataStore *_datastore;
    NSString *_previousLaunch;
    NSMutableDictionary *_subsequentLaunchCountMap;
    int _launchType;
    _opaque_pthread_rwlock_t _rwlock;
}


@property (readonly, nonatomic) BOOL previousAppDeleted; // ivar: _previousAppDeleted
@property (readonly, nonatomic) CGFloat subsequentLaunchTotalCount; // ivar: _subsequentLaunchTotalCount


-(CGFloat)launchCount:(id)arg0 ;
-(CGFloat)likelihoodForLaunch:(id)arg0 ;
-(id)initWithPreviousAppActionLaunch:(id)arg0 dataStore:(id)arg1 ;
-(id)initWithPreviousAppActionLaunch:(id)arg0 dataStore:(id)arg1 allowSimulatedCrashes:(BOOL)arg2 ;
-(id)initWithPreviousAppActionLaunch:(id)arg0 subsequentAppActionLaunchCounts:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(BOOL)arg3 ;
-(id)initWithPreviousLaunch:(id)arg0 dataStore:(id)arg1 ;
-(id)initWithPreviousLaunch:(id)arg0 dataStore:(id)arg1 allowSimulatedCrashes:(BOOL)arg2 ;
-(id)initWithPreviousLaunch:(id)arg0 subsequentLaunchCounts:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(BOOL)arg3 launchType:(int)arg4 ;
-(void)_deleteDataForLaunchLocked:(id)arg0 ;
-(void)addSubsequentLaunch:(id)arg0 ;
-(void)dealloc;
-(void)decayByFactor:(CGFloat)arg0 ;
-(void)decayWithHalfLifeInDays:(CGFloat)arg0 ;
-(void)deleteAllInformation;
-(void)deleteDataForLaunch:(id)arg0 ;
-(void)deleteDataForLaunches:(id)arg0 ;
-(void)save;


@end


#endif