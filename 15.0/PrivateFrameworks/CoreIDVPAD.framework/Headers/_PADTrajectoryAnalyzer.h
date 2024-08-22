// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    CGFloat _stitchCount;
}


@property (readonly, nonatomic) NSNumber *assessment;
@property (retain, nonatomic) NSMutableArray *assessmentsTA; // ivar: _assessmentsTA
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_storeTAAssessment:(BOOL)arg0 nccSignal:(CGFloat)arg1 frame:(id)arg2 ;
-(void)processFrame:(id)arg0 ;


@end


#endif