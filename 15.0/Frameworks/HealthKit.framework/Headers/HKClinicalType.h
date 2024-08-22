// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALTYPE_H
#define HKCLINICALTYPE_H



#import "HKSampleType.h"

@interface HKClinicalType : HKSampleType



+(id)allTypes;
+(id)allergyRecordType;
+(id)conditionRecordType;
+(id)coverageRecordType;
+(id)immunizationRecordType;
+(id)labResultRecordType;
+(id)medicationRecordType;
+(id)procedureRecordType;
+(id)sampleTypesForResourceType:(id)arg0 error:(*id)arg1 ;
+(id)vitalSignRecordType;
-(BOOL)_requiresAuthorization;
-(BOOL)_requiresPerObjectAuthorization;
-(BOOL)isClinicalType;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif