// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISPURCHASERECEIPT_H
#define ISPURCHASERECEIPT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ISPurchaseReceipt : NSObject {
    NSString *_cancellationReason;
    NSDate *_receiptCreationDate;
    NSDate *_renewalDate;
}


@property (readonly) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) BOOL isRevoked;
@property (readonly) BOOL isVPPLicensed;


+(id)receiptWithContentsOfFile:(id)arg0 ;
-(BOOL)_anchorTrust:(struct __SecTrust *)arg0 toRootCertificateIn:(struct __CFArray *)arg1 ;
-(BOOL)_checkArray:(struct __CFArray *)arg0 containsCertificateWithOID:(struct __CFString *)arg1 ;
-(BOOL)_checkIfCertificate:(struct __SecCertificate *)arg0 containsOID:(struct __CFString *)arg1 ;
-(BOOL)_decodeReceiptData:(id)arg0 toDecodedMessage:(struct SecCmsMessageStr **)arg1 ;
-(BOOL)_parseReceiptFromMessage:(struct SecCmsMessageStr *)arg0 ;
-(BOOL)_setPoliciesForTrust:(struct __SecTrust *)arg0 ;
-(NSInteger)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)arg0 onDate:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)arg0 ;
-(struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)arg0 ;
-(void)_parseTokens:(id)arg0 ;


@end


#endif