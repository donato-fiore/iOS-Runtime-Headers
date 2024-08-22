// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDAPPSEGMENT_H
#define AMDAPPSEGMENT_H

@class NSManagedObject, NSString;



@interface AMDAppSegment : NSManagedObject

@property (nonatomic) NSInteger adamId;
@property (copy, nonatomic) NSString *algoId;
@property (copy, nonatomic) NSString *segment;
@property (copy, nonatomic) NSString *treatmentId;


+(id)deleteAllSegments:(*id)arg0 ;
+(id)fetchRequest;
+(id)getSegmentsDictForAllTreatments:(*id)arg0 ;
+(id)getSegmentsForTreatmentId:(id)arg0 error:(*id)arg1 ;
+(id)getSegmentsInfoForTreatment:(id)arg0 error:(*id)arg1 ;
+(id)refreshSegments:(id)arg0 error:(*id)arg1 ;
+(id)refreshSegmentsForAllTreatmentsForUser:(id)arg0 error:(*id)arg1 ;
+(void)saveSegments:(id)arg0 withTreatmentId:(id)arg1 andAlgoId:(id)arg2 error:(*id)arg3 ;


@end


#endif