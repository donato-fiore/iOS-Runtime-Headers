// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMLIBRARYSELECTIONIDENTITY_H
#define CAMLIBRARYSELECTIONIDENTITY_H

@class NSArray, NSString;
@protocol CAMLibrarySelectionIdentityProtocol;

#import <Foundation/Foundation.h>


@interface CAMLibrarySelectionIdentity : NSObject <CAMLibrarySelectionIdentityProtocol>



@property (readonly) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) NSString *phoneNumber; // ivar: _phoneNumber


+(id)identityWithDevice:(id)arg0 ;
+(id)identityWithPerson:(id)arg0 ;
+(id)identityWithPhotosIdentity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPhoneNumber:(id)arg0 emailAddress:(id)arg1 contactIdentifiers:(id)arg2 ;


@end


#endif