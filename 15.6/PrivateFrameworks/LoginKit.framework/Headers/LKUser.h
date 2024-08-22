// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKUSER_H
#define LKUSER_H

@class UMMutableUser, CNContact, NSString, NSURL, NSDate, NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;



@interface LKUser : UMMutableUser <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isAttemptedPhoneticTranscription; // ivar: _isAttemptedPhoneticTranscription
@property (nonatomic) BOOL isPhoneticInfoProvidedInConfiguration; // ivar: _isPhoneticInfoProvidedInConfiguration
@property (retain, nonatomic) NSURL *largeImageURL; // ivar: _largeImageURL
@property (retain, nonatomic) NSDate *lastOnlineAuth; // ivar: _lastOnlineAuth
@property (retain, nonatomic) NSURL *localLargeImageURL; // ivar: _localLargeImageURL
@property (retain, nonatomic) NSURL *localMediumImageURL; // ivar: _localMediumImageURL
@property (retain, nonatomic) NSURL *mediumImageURL; // ivar: _mediumImageURL
@property (retain, nonatomic) NSMutableDictionary *namingSimilarityInfoByClassID; // ivar: _namingSimilarityInfoByClassID
@property (nonatomic) NSUInteger passwordType; // ivar: _passwordType
@property (retain, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (retain, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (retain, nonatomic) NSString *tokenizedPhoneticDisplayName; // ivar: _tokenizedPhoneticDisplayName


+(BOOL)supportsSecureCoding;
+(NSUInteger)LKPasswordTypeFromUMUserPasscodeType:(NSUInteger)arg0 ;
+(NSUInteger)UMUserPasscodeTypeFromLKPasswordType:(NSUInteger)arg0 ;
+(NSUInteger)passwordTypeFromPasswordTypeString:(id)arg0 ;
+(id)fullNameWithFamilyName:(id)arg0 givenName:(id)arg1 ;
+(id)userFromDictionary:(id)arg0 ;
+(id)userFromUMUser:(id)arg0 ;
+(void)setAutogeneratesPhoneticNameWithLocale:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLKUser:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDiffUMUserPropertiesFromUMUser:(id)arg0 ;


@end


#endif