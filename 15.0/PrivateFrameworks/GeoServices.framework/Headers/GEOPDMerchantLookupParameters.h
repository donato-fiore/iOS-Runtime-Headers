// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDMERCHANTLOOKUPPARAMETERS_H
#define GEOPDMERCHANTLOOKUPPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOPDAdamAppIdentifier.h"
#import "GEOPDMerchantInformation.h"
#import "GEOLocation.h"
#import "GEOPDWarsawMerchantIdentifier.h"

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    NSString *_industryCategory;
    NSInteger _industryCode;
    NSString *_merchantCode;
    GEOPDMerchantInformation *_merchantInformation;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    NSString *_terminalId;
    NSString *_transactionCurrencyCode;
    NSString *_transactionId;
    CGFloat _transactionLocationAge;
    GEOLocation *_transactionLocation;
    CGFloat _transactionTimestamp;
    GEOPDWarsawMerchantIdentifier *_warsawMerchantIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _transactionStatus;
    int _transactionType;
    BOOL _coarseLocationUsed;
    BOOL _enableBrandMuidFallback;
    BOOL _fuzzyMatched;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif