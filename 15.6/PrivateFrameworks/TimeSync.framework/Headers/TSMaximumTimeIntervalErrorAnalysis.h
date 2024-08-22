// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSMAXIMUMTIMEINTERVALERRORANALYSIS_H
#define TSMAXIMUMTIMEINTERVALERRORANALYSIS_H

@class NSArray;


#import "TSTimeErrorAnalysis.h"

@interface TSMaximumTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {
    *CGFloat _negativeTimeErrors;
    *CGFloat _mtie;
}


@property (readonly, copy, nonatomic) NSArray *mtie;


+(id)additionalScriptInitialization;
+(id)additionalScriptPlots:(id)arg0 ;
+(id)additionalScriptRecords;
+(id)plotSize;
+(id)plotTitle;
+(id)plotYLabel;
+(id)plotYLimits:(id)arg0 ;
+(id)variableName;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 withFilename:(id)arg1 fromStartWindowSize:(NSInteger)arg2 toEndWindowSize:(NSInteger)arg3 stepSize:(NSInteger)arg4 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 ;
-(id)initWithTimeErrorValues:(id)arg0 ;
-(id)mtieFromStartWindowSize:(NSInteger)arg0 toEndWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)_performAnalysisFromWindowSize:(NSInteger)arg0 toWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif