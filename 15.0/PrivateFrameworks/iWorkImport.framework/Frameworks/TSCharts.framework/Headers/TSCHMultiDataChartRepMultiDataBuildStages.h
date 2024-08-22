// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHMULTIDATACHARTREPMULTIDATABUILDSTAGES_H
#define TSCHMULTIDATACHARTREPMULTIDATABUILDSTAGES_H


#import <Foundation/Foundation.h>

#import "TSCHMultiDataChartRep.h"

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject {
    TSCHMultiDataChartRep *_rep;
    _NSRange _stages;
    CGFloat _totalDuration;
}


@property (readonly, nonatomic) NSUInteger currentStage; // ivar: _currentStage
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasStage;
@property (readonly, nonatomic) BOOL isBackgroundOnly;
@property (readonly, nonatomic) BOOL isFadingInLayers;
@property (readonly, nonatomic) BOOL isLastStageBackgroundOnly;


+(NSUInteger)dataSetIndexForRep:(id)arg0 buildStage:(NSUInteger)arg1 ;
+(NSUInteger)numberOfFadingBuildStages;
+(id)buildStagesWithRep:(id)arg0 stages:(struct _NSRange )arg1 totalDuration:(CGFloat)arg2 ;
-(BOOL)isBackgroundOnlyStage:(NSUInteger)arg0 ;
-(NSUInteger)dataSetIndexForStage:(NSUInteger)arg0 ;
-(id)chartLayout;
-(id)initWithRep:(id)arg0 stages:(struct _NSRange )arg1 totalDuration:(CGFloat)arg2 ;
-(void)advanceStage;
-(void)setupLayoutDataSetIndexForCurrentStage;
-(void)setupLayoutDataSetIndexForNextStage;


@end


#endif