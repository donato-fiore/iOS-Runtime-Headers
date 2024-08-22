// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXAPPLICATIONIDENTITY_H
#define IXAPPLICATIONIDENTITY_H

@class MIAppIdentity, NSString;
@protocol NSCopying, NSSecureCoding;



@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL isPersonalPersonaPlaceholder; // ivar: _isPersonalPersonaPlaceholder
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)identitiesForBundleIdentifiers:(id)arg0 ;
-(id)canonicalSerializationForPlistKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 personaUniqueString:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlistKeySerialization:(id)arg0 ;
-(id)possibleSerializationsForPlistKey;


@end


#endif