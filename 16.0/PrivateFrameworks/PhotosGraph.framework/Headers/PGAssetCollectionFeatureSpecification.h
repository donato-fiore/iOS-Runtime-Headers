// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGASSETCOLLECTIONFEATURESPECIFICATION_H
#define PGASSETCOLLECTIONFEATURESPECIFICATION_H

@class CLSFeederPrefetchOptions, NSArray, NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PGAssetCollectionFeatureSpecification : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CLSFeederPrefetchOptions *assetFeederPrefetchOptions; // ivar: _assetFeederPrefetchOptions
@property (readonly, nonatomic) NSArray *featureDefinitions; // ivar: _featureDefinitions
@property (readonly, nonatomic) NSString *featureLabel; // ivar: _featureLabel
@property (retain, nonatomic) NSSet *featureNodes; // ivar: _featureNodes
@property (readonly, nonatomic) NSUInteger featureType; // ivar: _featureType
@property (readonly, nonatomic) BOOL shouldCreateFeatureNodeIfNeeded; // ivar: _shouldCreateFeatureNodeIfNeeded
@property (readonly, nonatomic) BOOL shouldRunAtMomentIngest; // ivar: _shouldRunAtMomentIngest


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_assetUUIDsFromAssets:(id)arg0 ;
-(id)addFeatureNodeIfNeededWithGraphBuilder:(id)arg0 ;
-(id)description;
-(id)featureNodesForMomentNodeCollection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureType:(NSUInteger)arg0 featureLabel:(id)arg1 featureDefinitions:(id)arg2 shouldRunAtMomentIngest:(BOOL)arg3 shouldCreateFeatureNodeIfNeeded:(BOOL)arg4 ;
-(id)instanceWithMomentNode:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateFeatureNodesWithInstance:(id)arg0 assets:(id)arg1 curationContext:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif