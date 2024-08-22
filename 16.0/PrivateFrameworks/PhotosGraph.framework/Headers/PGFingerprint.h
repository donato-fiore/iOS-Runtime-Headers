// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFINGERPRINT_H
#define PGFINGERPRINT_H

@class NSArray, MAFloatVector;

#import <Foundation/Foundation.h>


@interface PGFingerprint : NSObject

@property (copy, nonatomic) NSArray *featureNames; // ivar: featureNames
@property (copy, nonatomic) MAFloatVector *floatArray; // ivar: floatArray


+(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 underlyingError:(id)arg3 ;
+(id)_assetFingerprintWithFeatureExtractor:(id)arg0 forAsset:(id)arg1 withTransformers:(id)arg2 error:(*id)arg3 ;
+(id)assetCollectionFingerprintWithVersion:(NSInteger)arg0 forAssetCollection:(id)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(*id)arg4 ;
+(id)assetCollectionFingerprintsDataframeWithVersion:(NSInteger)arg0 forAssetCollections:(id)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 progressReporter:(id)arg4 error:(*id)arg5 ;
+(id)assetCollectionFingerprintsWithVersion:(NSInteger)arg0 forAssetCollections:(id)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(*id)arg4 ;
+(id)assetFingerprintWithVersion:(NSInteger)arg0 forAsset:(id)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(*id)arg4 ;
+(id)assetFingerprintsDataframeWithVersion:(NSInteger)arg0 forAssets:(id)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 progressReporter:(id)arg4 error:(*id)arg5 ;
+(id)assetFingerprintsWithVersion:(NSInteger)arg0 forAssets:(id)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(*id)arg4 ;
+(id)memoryFeatureNodesFingerprintsDataFrameWithVersion:(NSInteger)arg0 forFeatureNodes:(id)arg1 uniqueMemoryIdentifiers:(id)arg2 withGraph:(id)arg3 progressReporter:(id)arg4 error:(*id)arg5 ;
+(id)momentNodeFingerprintsDataFrameWithVersion:(NSInteger)arg0 forMomentNodes:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFingerprint:(id)arg0 ;
-(id)initWithFloatArray:(id)arg0 withFeatureNames:(id)arg1 ;


@end


#endif