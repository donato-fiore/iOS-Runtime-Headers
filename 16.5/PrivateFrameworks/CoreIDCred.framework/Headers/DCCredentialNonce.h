// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCCREDENTIALNONCE_H
#define DCCREDENTIALNONCE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialNonce : NSObject <NSSecureCoding>



@property (readonly) NSData *credentialNonce; // ivar: _credentialNonce


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialNonce:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif