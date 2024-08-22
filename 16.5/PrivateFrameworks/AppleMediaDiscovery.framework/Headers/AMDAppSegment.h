// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDAPPSEGMENT_H
#define AMDAPPSEGMENT_H

@class NSManagedObject, NSString;



@interface AMDAppSegment : NSManagedObject

@property (nonatomic) NSInteger adamId;
@property (copy, nonatomic) NSString *algoId;
@property (copy, nonatomic) NSString *segment;
@property (copy, nonatomic) NSString *treatmentId;


+(BOOL)evaluatePredicate:(id)arg0 withOperands:(id)arg1 ;
+(id)assignSegmentsToApps:(id)arg0 withFeatureDictionary:(id)arg1 predicate:(id)arg2 ;
+(id)assignSegmentsWithParameters:(id)arg0 error:(*id)arg1 ;
+(id)computeSegmentsForApps:(id)arg0 withRules:(id)arg1 error:(*id)arg2 ;
+(id)deleteAllSegments:(*id)arg0 ;
+(id)fetchRequest;
+(id)getSegmentsDictForAllTreatments:(*id)arg0 ;
+(id)getSegmentsForTreatmentId:(id)arg0 error:(*id)arg1 ;
+(id)getSegmentsInfoForTreatment:(id)arg0 error:(*id)arg1 ;
+(id)refreshSegments:(id)arg0 error:(*id)arg1 ;
+(id)refreshSegmentsForAllTreatmentsForUser:(id)arg0 error:(*id)arg1 ;
+(void)saveSegments:(id)arg0 withTreatmentId:(id)arg1 andAlgoId:(id)arg2 error:(*id)arg3 ;
+(void)validatePredicate:(id)arg0 withFeatureList:(id)arg1 error:(*id)arg2 ;


@end


#endif