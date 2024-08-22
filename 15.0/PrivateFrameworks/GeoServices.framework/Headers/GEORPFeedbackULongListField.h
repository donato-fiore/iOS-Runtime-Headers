// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKULONGLISTFIELD_H
#define GEORPFEEDBACKULONGLISTFIELD_H

@class PBCodable, PBDataReader;
@protocol NSCopying;



@interface GEORPFeedbackULongListField : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _addeds;
    ? _originals;
    ? _removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *NSUInteger addeds;
@property (readonly, nonatomic) NSUInteger addedsCount;
@property (readonly, nonatomic) *NSUInteger originals;
@property (readonly, nonatomic) NSUInteger originalsCount;
@property (readonly, nonatomic) *NSUInteger removeds;
@property (readonly, nonatomic) NSUInteger removedsCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)addedAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)originalAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)removedAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAdded:(NSUInteger)arg0 ;
-(void)addOriginal:(NSUInteger)arg0 ;
-(void)addRemoved:(NSUInteger)arg0 ;
-(void)clearAddeds;
-(void)clearOriginals;
-(void)clearRemoveds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif