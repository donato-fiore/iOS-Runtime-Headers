// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSAUTHENTICATIONCERTIFICATE_H
#define IDSAUTHENTICATIONCERTIFICATE_H

@class NSData;

#import <Foundation/Foundation.h>

#import "IDSServerCertificate.h"

@interface IDSAuthenticationCertificate : NSObject

@property (readonly, nonatomic) IDSServerCertificate *backingCertificate; // ivar: _backingCertificate
@property (readonly, nonatomic) NSData *dataRepresentation;


-(id)description;
-(id)initWithBackingCertificate:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;


@end


#endif