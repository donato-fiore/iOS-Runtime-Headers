// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDISPLAYCACHE_H
#define ATXDISPLAYCACHE_H

@class NSArray, NSString, ATXActionCriteriaWorldState;
@protocol ATXActionProducerDelegate;

#import <Foundation/Foundation.h>


@interface ATXDisplayCache : NSObject <ATXActionProducerDelegate>

 {
    NSArray *_producers;
}


@property (readonly, nonatomic) NSString *cacheBasePath; // ivar: _cacheBasePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ATXActionCriteriaWorldState *worldState; // ivar: _worldState


+(id)firstUpdateDateForActions:(id)arg0 ;
+(id)sharedDisplayCache;
-(id)_criteriaForJobOnDate:(id)arg0 ;
-(id)actions;
-(id)atxMLActionProducer;
-(id)filteredActionsFromActions:(id)arg0 ;
-(id)initWithProducers:(id)arg0 cacheBasePath:(id)arg1 ;
-(id)unFilteredActions;
-(void)_logCacheUpdateWithSpotlightDiff:(CGFloat)arg0 spotlightSetDiff:(CGFloat)arg1 lockscreenDiff:(CGFloat)arg2 lockscreenSetDiff:(CGFloat)arg3 ;
-(void)actionProducerProducedNewActions:(id)arg0 ;
-(void)logDisplayCacheActionResults:(id)arg0 lockscreenPredictionIndices:(id)arg1 ;
-(void)setUpdateJobForCriteria:(id)arg0 ;
-(void)setUpdateJobForDate:(id)arg0 ;
-(void)updateLockscreenIfNeededOldAction:(id)arg0 newAction:(id)arg1 actionResponse:(id)arg2 ;
-(void)updateOnDiskCache;
-(void)writeToDisk;
-(void)writeToDiskActions:(id)arg0 ;


@end


#endif