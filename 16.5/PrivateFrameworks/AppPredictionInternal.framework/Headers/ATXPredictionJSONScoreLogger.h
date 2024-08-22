// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPREDICTIONJSONSCORELOGGER_H
#define ATXPREDICTIONJSONSCORELOGGER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol ATXPredictionScoreLogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXPredictionJSONScoreLogger : NSObject <ATXPredictionScoreLogger>

 {
    NSMutableDictionary *_history;
    unsigned char _consumerSubType;
    NSMutableArray *_subscoreHistories;
    NSObject<OS_dispatch_queue> *_fastQueue;
    NSObject<OS_dispatch_queue> *_slowQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)flush;
-(void)flushWithCompletion:(id)arg0 ;
// -(void)flushWithCompletion:(id)arg0 filenameSuffix:(unk)arg1  ;
-(void)flushWithFilenameSuffix:(id)arg0 ;
-(void)logInputDict:(id)arg0 subscores:(id)arg1 forBundleId:(id)arg2 ;
-(void)logInputs:(id)arg0 subscores:(id)arg1 forBundleId:(id)arg2 ;
-(void)logStageScores:(id)arg0 forStageType:(NSInteger)arg1 ;
-(void)setAssetVersion:(NSUInteger)arg0 ;
-(void)setCacheAge:(CGFloat)arg0 ;
-(void)setConsumerSubType:(unsigned char)arg0 ;
-(void)setPredictionClass:(id)arg0 ;


@end


#endif