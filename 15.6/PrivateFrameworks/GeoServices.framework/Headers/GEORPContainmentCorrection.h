// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPCONTAINMENTCORRECTION_H
#define GEORPCONTAINMENTCORRECTION_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;



@interface GEORPContainmentCorrection : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _addedMuids;
    ? _originalMuids;
    ? _removedMuids;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *NSUInteger addedMuids;
@property (readonly, nonatomic) NSUInteger addedMuidsCount;
@property (readonly, nonatomic) *NSUInteger originalMuids;
@property (readonly, nonatomic) NSUInteger originalMuidsCount;
@property (readonly, nonatomic) *NSUInteger removedMuids;
@property (readonly, nonatomic) NSUInteger removedMuidsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)addedMuidAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)originalMuidAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)removedMuidAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAddedMuid:(NSUInteger)arg0 ;
-(void)addOriginalMuid:(NSUInteger)arg0 ;
-(void)addRemovedMuid:(NSUInteger)arg0 ;
-(void)clearAddedMuids;
-(void)clearOriginalMuids;
-(void)clearRemovedMuids;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif