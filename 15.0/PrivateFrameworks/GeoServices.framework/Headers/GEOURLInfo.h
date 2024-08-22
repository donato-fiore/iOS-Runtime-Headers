// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOURLINFO_H
#define GEOURLINFO_H

@class PBCodable, PBUnknownFields, NSString, NSURL;
@protocol NSCopying;



@interface GEOURLInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _alternativeMultipathTCPPort;
    BOOL _supportsMultipathTCP;
    BOOL _useAuthProxy;
    ? _flags;
}


@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (nonatomic) BOOL hasAlternativeMultipathTCPPort;
@property (nonatomic) BOOL hasSupportsMultipathTCP;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) BOOL hasUseAuthProxy;
@property (readonly, nonatomic) NSURL *nsURL;
@property (nonatomic) BOOL supportsMultipathTCP;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL useAuthProxy;


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