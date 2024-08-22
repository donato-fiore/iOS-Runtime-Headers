// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPUBLICKEYCREDENTIALIDENTIFIER_H
#define WBSPUBLICKEYCREDENTIALIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSPublicKeyCredentialIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *credentialID; // ivar: _credentialID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif