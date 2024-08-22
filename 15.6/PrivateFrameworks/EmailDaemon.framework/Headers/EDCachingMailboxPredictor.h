// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDCACHINGMAILBOXPREDICTOR_H
#define EDCACHINGMAILBOXPREDICTOR_H

@class NSCache, NSMutableDictionary, NSString;
@protocol EDMailboxPredictor;

#import <Foundation/Foundation.h>


@interface EDCachingMailboxPredictor : NSObject <EDMailboxPredictor>



@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSMutableDictionary *cacheKeysByProperty; // ivar: _cacheKeysByProperty
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<EDMailboxPredictor> *predictor; // ivar: _predictor
@property (readonly) Class superclass;


-(id)_cacheKeyForMessages:(id)arg0 ;
-(id)_propertyKeysForMessage:(id)arg0 ;
-(id)initWithPredictor:(id)arg0 ;
-(id)predictMailboxIDsForMessages:(id)arg0 limit:(NSUInteger)arg1 diagnostics:(*id)arg2 ;
-(void)_trackCacheKey:(id)arg0 forPropertyKey:(id)arg1 ;
-(void)invalidatePredictionsAffectedByMessage:(id)arg0 ;
-(void)removeAllPredictions;


@end


#endif