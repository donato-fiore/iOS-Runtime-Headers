// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITREATMENTASSETFETCHPLAN_H
#define TRITREATMENTASSETFETCHPLAN_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIGenericUniqueRequiredAssets.h"

@interface TRITreatmentAssetFetchPlan : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *fetchPlansForTreatmentIds; // ivar: _fetchPlansForTreatmentIds
@property (readonly, nonatomic) TRIGenericUniqueRequiredAssets *metadataForRequestedUnlinkedAssets; // ivar: _metadataForRequestedUnlinkedAssets


+(id)planWithMetadataForRequestedUnlinkedAssets:(id)arg0 fetchPlansForTreatmentIds:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPlan:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementFetchPlansForTreatmentIds:(id)arg0 ;
-(id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMetadataForRequestedUnlinkedAssets:(id)arg0 fetchPlansForTreatmentIds:(id)arg1 ;


@end


#endif