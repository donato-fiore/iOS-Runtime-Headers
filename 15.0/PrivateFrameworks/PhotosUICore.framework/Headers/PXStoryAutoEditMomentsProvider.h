// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYAUTOEDITMOMENTSPROVIDER_H
#define PXSTORYAUTOEDITMOMENTSPROVIDER_H

@class NSArray, PFStoryClusteringProperties, PFStoryAutoEditConfiguration, NSError;
@protocol OS_os_log, PXDisplayAssetCollection, PXDisplayAssetFetchResult, PXStoryAutoEditMomentsStatistics;

#import <Foundation/Foundation.h>

#import "PXStoryAutoEditConcreteMomentsStatistics.h"

@interface PXStoryAutoEditMomentsProvider : NSObject {
    NSArray *_moments;
    PXStoryAutoEditConcreteMomentsStatistics *_statistics;
    NSObject<OS_os_log> *_log;
}


@property (retain, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) PFStoryClusteringProperties *clusteringProperties; // ivar: _clusteringProperties
@property (retain, nonatomic) PFStoryAutoEditConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets; // ivar: _displayAssets
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *moments;
@property (readonly, nonatomic) NSObject<PXStoryAutoEditMomentsStatistics> *statistics;


-(id)_diagnosticSwiftCodeForMomentsUnitTest;
-(id)_faceprintDatasByAssetUUIDWithAssets:(id)arg0 ;
-(id)_faceprintsByAssetUUIDWithAssets:(id)arg0 ;
-(id)_faceprintsByAssetUUIDWithAssets:(id)arg0 faceprintDatas:(id)arg1 ;
-(id)_locationsByAssetUUIDWithAssets:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 assetCollection:(id)arg1 displayAssets:(id)arg2 ;
-(id)momentForDisplayAssetIndex:(NSUInteger)arg0 ;
-(void)_computeClustering;
-(void)enumerateMomentsUsingBlock:(id)arg0 ;


@end


#endif