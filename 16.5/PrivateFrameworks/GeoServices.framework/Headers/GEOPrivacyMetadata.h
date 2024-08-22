// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPRIVACYMETADATA_H
#define GEOPRIVACYMETADATA_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPrivacyMetadata : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    BOOL _isManagedAccount;
    BOOL _isMismatchedStorefrontDeviceRegion;
    BOOL _isSharedIpadForEducation;
    BOOL _isUnderageAccount;
    ? _flags;
}


@property (nonatomic) BOOL hasIsManagedAccount;
@property (nonatomic) BOOL hasIsMismatchedStorefrontDeviceRegion;
@property (nonatomic) BOOL hasIsSharedIpadForEducation;
@property (nonatomic) BOOL hasIsUnderageAccount;
@property (nonatomic) BOOL isManagedAccount;
@property (nonatomic) BOOL isMismatchedStorefrontDeviceRegion;
@property (nonatomic) BOOL isSharedIpadForEducation;
@property (nonatomic) BOOL isUnderageAccount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif