// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRAFFICCAMERAINFORMATION_H
#define GEOTRAFFICCAMERAINFORMATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOTrafficCameraInformation : PBCodable <NSCopying>

 {
    NSString *_cameraIdentifier;
    int _cameraType;
    ? _flags;
}


@property (retain, nonatomic) NSString *cameraIdentifier;
@property (nonatomic) int cameraType;
@property (readonly, nonatomic) BOOL hasCameraIdentifier;
@property (nonatomic) BOOL hasCameraType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cameraTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsCameraType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif