// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPMERCHANTLOOKUPCONTEXT_H
#define GEORPMERCHANTLOOKUPCONTEXT_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"
#import "GEOLocation.h"

@interface GEORPMerchantLookupContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_correlationId;
    NSString *_merchantAdamId;
    NSString *_merchantFormattedAddress;
    GEOPDMapsIdentifier *_merchantId;
    NSString *_merchantIndustryCategory;
    NSInteger _merchantIndustryCode;
    NSString *_merchantName;
    NSString *_merchantRawName;
    NSString *_merchantUrl;
    GEOLocation *_transactionLocation;
    CGFloat _transactionTime;
    NSString *_transactionType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _requestTransactionType;
    BOOL _isAppleCard;
    ? _flags;
}


@property (retain, nonatomic) NSString *correlationId;
@property (readonly, nonatomic) BOOL hasCorrelationId;
@property (nonatomic) BOOL hasIsAppleCard;
@property (readonly, nonatomic) BOOL hasMerchantAdamId;
@property (readonly, nonatomic) BOOL hasMerchantFormattedAddress;
@property (readonly, nonatomic) BOOL hasMerchantId;
@property (readonly, nonatomic) BOOL hasMerchantIndustryCategory;
@property (nonatomic) BOOL hasMerchantIndustryCode;
@property (readonly, nonatomic) BOOL hasMerchantName;
@property (readonly, nonatomic) BOOL hasMerchantRawName;
@property (readonly, nonatomic) BOOL hasMerchantUrl;
@property (nonatomic) BOOL hasRequestTransactionType;
@property (readonly, nonatomic) BOOL hasTransactionLocation;
@property (nonatomic) BOOL hasTransactionTime;
@property (readonly, nonatomic) BOOL hasTransactionType;
@property (nonatomic) BOOL isAppleCard;
@property (retain, nonatomic) NSString *merchantAdamId;
@property (retain, nonatomic) NSString *merchantFormattedAddress;
@property (retain, nonatomic) GEOPDMapsIdentifier *merchantId;
@property (retain, nonatomic) NSString *merchantIndustryCategory;
@property (nonatomic) NSInteger merchantIndustryCode;
@property (retain, nonatomic) NSString *merchantName;
@property (retain, nonatomic) NSString *merchantRawName;
@property (retain, nonatomic) NSString *merchantUrl;
@property (nonatomic) int requestTransactionType;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (nonatomic) CGFloat transactionTime;
@property (retain, nonatomic) NSString *transactionType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestTransactionTypeAsString:(int)arg0 ;
-(int)StringAsRequestTransactionType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif