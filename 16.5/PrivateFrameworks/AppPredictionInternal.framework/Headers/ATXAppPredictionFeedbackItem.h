// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPPREDICTIONFEEDBACKITEM_H
#define ATXAPPPREDICTIONFEEDBACKITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXAppPredictionFeedbackItem : NSObject {
    float _scoreInputs;
}


@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) *float scoreInputs;
@property (readonly, nonatomic) float totalScore; // ivar: _totalScore


+(?)predictionItemsForFeedbackChunk;
+(?)predictionItemsInFeedbackChunkFromCacheChunks;
+(?)predictionItemsInFeedbackChunkFromCacheFileData;
+(id)feedbackItemsForCacheFileData:(id)arg0 ;
+(id)feedbackItemsForChunks:(id)arg0 ;
+(id)feedbackItemsForFeedbackChunk:(id)arg0 ;
+(id)feedbackItemsForResponse:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleId:(id)arg0 totalScore:(float)arg1 scoreInputs:(*float)arg2 ;


@end


#endif