// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICALUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H
#define HKMEDICALUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H

@class NSUUID, NSString;


#import "HKUserDomainConceptSemanticIdentifier.h"
#import "HKMedicalCoding.h"

@interface HKMedicalUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy, nonatomic) HKMedicalCoding *medicalCoding; // ivar: _medicalCoding


+(id)semanticIdentifierWithComponents:(id)arg0 ;
-(id)init;
-(id)initWithTypeIdentifier:(id)arg0 ;
-(id)initWithUUID:(id)arg0 countryCode:(id)arg1 medicalCoding:(id)arg2 ;
-(id)stringValue;


@end


#endif