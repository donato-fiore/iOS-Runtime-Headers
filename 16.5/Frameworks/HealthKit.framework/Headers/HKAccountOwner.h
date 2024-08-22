// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKACCOUNTOWNER_H
#define HKACCOUNTOWNER_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalDate.h"
#import "HKAccountOwnerType.h"

@interface HKAccountOwner : HKMedicalRecord <NSSecureCoding, NSCopying>

 {
    NSString *_name;
    HKMedicalDate *_birthDate;
}


@property (readonly, copy) HKAccountOwnerType *accountOwnerType;
@property (readonly, copy) HKMedicalDate *birthDate;
@property (readonly, copy) NSString *name;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newAccountOwnerWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 name:(id)arg12 birthDate:(id)arg13 config:(id)arg14 ;
+(id)accountOwnerWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 name:(id)arg11 birthDate:(id)arg12 ;
+(id)accountOwnerWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 name:(id)arg12 birthDate:(id)arg13 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif