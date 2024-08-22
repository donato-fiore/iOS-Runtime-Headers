// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAKEYINFORMATION_H
#define DAKEYINFORMATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DAAlishaKeyInformation.h"
#import "DAHomeKeyInformation.h"
#import "DAHydraKeyInformation.h"

@interface DAKeyInformation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) DAAlishaKeyInformation *alishaKeyInformation; // ivar: _alishaKeyInformation
@property (readonly, nonatomic) DAHomeKeyInformation *homeKeyInformation; // ivar: _homeKeyInformation
@property (readonly, nonatomic) DAHydraKeyInformation *hydraKeyInformation; // ivar: _hydraKeyInformation
@property (readonly, nonatomic) NSInteger keyType; // ivar: _keyType
@property (readonly, nonatomic) NSString *publicKeyIdentifier; // ivar: _publicKeyIdentifier


+(BOOL)supportsSecureCoding;
+(id)alishaKeyWithPublicKeyIdentifier:(id)arg0 alishaKeyInformation:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif