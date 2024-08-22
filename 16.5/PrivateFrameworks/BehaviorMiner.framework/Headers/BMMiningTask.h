// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMININGTASK_H
#define BMMININGTASK_H

@class NSMutableDictionary, NSString, BMAprioriPatternMiner<BMPatternMiner>, NSDate, NSURL, NSSet;
@protocol BMMiningTaskDelegate;

#import <Foundation/Foundation.h>

#import "BMBasketExtractor.h"
#import "BMMiningTaskConfig.h"
#import "BMEventExtractor.h"
#import "BMRuleExtractor.h"

@interface BMMiningTask : NSObject

@property (readonly, nonatomic) NSUInteger absoluteSupport; // ivar: _absoluteSupport
@property (retain, nonatomic) BMBasketExtractor *basketExtractor; // ivar: _basketExtractor
@property (retain, nonatomic) BMMiningTaskConfig *bmMiningTaskConfig; // ivar: _bmMiningTaskConfig
@property (nonatomic) NSInteger completionStatus; // ivar: _completionStatus
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSMutableDictionary *coreAnalyticsDict; // ivar: _coreAnalyticsDict
@property (weak, nonatomic) NSObject<BMMiningTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) BMEventExtractor *eventExtractor; // ivar: _eventExtractor
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) NSUInteger maxItemsetSize; // ivar: _maxItemsetSize
@property (readonly, nonatomic) CGFloat miningInterval; // ivar: _miningInterval
@property (retain, nonatomic) BMAprioriPatternMiner<BMPatternMiner> *patternMiner; // ivar: _patternMiner
@property (retain, nonatomic) BMRuleExtractor *ruleExtractor; // ivar: _ruleExtractor
@property (readonly, nonatomic) NSUInteger rulePersistBatchSize; // ivar: _rulePersistBatchSize
@property (readonly, nonatomic) CGFloat samplingInterval; // ivar: _samplingInterval
@property (copy, nonatomic) NSDate *start; // ivar: _start
@property (readonly, copy, nonatomic) NSURL *storageURL; // ivar: _storageURL
@property (readonly, copy, nonatomic) NSSet *targetTypes; // ivar: _targetTypes
@property (readonly, copy, nonatomic) NSSet *types; // ivar: _types


+(BOOL)supportsTaskSpecificEvents;
+(id)supergreenMiningTask;
-(id)init;
-(id)initWithDomain:(id)arg0 types:(id)arg1 targetTypes:(id)arg2 samplingInterval:(CGFloat)arg3 absoluteSupport:(NSUInteger)arg4 confidence:(CGFloat)arg5 rulePersistBatchSize:(NSUInteger)arg6 miningInterval:(CGFloat)arg7 ;
-(id)initWithStorageURL:(id)arg0 types:(id)arg1 targetTypes:(id)arg2 samplingInterval:(CGFloat)arg3 absoluteSupport:(NSUInteger)arg4 confidence:(CGFloat)arg5 ;
-(id)initWithStorageURL:(id)arg0 types:(id)arg1 targetTypes:(id)arg2 samplingInterval:(CGFloat)arg3 absoluteSupport:(NSUInteger)arg4 confidence:(CGFloat)arg5 rulePersistBatchSize:(NSUInteger)arg6 ;
-(id)initWithStorageURL:(id)arg0 types:(id)arg1 targetTypes:(id)arg2 samplingInterval:(CGFloat)arg3 absoluteSupport:(NSUInteger)arg4 confidence:(CGFloat)arg5 rulePersistBatchSize:(NSUInteger)arg6 miningInterval:(CGFloat)arg7 ;
-(void)finishWithCompletionStatus:(NSInteger)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)mine;
-(void)terminateEarly;


@end


#endif