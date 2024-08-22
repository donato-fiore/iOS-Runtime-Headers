// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONTACTSDATAPROVIDERRESULT_H
#define TUCONTACTSDATAPROVIDERRESULT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TUContactsDataProviderResult : NSObject

@property (copy, nonatomic) NSString *companyName; // ivar: _companyName
@property (copy, nonatomic) NSString *contactLabel; // ivar: _contactLabel
@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (nonatomic) int legacyAddressBookIdentifier; // ivar: _legacyAddressBookIdentifier
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName


-(id)description;


@end


#endif