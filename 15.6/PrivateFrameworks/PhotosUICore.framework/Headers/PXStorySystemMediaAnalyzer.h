// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYSYSTEMMEDIAANALYZER_H
#define PXSTORYSYSTEMMEDIAANALYZER_H

@protocol PXStoryMediaAnalyzer;

#import <Foundation/Foundation.h>


@interface PXStorySystemMediaAnalyzer : NSObject <PXStoryMediaAnalyzer>





-(id)requestAnalysisForAssets:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif