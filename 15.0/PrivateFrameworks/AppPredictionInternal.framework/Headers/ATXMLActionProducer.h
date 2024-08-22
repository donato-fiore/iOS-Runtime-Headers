// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMLACTIONPRODUCER_H
#define ATXMLACTIONPRODUCER_H

@class NSString;
@protocol ATXActionProducer, ATXActionProducerDelegate;

#import <Foundation/Foundation.h>


@interface ATXMLActionProducer : NSObject <ATXActionProducer>

 {
    NSString *_cacheBasePath;
    NSString *_cacheFilename;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXActionProducerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)consumerSubTypesToUpdate;
+(id)predictionChunksForActionResults:(id)arg0 ;
-(BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)arg0 actionPredictionCandidates:(id)arg1 remainingPredictionItems:(*void)arg2 ;
-(BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)arg0 ;
-(id)_cachePathForConsumerSubtype:(unsigned char)arg0 ;
-(id)_getActionsFromCacheForConsumerSubType:(unsigned char)arg0 cacheFileData:(id)arg1 ;
-(id)consumerSubTypesToInvalidateForTTL:(CGFloat)arg0 disabledConsumerSubTypes:(id)arg1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)arg2 ;
-(id)init;
-(id)lockscreenActionsFromPredictions:(id)arg0 ;
-(id)produceActions;
-(void)invalidateCacheForConsumerSubType:(unsigned char)arg0 actionPredictionCandidates:(id)arg1 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> )arg2 ;
-(void)invalidateCacheForConsumerSubTypes:(id)arg0 featureCache:(id)arg1 ;
-(void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)arg0 ;
-(void)updateBlendingLayerForAllConsumerSubTypes;
-(void)updateBlendingLayerForConsumerSubType:(unsigned char)arg0 ;
-(void)updateBlendingLayerForHomeScreen;
-(void)updateBlendingLayerForLockscreen;
-(void)updateBlendingLayerForSpotlight;


@end


#endif