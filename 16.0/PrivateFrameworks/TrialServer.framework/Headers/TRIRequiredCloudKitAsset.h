// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIREQUIREDCLOUDKITASSET_H
#define TRIREQUIREDCLOUDKITASSET_H

@class NSString<TRIAssetId>, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRICKAssetMetadata.h"

@interface TRIRequiredCloudKitAsset : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIAssetId> *assetId; // ivar: _assetId
@property (readonly, nonatomic) NSString *factorName; // ivar: _factorName
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL isOnDemand; // ivar: _isOnDemand
@property (readonly, nonatomic) TRICKAssetMetadata *metadata; // ivar: _metadata


+(id)assetWithFactorName:(id)arg0 isInstalled:(BOOL)arg1 isOnDemand:(BOOL)arg2 assetId:(id)arg3 metadata:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementAssetId:(id)arg0 ;
-(id)copyWithReplacementFactorName:(id)arg0 ;
-(id)copyWithReplacementIsInstalled:(BOOL)arg0 ;
-(id)copyWithReplacementIsOnDemand:(BOOL)arg0 ;
-(id)copyWithReplacementMetadata:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFactorName:(id)arg0 isInstalled:(BOOL)arg1 isOnDemand:(BOOL)arg2 assetId:(id)arg3 metadata:(id)arg4 ;


@end


#endif