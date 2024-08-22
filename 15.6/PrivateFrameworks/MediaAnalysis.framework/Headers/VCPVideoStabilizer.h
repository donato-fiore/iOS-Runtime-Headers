// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOSTABILIZER_H
#define VCPVIDEOSTABILIZER_H

@class NSMutableArray, NSDictionary;


#import "VCPVideoAnalyzer.h"

@interface VCPVideoStabilizer : VCPVideoAnalyzer

@property (nonatomic) float analysisConfidence; // ivar: _analysisConfidence
@property (nonatomic) *void analysisResultRef; // ivar: _analysisResultRef
@property (nonatomic) *void correctionResultRef; // ivar: _correctionResultRef
@property (nonatomic) float cropFraction; // ivar: _cropFraction
@property (nonatomic) BOOL gyroStabilization; // ivar: _gyroStabilization
@property (retain, nonatomic) NSMutableArray *motionBlurVector; // ivar: _motionBlurVector
@property (retain, nonatomic) NSDictionary *results; // ivar: _results
@property (nonatomic) BOOL validStabilization; // ivar: _validStabilization


+(BOOL)saveStabilizationRecipe;
+(id)videoStabilizerforAnalysisType:(NSUInteger)arg0 withMetadata:(id)arg1 sourceSize:(struct CGSize )arg2 cropRect:(struct CGRect )arg3 ;
-(id)init;
-(int)convertAnalysisResult;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif