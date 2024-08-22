// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMECONTACT_H
#define SGMECONTACT_H

@class CNContact, NSSet, NSString;

#import <Foundation/Foundation.h>


@interface SGMeContact : NSObject {
    CNContact *_meContact;
}


@property (readonly, nonatomic) NSSet *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, nonatomic) NSString *formattedName; // ivar: _formattedName
@property (readonly, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, nonatomic) NSSet *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) NSSet *postalAddresses; // ivar: _postalAddresses
@property (readonly, nonatomic) NSSet *socialProfileIdentifiers; // ivar: _socialProfileIdentifiers


+(id)keysToFetch;
-(BOOL)isSameAsOrUnifiedWithContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;


@end


#endif