// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSMODIFIEDALLANDEVIATIONANALYSIS_H
#define TSMODIFIEDALLANDEVIATIONANALYSIS_H

@class NSArray;


#import "TSTimeErrorAnalysis.h"

@interface TSModifiedAllanDeviationAnalysis : TSTimeErrorAnalysis {
    *CGFloat _madev;
}


@property (readonly, copy, nonatomic) NSArray *madev;


+(id)plotSize;
+(id)plotTitle;
+(id)plotYLabel;
+(id)variableName;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 withFilename:(id)arg1 fromStartWindowSize:(NSInteger)arg2 toEndWindowSize:(NSInteger)arg3 stepSize:(NSInteger)arg4 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 ;
-(NSInteger)analysisLimit;
-(NSInteger)threadingLimit;
-(NSInteger)threadingSegment;
-(id)initWithTimeErrorValues:(id)arg0 ;
-(id)madevFromStartWindowSize:(NSInteger)arg0 toEndWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)_performAnalysisFromWindowSize:(NSInteger)arg0 toWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif