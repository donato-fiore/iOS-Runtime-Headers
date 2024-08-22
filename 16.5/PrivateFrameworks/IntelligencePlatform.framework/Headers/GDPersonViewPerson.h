// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDPERSONVIEWPERSON_H
#define GDPERSONVIEWPERSON_H

@class NSDateComponents, NSArray;


#import "GDPerson.h"
#import "GDPersonNameComponents.h"

@interface GDPersonViewPerson : GDPerson

@property (readonly, nonatomic) NSDateComponents *dateOfBirth;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) GDPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSInteger type;


-(id)description;


@end


#endif