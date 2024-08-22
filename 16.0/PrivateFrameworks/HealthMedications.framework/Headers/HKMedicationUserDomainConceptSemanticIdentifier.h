// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H
#define HKMEDICATIONUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H

@class HKUserDomainConceptSemanticIdentifier, NSUUID, HKMedicalCoding;



@interface HKMedicationUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) HKMedicalCoding *medicalCoding; // ivar: _medicalCoding


+(id)semanticIdentifierWithComponents:(id)arg0 ;
-(id)init;
-(id)initWithTypeIdentifier:(id)arg0 ;
-(id)initWithUUID:(id)arg0 medicalCoding:(id)arg1 ;
-(id)stringValue;


@end


#endif