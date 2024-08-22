// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PADTRAJECTORYANALYZER_H
#define _PADTRAJECTORYANALYZER_H

@class NSNumber, NSMutableArray, NSString;
@protocol PADTrajectoryAnalyzer, PADAlgorithms, PADAuditDataRepository;

#import <Foundation/Foundation.h>


@interface _PADTrajectoryAnalyzer : NSObject <PADTrajectoryAnalyzer>

 {
    id<PADAlgorithms> *_algorithms;
    id<PADAuditDataRepository> *_audit;
    NSUInteger _framesAnalyzed;
    NSUInteger _ignoredStitches;
    NSUInteger _stitchCount;
    CGFloat _maxNccLow;
    CGFloat _maxNccHigh;
    BOOL _isProcessingFrame;
    id *_currentFrameProcessingCompletion;
}


@property (readonly, nonatomic) NSNumber *assessment;
@property (retain, nonatomic) NSMutableArray *assessmentsTA; // ivar: _assessmentsTA
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *ignoredStitches;
@property (readonly, nonatomic) NSNumber *maxNccHigh;
@property (readonly, nonatomic) NSNumber *maxNccLow;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger taOptions; // ivar: _taOptions


-(id)init:(id)arg0 ;
-(void)_storeTAAssessment:(BOOL)arg0 nccSignal:(CGFloat)arg1 frame:(id)arg2 ;
-(void)processFrame:(id)arg0 ;
-(void)waitForCurrentFrameProcessingWithCompletion:(id)arg0 ;


@end


#endif