// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGBEHAVIORALSCOREPROCESSOR_H
#define PGBEHAVIORALSCOREPROCESSOR_H

@class PHPhotoLibrary, NSDictionary, NSSet;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGBehavioralScoreProcessor : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (nonatomic) NSInteger algorithm; // ivar: _algorithm
@property (retain, nonatomic) NSDictionary *algorithmData; // ivar: _algorithmData
@property (retain, nonatomic) PGGraph *graph; // ivar: _graph
@property (retain, nonatomic) NSSet *previousGoldAssetUUIDs; // ivar: _previousGoldAssetUUIDs


+(id)assetPropertySetsForUserBehavioralProcessing;
-(BOOL)needBehavioralScoreReprocessingUsingCurrentGoldAssetsUUIDs:(id)arg0 previousGoldAssetUUIDs:(id)arg1 ;
-(float)behavioralScoreFromBaseScore:(float)arg0 semanticScore:(float)arg1 ;
-(float)semanticScoreFromBehavioralScore:(float)arg0 ;
-(id)_behavioralProcessorForAlgorithm:(NSInteger)arg0 goldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3 ;
-(id)_newBehavioralProcessorForAlgorithm:(NSInteger)arg0 goldAssets:(id)arg1 graph:(id)arg2 ;
-(id)_previousResults;
-(id)behavioralScoreByAssetUUIDForAssets:(id)arg0 algorithmProcessor:(id)arg1 personalHighAestheticsThreshold:(CGFloat)arg2 personalGoodAestheticsThreshold:(CGFloat)arg3 ;
-(id)goldAssetUUIDs;
-(id)initWithGraphManager:(id)arg0 algorithm:(NSInteger)arg1 ;
-(id)peopleFeatures;
-(id)sceneFeatures;
-(void)_persistNewGoldAssetsUUIDs:(id)arg0 processorData:(id)arg1 ;
-(void)_writeBehavioralScoresToPhotosDatabase:(id)arg0 assets:(id)arg1 ;
-(void)processBehavioralScoresWithProgressBlock:(id)arg0 ;


@end


#endif