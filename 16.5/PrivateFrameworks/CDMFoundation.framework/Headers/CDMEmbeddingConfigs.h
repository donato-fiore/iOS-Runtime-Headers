// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMEMBEDDINGCONFIGS_H
#define CDMEMBEDDINGCONFIGS_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDMEmbeddingConfigs : NSObject <NSSecureCoding>

 {
    NSDictionary *_assetPaths;
    NSString *_stableEmbeddingModelVersion;
    NSDictionary *_embeddingConfigItems;
    NSDictionary *_serviceDependentEmbeddingModelVersions;
    BOOL _setupCalled;
}




+(BOOL)isInternalBuild;
+(BOOL)supportsSecureCoding;
+(id)generateEmbeddingModelIdList:(id)arg0 ;
+(int)getMaxEmbeddingConcurrency;
+(int)getMaxEmbeddingConcurrencyConst;
-(id)description;
-(id)generateEmbeddingConfigItemsWithError:(*id)arg0 ;
-(id)generateServiceDependentEmbeddingModelVersionsWithError:(*id)arg0 ;
-(id)getAllEmbeddingConfigs;
-(id)getAssetPaths;
-(id)getDependentEmbeddingConfigs;
-(id)getEmbeddingConfigForEmbeddingModelVersion:(id)arg0 ;
-(id)getEmbeddingConfigForFactor:(id)arg0 ;
-(id)getStableEmbeddingConfig;
-(id)initWithAssetPaths:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setupWithError:(*id)arg0 ;


@end


#endif