// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCAUTHENTICATIONREQUEST_H
#define BCAUTHENTICATIONREQUEST_H

@class NSString, NSDictionary;
@protocol BCDictionarySerializable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BCOAuth2Parameters.h"

@interface BCAuthenticationRequest : NSObject <BCDictionarySerializable, NSSecureCoding>

 {
    NSString *_businessIdentifier;
    BCOAuth2Parameters *_oauth2;
}


@property (readonly, nonatomic) NSString *businessIdentifier;
@property (readonly, nonatomic) NSString *businessName; // ivar: _businessName
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) BCOAuth2Parameters *oauth2;


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif