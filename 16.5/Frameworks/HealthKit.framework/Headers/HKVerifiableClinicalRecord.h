// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKVERIFIABLECLINICALRECORD_H
#define HKVERIFIABLECLINICALRECORD_H

@class NSData, NSDate, NSString, NSArray, NSUUID;


#import "HKSample.h"
#import "HKVerifiableClinicalRecordSubject.h"
#import "HKVerifiableClinicalRecordType.h"

@interface HKVerifiableClinicalRecord : HKSample

@property (readonly, copy) NSData *JWSRepresentation; // ivar: _JWSRepresentation
@property (readonly, copy) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (readonly, copy) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy) NSDate *issuedDate; // ivar: _issuedDate
@property (readonly, copy) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (readonly, copy) NSArray *itemNames; // ivar: _itemNames
@property (readonly, copy, nonatomic) NSUUID *originIdentifier; // ivar: _originIdentifier
@property (readonly, copy, nonatomic) NSString *recordIssuerDisplayName;
@property (readonly, copy, nonatomic) NSString *recordItemsDisplayName;
@property (readonly, copy, nonatomic) NSString *recordTypeDisplayName;
@property (readonly, copy) NSArray *recordTypes; // ivar: _recordTypes
@property (readonly, copy) NSDate *relevantDate; // ivar: _relevantDate
@property (readonly, copy) NSString *sourceType; // ivar: _sourceType
@property (readonly, copy) HKVerifiableClinicalRecordSubject *subject; // ivar: _subject
@property (readonly, copy, nonatomic) HKVerifiableClinicalRecordType *verifiableClinicalRecordType;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(NSInteger)_privateSourceTypeForExternalType:(id)arg0 ;
+(id)sourceTypeForInternalType:(NSInteger)arg0 ;
+(id)verifiableClinicalRecordWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 recordTypes:(id)arg5 issuedDate:(id)arg6 relevantDate:(id)arg7 expirationDate:(id)arg8 issuerIdentifier:(id)arg9 subject:(id)arg10 itemNames:(id)arg11 dataRepresentation:(id)arg12 originIdentifier:(id)arg13 sourceType:(NSInteger)arg14 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif