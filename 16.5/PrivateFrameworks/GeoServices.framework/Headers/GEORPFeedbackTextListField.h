// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKTEXTLISTFIELD_H
#define GEORPFEEDBACKTEXTLISTFIELD_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEORPFeedbackTextListField : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_addeds;
    NSMutableArray *_originals;
    NSMutableArray *_removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *addeds;
@property (retain, nonatomic) NSMutableArray *originals;
@property (retain, nonatomic) NSMutableArray *removeds;


+(BOOL)isValid:(id)arg0 ;
+(Class)addedType;
+(Class)originalType;
+(Class)removedType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addedAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)originalAtIndex:(NSUInteger)arg0 ;
-(id)removedAtIndex:(NSUInteger)arg0 ;
-(void)addAdded:(id)arg0 ;
-(void)addOriginal:(id)arg0 ;
-(void)addRemoved:(id)arg0 ;
-(void)clearAddeds;
-(void)clearOriginals;
-(void)clearRemoveds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif