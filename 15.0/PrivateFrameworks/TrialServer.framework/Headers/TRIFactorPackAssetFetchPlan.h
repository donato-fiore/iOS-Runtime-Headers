// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFACTORPACKASSETFETCHPLAN_H
#define TRIFACTORPACKASSETFETCHPLAN_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIFactorPackAssetFetchPlan : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *metadataForRequestedUnlinkedAssets; // ivar: _metadataForRequestedUnlinkedAssets
@property (readonly, nonatomic) NSDictionary *recordIdsForDiffableAssetIds; // ivar: _recordIdsForDiffableAssetIds
@property (readonly, nonatomic) NSDictionary *recordIdsForNonDiffableAssetIds; // ivar: _recordIdsForNonDiffableAssetIds


+(id)planWithMetadataForRequestedUnlinkedAssets:(id)arg0 recordIdsForDiffableAssetIds:(id)arg1 recordIdsForNonDiffableAssetIds:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPlan:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)arg0 ;
-(id)copyWithReplacementRecordIdsForDiffableAssetIds:(id)arg0 ;
-(id)copyWithReplacementRecordIdsForNonDiffableAssetIds:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMetadataForRequestedUnlinkedAssets:(id)arg0 recordIdsForDiffableAssetIds:(id)arg1 recordIdsForNonDiffableAssetIds:(id)arg2 ;


@end


#endif