// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKVERIFIABLECLINICALRECORDSUBJECT_H
#define HKVERIFIABLECLINICALRECORDSUBJECT_H

@class NSDateComponents, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKVerifiableClinicalRecordSubject : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSDateComponents *dateOfBirthComponents; // ivar: _dateOfBirthComponents
@property (readonly, copy) NSString *fullName; // ivar: _fullName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullName:(id)arg0 dateOfBirthComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif