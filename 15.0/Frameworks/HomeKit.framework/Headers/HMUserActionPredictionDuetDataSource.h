// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERACTIONPREDICTIONDUETDATASOURCE_H
#define HMUSERACTIONPREDICTIONDUETDATASOURCE_H

@class NSArray, NSString;
@protocol HMFLogging, HMUserActionSuggestionProvider, HMCache;

#import <Foundation/Foundation.h>

#import "HMCacheManager.h"

@interface HMUserActionPredictionDuetDataSource : NSObject <HMFLogging>

 {
    HMCacheManager *_cacheManager;
    id<HMUserActionSuggestionProvider> *_suggestionProvider;
    NSArray *_lastFetchedPredictions;
    id<HMCache> *_predictionCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *predictions;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)fetchPredictionsFromCache;
-(id)fetchPredictionsFromDuet;
-(id)initWithCacheManager:(id)arg0 ;
-(id)initWithCacheManager:(id)arg0 suggestionProvider:(id)arg1 ;


@end


#endif