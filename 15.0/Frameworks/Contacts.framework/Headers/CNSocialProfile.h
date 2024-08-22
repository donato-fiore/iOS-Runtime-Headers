// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSOCIALPROFILE_H
#define CNSOCIALPROFILE_H

@class NSArray, NSString;
@protocol CNObjectValidation, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayname; // ivar: _displayname
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (copy, nonatomic) NSString *urlString; // ivar: _urlString
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
+(id)Username:(SEL)arg0 ;
+(id)localizedStringForKey:(id)arg0 ;
+(id)localizedStringForService:(id)arg0 ;
+(id)socialProfileWithDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ignoreURLs:(BOOL)arg1 ;
-(BOOL)isValid:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUrlString:(id)arg0 username:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 ;
-(id)initWithUrlString:(id)arg0 username:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 displayname:(id)arg4 ;
-(id)initWithUrlString:(id)arg0 username:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 displayname:(id)arg4 teamIdentifier:(id)arg5 bundleIdentifiers:(id)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif