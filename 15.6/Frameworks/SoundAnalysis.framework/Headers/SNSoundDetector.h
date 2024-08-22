// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


+(id)detectorConfigurationWithAudioBasedFeatureExtractor:(id)arg0 detectorHead:(id)arg1 detectorIdentifier:(id)arg2 ;
+(id)detectorConfigurationWithLogMelBasedFeatureExtractor:(id)arg0 detectorHead:(id)arg1 detectorIdentifier:(id)arg2 soundIdentifier:(id)arg3 ;
+(id)detectorHeadConfigurationForDetectorIdentifier:(id)arg0 soundIdentifier:(id)arg1 modelConfiguration:(id)arg2 ;
+(id)detectorHeadConfigurationForDetectorVariant:(id)arg0 soundIdentifier:(id)arg1 modelConfiguration:(id)arg2 ;
-(id)initWithDetectorVariant:(id)arg0 soundIdentifier:(id)arg1 modelConfiguration:(id)arg2 ;


@end


#endif