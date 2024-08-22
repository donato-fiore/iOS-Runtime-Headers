// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSPURCHASEOFFERSITEM_H
#define COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSPURCHASEOFFERSITEM_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSPurchaseOffersItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (nonatomic) BOOL hasPurchaseType;
@property (retain, nonatomic) NSString *purchaseId; // ivar: _purchaseId
@property (nonatomic) int purchaseType; // ivar: _purchaseType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)purchaseTypeAsString:(int)arg0 ;
-(int)StringAsPurchaseType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif