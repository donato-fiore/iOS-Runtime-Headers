// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUNKNOWNRECORD_H
#define HKUNKNOWNRECORD_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKUnknownRecordType.h"

@interface HKUnknownRecord : HKMedicalRecord <NSSecureCoding, NSCopying>

 {
    NSString *_displayName;
}


@property (readonly, copy) NSString *displayName;
@property (readonly, copy) HKUnknownRecordType *unknownRecordType;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newUnknownRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 displayName:(id)arg12 config:(id)arg13 ;
+(id)defaultDisplayString;
+(id)unknownRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 displayName:(id)arg11 ;
+(id)unknownRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 displayName:(id)arg12 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSInteger)recordCategoryType;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fallbackDisplayString;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif