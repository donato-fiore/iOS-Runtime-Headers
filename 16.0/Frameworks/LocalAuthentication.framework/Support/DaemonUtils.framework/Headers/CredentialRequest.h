// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CREDENTIALREQUEST_H
#define CREDENTIALREQUEST_H

@class LASecureData;


#import "Request.h"

@interface CredentialRequest : Request

@property (readonly, nonatomic) LASecureData *credentialData; // ivar: _credentialData
@property (readonly, nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (readonly, nonatomic) BOOL readOnly; // ivar: _readOnly


-(id)initWithCredential:(NSInteger)arg0 value:(id)arg1 readOnly:(BOOL)arg2 ;


@end


#endif