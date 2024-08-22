// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPUSERPATH_H
#define GEORPUSERPATH_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEORPUserPath : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _nativePaths;
    NSMutableArray *_webPaths;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int nativePaths;
@property (readonly, nonatomic) NSUInteger nativePathsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *webPaths;


+(BOOL)isValid:(id)arg0 ;
+(Class)webPathType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)nativePathsAsString:(int)arg0 ;
-(id)webPathAtIndex:(NSUInteger)arg0 ;
-(int)StringAsNativePaths:(id)arg0 ;
-(int)nativePathAtIndex:(NSUInteger)arg0 ;
-(void)addNativePath:(int)arg0 ;
-(void)addWebPath:(id)arg0 ;
-(void)clearNativePaths;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearWebPaths;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif