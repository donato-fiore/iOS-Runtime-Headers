// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEROAPPFEEDBACK_H
#define ATXHEROAPPFEEDBACK_H


#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"

@interface ATXHeroAppFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_heroAppHistogram;
}




-(BOOL)shouldShowHeroAppPrediction:(id)arg0 ;
-(CGFloat)_confirmsForHeroAppPrediction:(id)arg0 ;
-(CGFloat)_engagementForHeroAppPrediction:(id)arg0 ;
-(CGFloat)_rejectsForHeroAppPrediction:(id)arg0 ;
-(id)init;
-(id)initWithHistogram:(id)arg0 ;
-(void)addConfirmForHeroAppPredictionWithBundleId:(id)arg0 weight:(float)arg1 ;
-(void)addRejectForHeroAppPredictionWithBundleId:(id)arg0 weight:(float)arg1 ;


@end


#endif