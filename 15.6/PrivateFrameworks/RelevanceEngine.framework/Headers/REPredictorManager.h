// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REPREDICTORMANAGER_H
#define REPREDICTORMANAGER_H

@class NSArray, NSDictionary, NSString;
@protocol REPredictorObserver;

#import <Foundation/Foundation.h>

#import "REObserverStore.h"
#import "RERelevanceEngine.h"

@interface REPredictorManager : NSObject <REPredictorObserver>

 {
    NSArray *_predictors;
    NSDictionary *_predictorsMap;
    REObserverStore *_observer;
    RERelevanceEngine *_engine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPredictors:(id)arg0 featureSet:(id)arg1 relevanceEngine:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePredictors:(id)arg0 ;
-(void)enumerateValuesForElement:(id)arg0 trainingContext:(id)arg1 usingBlock:(id)arg2 ;
-(void)pause;
-(void)predictor:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)predictor:(id)arg0 didFinishActivity:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resume;


@end


#endif