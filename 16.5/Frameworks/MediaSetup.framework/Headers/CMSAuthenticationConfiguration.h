// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSAUTHENTICATIONCONFIGURATION_H
#define CMSAUTHENTICATIONCONFIGURATION_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSAuthenticationConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSURL *authorizationURL; // ivar: _authorizationURL
@property (readonly) NSString *clientID; // ivar: _clientID
@property (readonly) NSString *clientSecret; // ivar: _clientSecret
@property (readonly) NSString *scope; // ivar: _scope


+(BOOL)supportsSecureCoding;
+(id)authConfigurationFromMSAuthData:(id)arg0 ;
+(id)authConfigurationWithClientID:(id)arg0 clientSecret:(id)arg1 authorizationURL:(id)arg2 scope:(id)arg3 ;
-(id)basicPropertiesDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientID:(id)arg0 clientSecret:(id)arg1 authorizationURL:(id)arg2 scope:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif