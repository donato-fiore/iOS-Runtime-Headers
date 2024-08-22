// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATION_H
#define AKAUTHORIZATION_H

@protocol NSSecureCoding, AKCredentialRequestProtocol, AKCredential;

#import <Foundation/Foundation.h>


@interface AKAuthorization : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<AKCredentialRequestProtocol> *authorizedRequest; // ivar: _authorizedRequest
@property (retain, nonatomic) NSObject<AKCredential> *credential; // ivar: _credential


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif