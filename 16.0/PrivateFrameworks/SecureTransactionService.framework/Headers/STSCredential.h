// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSCREDENTIAL_H
#define STSCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSCredential : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *subIdentifier; // ivar: _subIdentifier
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)credentialWithType:(unsigned char)arg0 identifier:(id)arg1 subIdentifier:(id)arg2 ;
+(id)unifiedAccessCredentialWithAID:(id)arg0 publicKeyIdentifier:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 identifier:(id)arg1 subIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif