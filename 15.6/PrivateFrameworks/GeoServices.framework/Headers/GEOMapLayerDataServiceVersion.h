// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPLAYERDATASERVICEVERSION_H
#define GEOMAPLAYERDATASERVICEVERSION_H

@class PBCodable;
@protocol NSCopying;



@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying>

 {
    unsigned int _dataVersion;
    unsigned int _formatVersion;
    unsigned int _patchVersion;
    ? _flags;
}




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