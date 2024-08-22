// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDVISUALIDENTIFIERVIEWPERSON_H
#define GDVISUALIDENTIFIERVIEWPERSON_H

@class NSDateComponents, NSArray;


#import "GDPerson.h"
#import "GDPersonNameComponents.h"

@interface GDVisualIdentifierViewPerson : GDPerson

@property (readonly, nonatomic) NSDateComponents *anniversary;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSArray *conversationIdentifiers;
@property (readonly, nonatomic) NSDateComponents *dateOfBirth;
@property (readonly, nonatomic) NSArray *emails;
@property (retain, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) GDPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSDateComponents *nonGregorianDateOfBirth;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *postalAddressLinks;
@property (readonly, nonatomic) NSArray *relatedPeople;
@property (readonly, nonatomic) NSArray *visualIdentifierObjects;
@property (readonly, nonatomic) NSArray *visualIdentifiers;


-(id)description;
-(id)shortArrayDescription:(id)arg0 ;


@end


#endif