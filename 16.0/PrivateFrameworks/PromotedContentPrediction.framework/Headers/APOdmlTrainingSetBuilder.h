// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLTRAININGSETBUILDER_H
#define APODMLTRAININGSETBUILDER_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>

#import "APOdmlRecipe.h"

@interface APOdmlTrainingSetBuilder : NSObject

@property (readonly, copy, nonatomic) NSMutableSet *adLevelRequiredFeatures; // ivar: _adLevelRequiredFeatures
@property (readonly, copy, nonatomic) NSArray *datas; // ivar: _datas
@property (readonly, copy, nonatomic) NSMutableSet *deviceAndSearchLevelRequiredFeatures; // ivar: _deviceAndSearchLevelRequiredFeatures
@property (readonly, copy, nonatomic) NSArray *infos; // ivar: _infos
@property (readonly, nonatomic) NSUInteger placementType; // ivar: _placementType
@property (readonly, nonatomic) APOdmlRecipe *recipe; // ivar: _recipe
@property (readonly, nonatomic) NSUInteger trainingSetCount; // ivar: _trainingSetCount
@property (readonly, copy, nonatomic) NSArray *unarchivedDatas; // ivar: _unarchivedDatas


+(id)classesForDataDict;
-(BOOL)_extractFeaturesFromDataBlob:(id)arg0 featuresRequired:(id)arg1 andSaveTo:(id)arg2 error:(*id)arg3 ;
-(BOOL)setError:(*id)arg0 errorCode:(NSInteger)arg1 ;
-(BOOL)setErrorPtr:(*id)arg0 toError:(id)arg1 ;
-(id)_additionalMetricsFromAdRecord:(id)arg0 clientPttr:(id)arg1 error:(*id)arg2 ;
-(id)_gatherFeaturesFromAdRecord:(id)arg0 requiredFeatures:(id)arg1 forMetricsOnly:(BOOL)arg2 error:(*id)arg3 ;
-(id)_trainingRowsFromDESRecord:(id)arg0 isCounterfactual:(id)arg1 error:(*id)arg2 ;
-(id)generateTrainingSet:(*id)arg0 ;
-(id)initWithDESRecordSet:(id)arg0 recipe:(id)arg1 ;
-(id)initWithRecipe:(id)arg0 unarchivedDatas:(id)arg1 datas:(id)arg2 infos:(id)arg3 ;
-(id)metricsFromDESRecordWithClientPttr:(id)arg0 error:(*id)arg1 ;
-(id)translateFeatureKeyToDESKey:(id)arg0 ;
-(void)_preprocessDESRecordSet:(id)arg0 andAddInfoTo:(id)arg1 addDataTo:(id)arg2 addUnarchivedDataTo:(id)arg3 ;
-(void)addRequiredFeatures:(id)arg0 ;


@end


#endif