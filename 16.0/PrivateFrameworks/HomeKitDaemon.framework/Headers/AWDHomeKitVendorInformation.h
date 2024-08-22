// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITVENDORINFORMATION_H
#define AWDHOMEKITVENDORINFORMATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitVendorInformation : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasProductData;
@property (retain, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *productData; // ivar: _productData


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