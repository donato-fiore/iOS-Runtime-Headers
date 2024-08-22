// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOAVAILABLEPRODUCTSRESPONSE_H
#define NPKPROTOAVAILABLEPRODUCTSRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoAvailableProductsResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *availableProductsData; // ivar: _availableProductsData
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasAvailableProductsData;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending; // ivar: _pending


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif