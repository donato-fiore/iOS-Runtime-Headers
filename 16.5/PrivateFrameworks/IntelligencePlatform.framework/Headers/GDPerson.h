// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDPERSON_H
#define GDPERSON_H

@class NSDateComponents, NSArray;
@protocol GDTripleIteratorEntityRenderer, GDEntity;

#import <Foundation/Foundation.h>

#import "GDEntityIdentifier.h"
#import "GDPersonNameComponents.h"

@interface GDPerson : NSObject <GDTripleIteratorEntityRenderer, GDEntity>



@property (readonly, nonatomic) NSDateComponents *anniversary; // ivar: _anniversary
@property (readonly, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (readonly, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, nonatomic) NSArray *conversationIdentifiers; // ivar: _conversationIdentifiers
@property (readonly, nonatomic) NSArray *customIdentifiers; // ivar: _customIdentifiers
@property (readonly, nonatomic) NSDateComponents *dateOfBirth; // ivar: _dateOfBirth
@property (readonly, nonatomic) NSArray *emails; // ivar: _emails
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) GDPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (readonly, nonatomic) NSArray *names; // ivar: _names
@property (readonly, nonatomic) NSDateComponents *nonGregorianDateOfBirth; // ivar: _nonGregorianDateOfBirth
@property (readonly, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) NSArray *postalAddressLinks; // ivar: _postalAddressLinks
@property (readonly, nonatomic) NSArray *relatedPeople; // ivar: _relatedPeople
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSArray *visualIdentifierObjects; // ivar: _visualIdentifierObjects
@property (readonly, nonatomic) NSArray *visualIdentifiers; // ivar: _visualIdentifiers


+(NSUInteger)triplesColumnsRequiredForRendering;
-(id)dateComponentsFromJSONString:(id)arg0 ;
-(id)description;
-(id)initWithTriplesIterator:(id)arg0 ;


@end


#endif