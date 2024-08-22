// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTKEYWORDDETECTOR_H
#define VTKEYWORDDETECTOR_H

@class NSMutableArray;
@protocol VTKeywordDetectorDelegate;

#import <Foundation/Foundation.h>

#import "VTKeywordDetectorAssets.h"
#import "VTKeywordDetectorContext.h"

@interface VTKeywordDetector : NSObject

@property (retain, nonatomic) NSMutableArray *analyzers; // ivar: _analyzers
@property (retain, nonatomic) VTKeywordDetectorAssets *asset; // ivar: _asset
@property (retain, nonatomic) VTKeywordDetectorContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<VTKeywordDetectorDelegate> *delegate; // ivar: _delegate


-(float)_getScoreForPhraseId:(NSUInteger)arg0 withScaleFactor:(float)arg1 fromResults:(id)arg2 ;
-(id)_analyzeAndConstructFinalResults:(id)arg0 ;
-(id)_fetchResults;
-(id)getKeywordDetectorDetailedResults;
-(id)getKeywordDetectorResults;
-(id)initWithContext:(id)arg0 withDelegate:(id)arg1 error:(*id)arg2 ;
-(void)endAudio;
-(void)processAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)resetWithSamplingRate:(NSInteger)arg0 withAudioSource:(id)arg1 ;
-(void)setStartSampleCount:(NSUInteger)arg0 ;


@end


#endif