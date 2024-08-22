// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALTYPE_H
#define HKCLINICALTYPE_H



#import "HKSampleType.h"

@interface HKClinicalType : HKSampleType



+(id)allTypes;
+(id)allergyRecordType;
+(id)clinicalNoteRecordType;
+(id)conditionRecordType;
+(id)coverageRecordType;
+(id)immunizationRecordType;
+(id)labResultRecordType;
+(id)medicationRecordType;
+(id)procedureRecordType;
+(id)sampleTypesForResourceType:(id)arg0 error:(*id)arg1 ;
+(id)vitalSignRecordType;
-(BOOL)_requiresAuthorization;
-(BOOL)isClinicalType;
-(BOOL)requiresPerObjectAuthorization;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif