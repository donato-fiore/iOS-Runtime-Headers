// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBPURCHASEOFFERABLECONFIGURATION_H
#define NTPBPURCHASEOFFERABLECONFIGURATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowsPublisherPadApp; // ivar: _allowsPublisherPadApp
@property (nonatomic) BOOL allowsPublisherPhoneApp; // ivar: _allowsPublisherPhoneApp
@property (nonatomic) BOOL allowsPublisherWebSite; // ivar: _allowsPublisherWebSite
@property (nonatomic) BOOL hasAllowsPublisherPadApp;
@property (nonatomic) BOOL hasAllowsPublisherPhoneApp;
@property (nonatomic) BOOL hasAllowsPublisherWebSite;
@property (nonatomic) BOOL hasPreferredOffer;
@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (nonatomic) BOOL preferredOffer; // ivar: _preferredOffer
@property (retain, nonatomic) NSString *purchaseId; // ivar: _purchaseId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif