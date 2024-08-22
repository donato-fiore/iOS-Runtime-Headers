// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCONTACTCARD_H
#define INCONTACTCARD_H

@class NSDateComponents, NSString, NSArray, NSPersonNameComponents;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"

@interface INContactCard : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateComponents *birthday; // ivar: _birthday
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy, nonatomic) NSArray *contactRelations; // ivar: _contactRelations
@property (readonly, copy, nonatomic) NSArray *dates; // ivar: _dates
@property (readonly, copy, nonatomic) NSString *departmentName; // ivar: _departmentName
@property (readonly, copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) INImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSArray *instantMessageAddresses; // ivar: _instantMessageAddresses
@property (readonly, nonatomic) BOOL isMe; // ivar: _isMe
@property (readonly, copy, nonatomic) NSString *jobTitle; // ivar: _jobTitle
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (readonly, copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, copy, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, copy, nonatomic) NSArray *postalAddresses; // ivar: _postalAddresses
@property (readonly, copy, nonatomic) NSArray *urlAddresses; // ivar: _urlAddresses


+(BOOL)supportsSecureCoding;
+(id)initWithContactIdentifier:(id)arg0 nameComponents:(id)arg1 isMe:(BOOL)arg2 image:(id)arg3 organizationName:(id)arg4 departmentName:(id)arg5 jobTitle:(id)arg6 phoneNumbers:(id)arg7 emailAddresses:(id)arg8 postalAddresses:(id)arg9 urlAddresses:(id)arg10 contactRelations:(id)arg11 instantMessageAddresses:(id)arg12 birthday:(id)arg13 dates:(id)arg14 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 nameComponents:(id)arg1 isMe:(BOOL)arg2 image:(id)arg3 organizationName:(id)arg4 departmentName:(id)arg5 jobTitle:(id)arg6 phoneNumbers:(id)arg7 emailAddresses:(id)arg8 postalAddresses:(id)arg9 urlAddresses:(id)arg10 contactRelations:(id)arg11 instantMessageAddresses:(id)arg12 birthday:(id)arg13 dates:(id)arg14 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif