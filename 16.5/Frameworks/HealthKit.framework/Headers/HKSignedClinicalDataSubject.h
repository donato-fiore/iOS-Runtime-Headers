// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATASUBJECT_H
#define HKSIGNEDCLINICALDATASUBJECT_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKMedicalDate.h"

@interface HKSignedClinicalDataSubject : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, copy, nonatomic) HKMedicalDate *birthDate; // ivar: _birthDate
@property (readonly, copy, nonatomic) NSString *birthSex; // ivar: _birthSex
@property (readonly, copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) NSString *ethnicity; // ivar: _ethnicity
@property (readonly, copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, copy, nonatomic) NSString *gender; // ivar: _gender
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly, copy, nonatomic) NSString *maritalStatus; // ivar: _maritalStatus
@property (readonly, copy, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, copy, nonatomic) NSString *race; // ivar: _race


+(BOOL)supportsSecureCoding;
+(id)subjectWithFullName:(id)arg0 birthDate:(id)arg1 gender:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 ;
+(id)subjectWithFullName:(id)arg0 birthDate:(id)arg1 gender:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 identifiers:(id)arg5 addresses:(id)arg6 maritalStatus:(id)arg7 race:(id)arg8 ethnicity:(id)arg9 birthSex:(id)arg10 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullName:(id)arg0 birthDate:(id)arg1 gender:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 identifiers:(id)arg5 addresses:(id)arg6 maritalStatus:(id)arg7 race:(id)arg8 ethnicity:(id)arg9 birthSex:(id)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif