// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIPARALLAXCOLORANALYSISRESULT_H
#define _PIPARALLAXCOLORANALYSISRESULT_H

@class NURenderResult, NSString, NSArray;
@protocol PIParallaxColorAnalysisResult, NURenderStatistics;



@interface _PIParallaxColorAnalysisResult : NURenderResult <PIParallaxColorAnalysisResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *dominantColors; // ivar: _dominantColors
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat medianLuminance; // ivar: _medianLuminance
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif