// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSROOTMEANSQUAREDTIMEINTERVALERRORANALYSIS_H
#define TSROOTMEANSQUAREDTIMEINTERVALERRORANALYSIS_H

@class NSArray;


#import "TSTimeErrorAnalysis.h"

@interface TSRootMeanSquaredTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {
    *CGFloat _rmstie;
}


@property (readonly, copy, nonatomic) NSArray *rmstie;


+(id)plotSize;
+(id)plotTitle;
+(id)plotYLabel;
+(id)variableName;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 withFilename:(id)arg1 fromStartWindowSize:(NSInteger)arg2 toEndWindowSize:(NSInteger)arg3 stepSize:(NSInteger)arg4 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 ;
-(id)initWithTimeErrorValues:(id)arg0 ;
-(id)rmstieFromStartWindowSize:(NSInteger)arg0 toEndWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)_performAnalysisFromWindowSize:(NSInteger)arg0 toWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif