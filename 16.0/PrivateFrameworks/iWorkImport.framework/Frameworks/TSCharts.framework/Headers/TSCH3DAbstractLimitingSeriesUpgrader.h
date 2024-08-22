// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DABSTRACTLIMITINGSERIESUPGRADER_H
#define TSCH3DABSTRACTLIMITINGSERIESUPGRADER_H


#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject {
    TSCHChartInfo *_chartInfo;
}


@property (copy, nonatomic) id *willModifyBlock; // ivar: _willModifyBlock


+(BOOL)chartTypeUsesSeriesLimiting:(id)arg0 ;
+(CGFloat)depthFactorForAdjustingNumberOfSeries:(NSUInteger)arg0 chartType:(id)arg1 fromOldLimitingSeries:(NSUInteger)arg2 toNewLimitingSeries:(NSUInteger)arg3 ;
+(id)upgraderWithChartInfo:(id)arg0 ;
-(NSUInteger)numberOfSeries;
-(id)adjustedScaleFromLayoutSettings:(struct ? *)arg0 toLayoutSettings:(struct ? *)arg1 ;
-(id)configuredSceneWithLayoutSettings:(struct ? )arg0 ;
-(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg0 ;
-(id)initWithChartInfo:(id)arg0 ;
-(struct ? )oldLayoutSettings;
-(struct ? )p_oldLayoutSettingsForSpice:(BOOL)arg0 ;
-(struct ? )upgradedLayoutSettings;
-(void)configureScene:(id)arg0 ;
-(void)mutateInfoByAdjustingScaleFromLayoutSettings:(struct ? *)arg0 toLayoutSettings:(struct ? *)arg1 ;
-(void)mutateInfoWithContainingViewport:(id)arg0 scene:(id)arg1 ;
-(void)mutateInfoWithMutations:(id)arg0 ;
-(void)upgradeForSpice:(BOOL)arg0 naturalSize:(struct CGSize )arg1 ;


@end


#endif