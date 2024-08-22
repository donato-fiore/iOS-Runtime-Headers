// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEROCLIPMANAGER_H
#define ATXHEROCLIPMANAGER_H

@protocol ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXAppClipsFeedback.h"

@interface ATXHeroClipManager : NSObject {
    id<ATXPETEventTracker2Protocol> *_tracker;
}


@property (readonly, nonatomic) ATXAppClipsFeedback *feedback; // ivar: _feedback


+(BOOL)clipsSupported;
+(id)addPredictionLocationToHeroAppPredictions:(id)arg0 location:(id)arg1 ;
+(id)sortPredictionsOnFeedback:(id)arg0 ;
+(void)openAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(id)_populateMetadataInHeroAppPrediction:(id)arg0 ;
-(id)init;
-(id)initWithFeedback:(id)arg0 ;
-(id)initWithFeedback:(id)arg0 tracker:(id)arg1 ;
-(void)donateAppClipsWithHeroAppPredictions:(id)arg0 ;
-(void)logSuppressionMetricWithHeroAppPrediction:(id)arg0 suppresionType:(int)arg1 ;


@end


#endif