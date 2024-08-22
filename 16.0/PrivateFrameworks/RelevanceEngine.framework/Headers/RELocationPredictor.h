// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RELOCATIONPREDICTOR_H
#define RELOCATIONPREDICTOR_H

@class RTRoutineManager, NSMapTable, NSMutableDictionary, NSLock, NSString, NSDictionary;
@protocol REEngineLocationManagerObserver, RELocationPredictorProperties;


#import "REPredictor.h"

@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver, RELocationPredictorProperties>

 {
    RTRoutineManager *_manager;
    NSMapTable *_routineData;
    NSMutableDictionary *_overrideRoutineType;
    NSLock *_routineDataLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *routineDataByEngine;
@property (readonly) Class superclass;


+(CGFloat)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(id)_routineDataForEngine:(id)arg0 ;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(id)locationForEngine:(id)arg0 userLocation:(NSInteger)arg1 ;
-(id)predictedLocationIdentifierForEngine:(id)arg0 ;
-(id)predictedLocationNameForEngine:(id)arg0 ;
-(void)_setOverrideLocation:(NSInteger)arg0 forEngine:(id)arg1 ;
-(void)addRelevanceEngine:(id)arg0 ;
-(void)locationManagerDidUpdateLocation:(id)arg0 ;
-(void)removeRelevanceEngine:(id)arg0 ;
-(void)update;


@end


#endif