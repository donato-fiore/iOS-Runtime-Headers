// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSSHARESHEETEPHEMERALFEATUREMANAGER_H
#define _PSSHARESHEETEPHEMERALFEATUREMANAGER_H

@class NSSet, NSArray, _CDInteractionStore, NSNumber;

#import <Foundation/Foundation.h>

#import "_PSPredictionContext.h"
#import "_PSHistogramFeatureData.h"

@interface _PSShareSheetEphemeralFeatureManager : NSObject {
    _PSPredictionContext *_context;
    NSSet *_candidates;
    NSArray *_caches;
    _CDInteractionStore *_store;
    NSSet *_features;
    _PSHistogramFeatureData *_histogramFeatureData;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSNumber *histogramSmoothingParameterK; // ivar: _histogramSmoothingParameterK
@property (retain, nonatomic) NSNumber *histogramSmoothingParameterV; // ivar: _histogramSmoothingParameterV


-(id)callFeatureFunctionWithFeature:(int)arg0 histogramFeatureData:(id)arg1 ;
-(id)computeFeaturesWithHistogramFeatures:(id)arg0 ;
-(id)initWithContext:(id)arg0 candidates:(id)arg1 caches:(id)arg2 store:(id)arg3 ;
-(id)loadPSConfig;
-(void)setCandidates:(id)arg0 ;
-(void)setContext:(id)arg0 ;
-(void)setFeatureManagerProperties;


@end


#endif