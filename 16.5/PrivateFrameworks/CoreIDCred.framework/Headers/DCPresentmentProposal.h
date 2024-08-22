// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCPRESENTMENTPROPOSAL_H
#define DCPRESENTMENTPROPOSAL_H

@class NSData, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DCPresentmentProposalReaderMetadata.h"

@interface DCPresentmentProposal : NSObject <NSSecureCoding>



@property (retain) NSData *authACL; // ivar: _authACL
@property (retain) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain) NSString *docType; // ivar: _docType
@property (retain) NSDictionary *elements; // ivar: _elements
@property (retain) NSString *partition; // ivar: _partition
@property (retain) NSString *presentmentKeyIdentifier; // ivar: _presentmentKeyIdentifier
@property (retain) NSData *presentmentPublicKey; // ivar: _presentmentPublicKey
@property (retain, nonatomic) NSData *readerAuthCertificateData; // ivar: _readerAuthCertificateData
@property (readonly) NSString *readerIdentifier;
@property (retain, nonatomic) DCPresentmentProposalReaderMetadata *readerMetadata; // ivar: _readerMetadata
@property (readonly) NSString *readerOrganization;
@property (readonly) NSString *readerOrganizationalUnit;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialIdentifier:(id)arg0 presentmentKeyIdentifier:(id)arg1 presentmentPublicKey:(id)arg2 partition:(id)arg3 docType:(id)arg4 elements:(id)arg5 authACL:(id)arg6 readerAuthCertificateData:(id)arg7 readerMetadata:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif