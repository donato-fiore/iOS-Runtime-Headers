// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMODELASSET_H
#define MLMODELASSET_H

@class NSDictionary, NSURL;
@protocol MLModeling, MLClassifier, MLRegressor;

#import <Foundation/Foundation.h>

#import "MLModelConfiguration.h"

@interface MLModelAsset : NSObject

@property (readonly, nonatomic) NSDictionary *archiveData; // ivar: _archiveData
@property (retain) NSObject<MLModeling> *asset; // ivar: _asset
@property (readonly, nonatomic) NSObject<MLClassifier> *classifier;
@property (readonly) NSURL *compiledURL; // ivar: _compiledURL
@property (retain, nonatomic) MLModelConfiguration *loadConfiguration; // ivar: _loadConfiguration
@property (readonly, nonatomic) NSObject<MLModeling> *model;
@property BOOL ranLoad; // ivar: _ranLoad
@property (readonly, nonatomic) NSObject<MLRegressor> *regressor;


+(BOOL)isANESupported;
+(BOOL)needsANECompilationForModelAtURL:(id)arg0 result:(*BOOL)arg1 error:(*id)arg2 ;
+(BOOL)purgeANEBinaryForModelAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)purgeANEIRForModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)fetchNetworkURLFromCompiledModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)modelAssetWithSpecification:(*void)arg0 compilerOptions:(id)arg1 error:(*id)arg2 ;
+(id)modelAssetWithSpecification:(*void)arg0 error:(*id)arg1 ;
+(id)modelAssetWithSpecificationData:(id)arg0 error:(*id)arg1 ;
+(id)modelAssetWithSpecificationURL:(id)arg0 compilerOptions:(id)arg1 error:(*id)arg2 ;
+(id)modelAssetWithSpecificationURL:(id)arg0 error:(*id)arg1 ;
+(id)modelAssetWithURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)modelAssetWithURL:(id)arg0 error:(*id)arg1 ;
+(id)resolveExternalReferencesInSpecificationData:(id)arg0 specificationURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)load:(*id)arg0 ;
-(id)classifierWithError:(*id)arg0 ;
-(id)description;
-(id)initWithArchiveData:(id)arg0 ;
-(id)initWithURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)modelWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)modelWithError:(*id)arg0 ;
-(id)regressorWithError:(*id)arg0 ;


@end


#endif