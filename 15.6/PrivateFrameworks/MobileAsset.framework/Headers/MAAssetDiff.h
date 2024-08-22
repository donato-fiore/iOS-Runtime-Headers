// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAASSETDIFF_H
#define MAASSETDIFF_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAssetDiff : NSObject <NSSecureCoding>

 {
    NSUInteger _diffRaw;
    NSUInteger _diff;
    NSUInteger _mask;
    NSString *_description;
    NSString *_assessment;
}




+(BOOL)supportsSecureCoding;
+(id)allowEverythingDifferent;
+(id)requireSameAssetTypeAndAllAttributes;
+(id)requireSameAssetTypeAndAssetId;
+(id)requireSameAssetTypeAndDownloadContent;
-(BOOL)hasOnlyAllowedDifferences:(id)arg0 ;
-(BOOL)isAnythingDifferent;
-(BOOL)isSameAssetId;
-(BOOL)isSameAssetType;
-(BOOL)isSameDownloadContent;
-(BOOL)isSameDownloadPolicy;
-(BOOL)isSameDownloadUrl;
-(BOOL)isSameForAllAttributes;
-(BOOL)isSameForNonAssetIdAttributes;
-(NSUInteger)category;
-(id)description;
-(id)initDifferentAssetType:(BOOL)arg0 assetId:(BOOL)arg1 attributes:(BOOL)arg2 assetIdAttributes:(BOOL)arg3 dynamicAssetId:(BOOL)arg4 nonIdAttributes:(BOOL)arg5 content:(BOOL)arg6 url:(BOOL)arg7 policy:(BOOL)arg8 ;
-(id)initFromDiff:(NSUInteger)arg0 ;
-(id)initFromInverseOfCategories:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif