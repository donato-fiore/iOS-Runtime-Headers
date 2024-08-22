// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTILESET_H
#define GEOTILESET_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOTileSet : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_baseURL;
    NSMutableArray *_countryRegionAllowlists;
    NSMutableArray *_deviceSKUAllowlists;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    NSMutableArray *_supportedLanguages;
    NSMutableArray *_validVersions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _alternativeMultipathTCPPort;
    int _checksumType;
    unsigned int _dataSet;
    int _requestStyle;
    int _scale;
    int _size;
    int _style;
    int _updateBehavior;
    BOOL _multiTileURLUsesStatusCodes;
    BOOL _supportsMultipathTCP;
    BOOL _useAuthProxy;
    ? _flags;
}


@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (retain, nonatomic) NSString *baseURL;
@property (nonatomic) int checksumType;
@property (retain, nonatomic) NSMutableArray *countryRegionAllowlists;
@property (nonatomic) unsigned int dataSet;
@property (retain, nonatomic) NSMutableArray *deviceSKUAllowlists;
@property (nonatomic) BOOL hasAlternativeMultipathTCPPort;
@property (readonly, nonatomic) BOOL hasBaseURL;
@property (nonatomic) BOOL hasChecksumType;
@property (nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasLocalizationURL;
@property (readonly, nonatomic) BOOL hasMultiTileURL;
@property (nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property (nonatomic) BOOL hasRequestStyle;
@property (nonatomic) BOOL hasSupportsMultipathTCP;
@property (nonatomic) BOOL hasUpdateBehavior;
@property (nonatomic) BOOL hasUseAuthProxy;
@property (retain, nonatomic) NSString *localizationURL;
@property (retain, nonatomic) NSString *multiTileURL;
@property (nonatomic) BOOL multiTileURLUsesStatusCodes;
@property (nonatomic) int requestStyle;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (nonatomic) int style;
@property (retain, nonatomic) NSMutableArray *supportedLanguages;
@property (nonatomic) BOOL supportsMultipathTCP;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int updateBehavior;
@property (nonatomic) BOOL useAuthProxy;
@property (retain, nonatomic) NSMutableArray *validVersions;


+(BOOL)isValid:(id)arg0 ;
+(Class)countryRegionAllowlistType;
+(Class)deviceSKUAllowlistType;
+(Class)supportedLanguageType;
+(Class)validVersionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)checksumTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countryRegionAllowlistAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)deviceSKUAllowlistAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestStyleAsString:(int)arg0 ;
-(id)scaleAsString:(int)arg0 ;
-(id)sizeAsString:(int)arg0 ;
-(id)styleAsString:(int)arg0 ;
-(id)supportedLanguageAtIndex:(NSUInteger)arg0 ;
-(id)updateBehaviorAsString:(int)arg0 ;
-(id)validVersionAtIndex:(NSUInteger)arg0 ;
-(int)StringAsChecksumType:(id)arg0 ;
-(int)StringAsRequestStyle:(id)arg0 ;
-(int)StringAsScale:(id)arg0 ;
-(int)StringAsSize:(id)arg0 ;
-(int)StringAsStyle:(id)arg0 ;
-(int)StringAsUpdateBehavior:(id)arg0 ;
-(void)addCountryRegionAllowlist:(id)arg0 ;
-(void)addDeviceSKUAllowlist:(id)arg0 ;
-(void)addSupportedLanguage:(id)arg0 ;
-(void)addValidVersion:(id)arg0 ;
-(void)clearCountryRegionAllowlists;
-(void)clearDeviceSKUAllowlists;
-(void)clearSupportedLanguages;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearValidVersions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif