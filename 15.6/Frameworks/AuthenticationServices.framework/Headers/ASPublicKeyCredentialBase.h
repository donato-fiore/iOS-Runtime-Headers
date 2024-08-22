// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPUBLICKEYCREDENTIALBASE_H
#define ASPUBLICKEYCREDENTIALBASE_H

@class NSData, NSString;
@protocol ASPublicKeyCredential;

#import <Foundation/Foundation.h>


@interface ASPublicKeyCredentialBase : NSObject <ASPublicKeyCredential>



@property (readonly, copy, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON; // ivar: _rawClientDataJSON
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialID:(id)arg0 rawClientDataJSON:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif