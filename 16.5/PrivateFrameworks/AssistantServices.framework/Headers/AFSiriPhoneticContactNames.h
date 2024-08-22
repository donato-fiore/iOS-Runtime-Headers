// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRIPHONETICCONTACTNAMES_H
#define AFSIRIPHONETICCONTACTNAMES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AFSiriPhoneticContactNames : NSObject

@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (copy, nonatomic) NSString *nickname; // ivar: _nickname
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName


-(id)spokenName;


@end


#endif