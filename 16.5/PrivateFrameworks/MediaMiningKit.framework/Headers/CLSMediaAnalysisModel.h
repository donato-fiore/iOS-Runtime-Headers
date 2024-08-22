// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMEDIAANALYSISMODEL_H
#define CLSMEDIAANALYSISMODEL_H

@class NSString;
@protocol CLSSignalModel;

#import <Foundation/Foundation.h>


@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel>



@property (readonly) CGFloat autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset; // ivar: _autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset
@property (readonly) CGFloat autoplaySuggestionScoreThresholdToBeInteresting; // ivar: _autoplaySuggestionScoreThresholdToBeInteresting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version
@property (readonly) CGFloat videoScoreThresholdToBeInteresting; // ivar: _videoScoreThresholdToBeInteresting
@property (readonly) CGFloat videoScoreThresholdToNotBeJunk; // ivar: _videoScoreThresholdToNotBeJunk


+(NSUInteger)baseMediaAnalysisVersionWithMediaAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
-(id)initForTesting;
-(id)initWithMediaAnalysisVersion:(NSUInteger)arg0 ;
-(void)setupVersion33;


@end


#endif