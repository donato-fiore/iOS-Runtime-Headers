// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INRESTAURANTGUEST_H
#define INRESTAURANTGUEST_H

@class NSString;
@protocol INRestaurantGuestExport;


#import "INPerson.h"

@interface INRestaurantGuest : INPerson <INRestaurantGuestExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithUserInput:(id)arg0 personHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 relationship:(id)arg7 aliases:(id)arg8 suggestionType:(NSInteger)arg9 isMe:(BOOL)arg10 scoredAlternatives:(id)arg11 sourceAppBundleIdentifier:(id)arg12 phonemeData:(id)arg13 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNameComponents:(id)arg0 phoneNumber:(id)arg1 emailAddress:(id)arg2 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 isMe:(BOOL)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif