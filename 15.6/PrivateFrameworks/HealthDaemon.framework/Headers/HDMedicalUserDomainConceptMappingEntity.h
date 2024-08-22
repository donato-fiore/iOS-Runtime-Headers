// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMEDICALUSERDOMAINCONCEPTMAPPINGENTITY_H
#define HDMEDICALUSERDOMAINCONCEPTMAPPINGENTITY_H



#import "HDHealthEntity.h"

@interface HDMedicalUserDomainConceptMappingEntity : HDHealthEntity



+(BOOL)insertUserDomainConceptID:(NSInteger)arg0 medicalRecordID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)migrateMappingsFromUserDomainConceptID:(NSInteger)arg0 toUserDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateMappingFromRecordWithPersistentID:(NSInteger)arg0 withMapToUDCWithPersistentID:(NSInteger)arg1 toMapToUDCWithPersistentID:(NSInteger)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)uniquedColumns;
+(id)unitTest_medicalRecordIDsForUserDomainConceptID:(NSUInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)unitTest_userDomainConceptIDsForMedicalRecordID:(NSUInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif