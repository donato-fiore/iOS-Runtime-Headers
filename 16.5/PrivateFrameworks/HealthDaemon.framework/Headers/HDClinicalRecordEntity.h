// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLINICALRECORDENTITY_H
#define HDCLINICALRECORDENTITY_H



#import "HDSampleEntity.h"

@interface HDClinicalRecordEntity : HDSampleEntity



+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)isConcreteEntity;
+(id)_clinicalRecordForSampleType:(id)arg0 predicate:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)_predicateForRecordWithFHIRResourceIdentifier:(id)arg0 ;
+(id)attachmentObjectIdentifierForSampleWithUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)clinicalRecordWithAttachmentObjectIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)existingClinicalRecordCreatedFromResourceWithIdentifier:(id)arg0 basePredicate:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)foreignKeys;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif