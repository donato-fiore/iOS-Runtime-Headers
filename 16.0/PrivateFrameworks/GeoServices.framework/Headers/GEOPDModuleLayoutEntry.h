// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDMODULELAYOUTENTRY_H
#define GEOPDMODULELAYOUTENTRY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_applicationIds;
    NSString *_debugLayoutId;
    NSMutableArray *_modules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _platformType;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *applicationIds;
@property (retain, nonatomic) NSString *debugLayoutId;
@property (readonly, nonatomic) BOOL hasDebugLayoutId;
@property (nonatomic) BOOL hasPlatformType;
@property (retain, nonatomic) NSMutableArray *modules;
@property (nonatomic) int platformType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)applicationIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicationIdAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)modulesAtIndex:(NSUInteger)arg0 ;
-(id)platformTypeAsString:(int)arg0 ;
-(int)StringAsPlatformType:(id)arg0 ;
-(void)addApplicationId:(id)arg0 ;
-(void)addModules:(id)arg0 ;
-(void)clearApplicationIds;
-(void)clearModules;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif