// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNINSTANTMESSAGEADDRESS_H
#define CNINSTANTMESSAGEADDRESS_H

@class NSArray, NSString;
@protocol CNObjectValidation, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNInstantMessageAddress : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
+(id)Username:(SEL)arg0 ;
+(id)instantMessageAddressWithDictionaryRepresentation:(id)arg0 ;
+(id)localizedStringForKey:(id)arg0 ;
+(id)localizedStringForService:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsername:(id)arg0 service:(id)arg1 ;
-(id)initWithUsername:(id)arg0 userIdentifier:(id)arg1 service:(id)arg2 teamIdentifier:(id)arg3 bundleIdentifiers:(id)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif