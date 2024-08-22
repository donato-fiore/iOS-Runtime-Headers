// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXINSPECTIONSERVERPREDICTIONSCORELOGGER_H
#define _ATXINSPECTIONSERVERPREDICTIONSCORELOGGER_H

@class NSMutableDictionary, NSString;
@protocol ATXPredictionScoreLogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ATXInspectionServerPredictionScoreLogger : NSObject <ATXPredictionScoreLogger>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_inputsAndSubscores;
    NSMutableDictionary *_stageScores;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)inputsAndSubscores;
-(id)stageScores;
-(void)logInputDict:(id)arg0 subscores:(id)arg1 forBundleId:(id)arg2 ;
-(void)logInputs:(id)arg0 subscores:(id)arg1 forBundleId:(id)arg2 ;
-(void)logStageScores:(id)arg0 forStageType:(NSInteger)arg1 ;
-(void)setAssetVersion:(NSUInteger)arg0 ;
-(void)setCacheAge:(CGFloat)arg0 ;
-(void)setConsumerSubType:(unsigned char)arg0 ;
-(void)setPredictionClass:(id)arg0 ;


@end


#endif