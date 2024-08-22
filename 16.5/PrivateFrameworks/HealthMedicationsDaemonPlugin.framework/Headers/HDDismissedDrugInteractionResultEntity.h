// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDISMISSEDDRUGINTERACTIONRESULTENTITY_H
#define HDDISMISSEDDRUGINTERACTIONRESULTENTITY_H

@class HDHealthEntity;



@interface HDDismissedDrugInteractionResultEntity : HDHealthEntity



+(BOOL)enumerateDismissedDrugInteractionResultsWithWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertDismissedDrugInteractionResult:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif