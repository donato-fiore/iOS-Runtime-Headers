// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPASSWORDCREDENTIAL_H
#define _SFPASSWORDCREDENTIAL_H

@class SFCredential, NSString;



@interface _SFPasswordCredential : SFCredential {
    NSString *_username;
    NSString *_password;
}


@property (copy, nonatomic, getter=_cachedPassword) NSString *password;
@property (copy, nonatomic) NSString *username;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithUsername:(id)arg0 primaryServiceIdentifier:(id)arg1 supplementaryServiceIdentifiers:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionShowingPassword:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsername:(id)arg0 password:(id)arg1 primaryServiceIdentifier:(id)arg2 ;
-(id)initWithUsername:(id)arg0 password:(id)arg1 primaryServiceIdentifier:(id)arg2 supplementaryServiceIdentifiers:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)usePasswordWithHandler:(id)arg0 ;


@end


#endif