// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFETCHONDEMANDFACTORSPERSISTEDTASK_TREATMENTASSETINDEXES_H
#define TRIFETCHONDEMANDFACTORSPERSISTEDTASK_TREATMENTASSETINDEXES_H

@class TRIPBMessage, TRIPBUInt32Array, NSString;



@interface TRIFetchOnDemandFactorsPersistedTask_TreatmentAssetIndexes : TRIPBMessage

@property (nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) TRIPBUInt32Array *indexArray;
@property (readonly, nonatomic) NSUInteger indexArray_Count;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif