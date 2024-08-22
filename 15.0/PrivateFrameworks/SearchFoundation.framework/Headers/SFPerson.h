// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPERSON_H
#define SFPERSON_H

@class NSString, NSDictionary, NSArray, NSData;
@protocol SFPerson, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFPerson : NSObject <SFPerson, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (copy, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif