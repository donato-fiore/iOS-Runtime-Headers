// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUMUTABLECALLDISPLAYCONTEXT_H
#define TUMUTABLECALLDISPLAYCONTEXT_H

@class NSString, NSArray, NSPersonNameComponents;


#import "TUCallDisplayContext.h"

@interface TUMutableCallDisplayContext : TUCallDisplayContext

@property (copy, nonatomic) NSString *callDirectoryExtensionIdentifier;
@property (copy, nonatomic) NSString *callDirectoryLabel;
@property (copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int legacyAddressBookIdentifier;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *mapName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property (copy, nonatomic) NSString *suggestedName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)mergeValuesFromDisplayContext:(id)arg0 ;


@end


#endif