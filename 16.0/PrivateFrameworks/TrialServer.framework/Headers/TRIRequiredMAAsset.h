// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIREQUIREDMAASSET_H
#define TRIREQUIREDMAASSET_H

@class NSString, TRIFullMAAssetId;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIMAAssetMetadata.h"

@interface TRIRequiredMAAsset : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *factorName; // ivar: _factorName
@property (readonly, nonatomic) TRIFullMAAssetId *fullAssetId; // ivar: _fullAssetId
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL isOnDemand; // ivar: _isOnDemand
@property (readonly, nonatomic) TRIMAAssetMetadata *metadata; // ivar: _metadata


+(id)assetWithFactorName:(id)arg0 isInstalled:(BOOL)arg1 isOnDemand:(BOOL)arg2 metadata:(id)arg3 fullAssetId:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementFactorName:(id)arg0 ;
-(id)copyWithReplacementFullAssetId:(id)arg0 ;
-(id)copyWithReplacementIsInstalled:(BOOL)arg0 ;
-(id)copyWithReplacementIsOnDemand:(BOOL)arg0 ;
-(id)copyWithReplacementMetadata:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFactorName:(id)arg0 isInstalled:(BOOL)arg1 isOnDemand:(BOOL)arg2 metadata:(id)arg3 fullAssetId:(id)arg4 ;


@end


#endif