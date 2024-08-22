// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPOICLAIM_H
#define GEOPDPOICLAIM_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOPDPOIClaim : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_claimUrl;
    BOOL _isClaimable;
    BOOL _isClaimed;
    ? _flags;
}




+(id)poiClaimForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif