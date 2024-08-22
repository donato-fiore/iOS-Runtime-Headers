// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCLINICALCONTACT_H
#define _HKCLINICALCONTACT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _HKClinicalContact : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *nameContactIdentifier; // ivar: _nameContactIdentifier
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *phoneNumberContactIdentifier; // ivar: _phoneNumberContactIdentifier
@property (copy, nonatomic) NSString *phoneNumberLabel; // ivar: _phoneNumberLabel
@property (copy, nonatomic) NSString *relationship; // ivar: _relationship


+(BOOL)supportsSecureCoding;
+(id)clinicalContactWithContact:(id)arg0 property:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSyncedContact:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif