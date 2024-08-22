// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSOUNDDETECTOR_H
#define SNSOUNDDETECTOR_H

@class NSString;
@protocol SNAnalyzing;


#import "SNDetectorHead.h"

@interface SNSoundDetector : SNDetectorHead <SNAnalyzing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *Box resultsBox;
@property (readonly) Class superclass;




@end


#endif