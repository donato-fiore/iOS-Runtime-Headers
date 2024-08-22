// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPPREDICTORPREDICTIONCHUNKS_H
#define ATXAPPPREDICTORPREDICTIONCHUNKS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *feedbackStateChunk; // ivar: _feedbackStateChunk
@property (retain, nonatomic) NSData *predictionSetChunk; // ivar: _predictionSetChunk


-(id)chunkArray;
-(id)init;
-(id)initWithPredictionSetChunk:(id)arg0 feedbackStateChunk:(id)arg1 ;
-(id)joinChunks;


@end


#endif