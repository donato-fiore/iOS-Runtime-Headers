// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNAUDIOLEVELMEASURER_H
#define SNAUDIOLEVELMEASURER_H

@class NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>


@interface SNAudioLevelMeasurer : NSObject <SNAnalyzing>

 {
    shared_ptr<DSPGraph::Graph> _graph;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float inputSensitivity; // ivar: _inputSensitivity
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithInputSensitivity:(float)arg0 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;


@end


#endif