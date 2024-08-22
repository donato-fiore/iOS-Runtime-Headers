// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHERODATASERVERHELPER_H
#define ATXHERODATASERVERHELPER_H


#import <Foundation/Foundation.h>


@interface ATXHeroDataServerHelper : NSObject



+(BOOL)canPredictClipsGivenRecentMotion;
+(BOOL)isPredictionInRadius:(id)arg0 currentLocation:(id)arg1 ;
+(id)bundleIdForPrediction:(id)arg0 ;
+(id)heroAppPredictionsSortedByDistance:(id)arg0 currentLocation:(id)arg1 ;
+(id)inRadiusPredictionsFrom:(id)arg0 currentLocation:(id)arg1 ;
-(id)init;


@end


#endif