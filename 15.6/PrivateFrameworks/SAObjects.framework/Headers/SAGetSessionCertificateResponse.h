// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAGETSESSIONCERTIFICATERESPONSE_H
#define SAGETSESSIONCERTIFICATERESPONSE_H

@class NSData;


#import "SABaseClientBoundCommand.h"

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *certificate;


+(id)getSessionCertificateResponse;
+(id)getSessionCertificateResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif