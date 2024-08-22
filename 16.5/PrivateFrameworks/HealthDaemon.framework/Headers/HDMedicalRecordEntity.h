// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICALRECORDENTITY_H
#define HDMEDICALRECORDENTITY_H



#import "HDSampleEntity.h"

@interface HDMedicalRecordEntity : HDSampleEntity



+(id)attachmentObjectIdentifierForSampleWithUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)checkConstraints;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)foreignKeys;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)latestCreationDateWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)latestModifiedDateWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)medicalRecordWithAttachmentObjectIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)orderingTermForSortDescriptor:(id)arg0 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)willDeleteWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif