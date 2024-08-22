// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGASSETFEATUREBEHAVIORALPROCESSOR_H
#define PGASSETFEATUREBEHAVIORALPROCESSOR_H

@class NSSet, NSDictionary;
@protocol PGBehavioralAlgorithm, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGAssetFeatureBehavioralProcessor : NSObject <PGBehavioralAlgorithm>

 {
    NSObject<OS_os_log> *_loggingConnection;
}


@property (retain, nonatomic) NSSet *goldAssets; // ivar: _goldAssets
@property (retain, nonatomic) NSDictionary *personFeatures; // ivar: _personFeatures
@property (retain, nonatomic) NSDictionary *sceneFeatures; // ivar: _sceneFeatures
@property (nonatomic) CGFloat similarityScoreNormalizer; // ivar: _similarityScoreNormalizer


-(float)semanticScoreForAsset:(id)arg0 ;
-(id)_semanticScoreByAssetUUIDForAssets:(id)arg0 normalize:(BOOL)arg1 ;
-(id)dataToPersist;
-(id)initWithGoldAssets:(id)arg0 loggingConnection:(id)arg1 ;
-(id)initWithGoldAssets:(id)arg0 persistedData:(id)arg1 loggingConnection:(id)arg2 ;
-(id)semanticScoreByAssetUUIDForAssets:(id)arg0 ;
-(void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(id)arg0 ;
-(void)preprocessWithProgressBlock:(id)arg0 ;


@end


#endif