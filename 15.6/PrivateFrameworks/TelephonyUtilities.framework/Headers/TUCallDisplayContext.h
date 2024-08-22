// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLDISPLAYCONTEXT_H
#define TUCALLDISPLAYCONTEXT_H

@class NSString, NSArray, NSPersonNameComponents;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *callDirectoryExtensionIdentifier; // ivar: _callDirectoryExtensionIdentifier
@property (copy, nonatomic) NSString *callDirectoryLabel; // ivar: _callDirectoryLabel
@property (copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName; // ivar: _callDirectoryLocalizedExtensionContainingAppName
@property (copy, nonatomic) NSString *companyName; // ivar: _companyName
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (copy, nonatomic) NSString *contactLabel; // ivar: _contactLabel
@property (copy, nonatomic) NSString *contactName; // ivar: _contactName
@property (readonly, copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int legacyAddressBookIdentifier; // ivar: _legacyAddressBookIdentifier
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (copy, nonatomic) NSString *mapName; // ivar: _mapName
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents; // ivar: _personNameComponents
@property (copy, nonatomic) NSString *suggestedName; // ivar: _suggestedName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayContextByMergingWithDisplayContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif