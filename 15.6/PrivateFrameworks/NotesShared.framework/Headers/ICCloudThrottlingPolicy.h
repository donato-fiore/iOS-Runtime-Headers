// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLOUDTHROTTLINGPOLICY_H
#define ICCLOUDTHROTTLINGPOLICY_H

@class NSTimer, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "ICCloudThrottlingLevel.h"

@interface ICCloudThrottlingPolicy : NSObject

@property (readonly, nonatomic) CGFloat batchInterval;
@property (nonatomic) NSUInteger currentBatchCount; // ivar: _currentBatchCount
@property (readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property (nonatomic) NSUInteger currentLevelIndex; // ivar: _currentLevelIndex
@property (retain) NSTimer *policyResetTimer; // ivar: _policyResetTimer
@property (retain) NSDate *policyStartDate; // ivar: _policyStartDate
@property CGFloat resetInterval; // ivar: _resetInterval
@property (retain, nonatomic) NSArray *throttlingLevels; // ivar: _throttlingLevels


+(void)resetSavedPolicyState;
-(id)init;
-(id)initWithThrottlingLevels:(id)arg0 resetInterval:(CGFloat)arg1 ;
-(void)changeLevelIfNecessary;
-(void)dealloc;
-(void)incrementBatchCount;
-(void)loadSavedPolicyState;
-(void)resetPolicy;
-(void)savePolicyState;
-(void)startPolicyResetTimer;


@end


#endif