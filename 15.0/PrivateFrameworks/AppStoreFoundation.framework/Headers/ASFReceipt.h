// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFRECEIPT_H
#define ASFRECEIPT_H

@class NSMutableArray, NSString, NSData, NSDate, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface ASFReceipt : NSObject {
    BOOL _verbose;
    NSMutableArray *_mutableIAPs;
}


@property (readonly) NSString *bundleID; // ivar: _bundleID
@property (readonly) NSData *bundleIDData; // ivar: _bundleIDData
@property (readonly) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly) NSString *cancellationReason; // ivar: _cancellationReason
@property (readonly) NSDate *creationDate; // ivar: _creationDate
@property (readonly) NSString *developerID; // ivar: _developerID
@property (readonly) NSString *downloadID; // ivar: _downloadID
@property (readonly) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSString *frAppVersion; // ivar: _frAppVersion
@property (readonly) NSNumber *frToolVersion; // ivar: _frToolVersion
@property (readonly) NSString *hwtype; // ivar: _hwtype
@property (readonly) NSArray *iaps; // ivar: _iaps
@property (readonly) NSString *installerVersionID; // ivar: _installerVersionID
@property (readonly) BOOL isDSIDless;
@property (readonly) BOOL isRevoked;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) NSNumber *itemID; // ivar: _itemID
@property (readonly) NSData *opaqueDSIDData; // ivar: _opaqueDSIDData
@property (readonly) NSString *opaqueDSIDString; // ivar: _opaqueDSIDString
@property (readonly) NSString *organizationDisplayName; // ivar: _organizationDisplayName
@property (readonly) NSString *parentalControls; // ivar: _parentalControls
@property (readonly) NSString *path; // ivar: _path
@property (readonly) NSDate *purchaseDate; // ivar: _purchaseDate
@property (readonly) NSData *receiptData;
@property (readonly) NSString *receiptDataString;
@property (readonly) NSString *receiptType; // ivar: _receiptType
@property (readonly) NSDate *renewalDate; // ivar: _renewalDate
@property (readonly) NSData *sha1; // ivar: _sha1


+(id)_receiptURLForBundleURL:(id)arg0 ;
+(id)_receiptURLFromRecordWithBundleURL:(id)arg0 ;
+(id)receiptFromBundleAtPath:(id)arg0 ;
+(id)receiptFromBundleAtURL:(id)arg0 ;
+(id)receiptWithContentsOfFile:(id)arg0 ;
+(id)receiptWithData:(id)arg0 ;
-(BOOL)_decodeIAPReceiptData:(id)arg0 ;
-(BOOL)_decodeReceiptData:(id)arg0 toDecodedMessage:(struct SecCmsMessageStr **)arg1 ;
-(BOOL)_parseReceiptFromMessage:(struct SecCmsMessageStr *)arg0 ;
-(BOOL)_setPoliciesForTrust:(struct __SecTrust *)arg0 ;
-(NSInteger)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)arg0 onDate:(id)arg1 ;
-(id)_parseIAPTokens:(id)arg0 ;
-(id)_parseIAPsFromDataRef:(struct __CFData *)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)arg0 ;
-(struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)arg0 ;
-(void)_log:(id)arg0 ;
-(void)_log:(id)arg0 arg:(id)arg1 ;
-(void)_logError:(id)arg0 ;
-(void)_parseTokens:(id)arg0 ;


@end


#endif