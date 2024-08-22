// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSISO18013CREDREQUEST_H
#define STSISO18013CREDREQUEST_H

@class NSDictionary, NSData, ISO18013TerminalAuthInfo;
@protocol NSSecureCoding;


#import "STSCredentialRequest.h"

@interface STSISO18013CredRequest : STSCredentialRequest <NSSecureCoding>

 {
    NSDictionary *_requestByNamespace;
    NSData *_authACL;
    ISO18013TerminalAuthInfo *_readerAuthInfo;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif