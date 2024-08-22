// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITREATMENTRECORDFETCHPLAN_H
#define TRITREATMENTRECORDFETCHPLAN_H

@class NSIndexSet, CKRecordID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRITreatmentRecordFetchPlan : NSObject <NSCopying>



@property (readonly, nonatomic) NSIndexSet *assetIndexes; // ivar: _assetIndexes
@property (readonly, nonatomic) CKRecordID *recordId; // ivar: _recordId


+(id)planWithRecordId:(id)arg0 assetIndexes:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPlan:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementAssetIndexes:(id)arg0 ;
-(id)copyWithReplacementRecordId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRecordId:(id)arg0 assetIndexes:(id)arg1 ;


@end


#endif