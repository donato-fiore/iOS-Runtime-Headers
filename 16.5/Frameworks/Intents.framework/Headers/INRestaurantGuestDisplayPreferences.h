// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRESTAURANTGUESTDISPLAYPREFERENCES_H
#define INRESTAURANTGUESTDISPLAYPREFERENCES_H

@class NSString;
@protocol INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emailAddressEditable; // ivar: _emailAddressEditable
@property (nonatomic) BOOL emailAddressFieldShouldBeDisplayed; // ivar: _emailAddressFieldShouldBeDisplayed
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL nameEditable; // ivar: _nameEditable
@property (nonatomic) BOOL nameFieldFirstNameOptional; // ivar: _nameFieldFirstNameOptional
@property (nonatomic) BOOL nameFieldLastNameOptional; // ivar: _nameFieldLastNameOptional
@property (nonatomic) BOOL nameFieldShouldBeDisplayed; // ivar: _nameFieldShouldBeDisplayed
@property (nonatomic) BOOL phoneNumberEditable; // ivar: _phoneNumberEditable
@property (nonatomic) BOOL phoneNumberFieldShouldBeDisplayed; // ivar: _phoneNumberFieldShouldBeDisplayed
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif