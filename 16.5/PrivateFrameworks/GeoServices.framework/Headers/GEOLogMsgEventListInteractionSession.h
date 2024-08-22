// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTLISTINTERACTIONSESSION_H
#define GEOLOGMSGEVENTLISTINTERACTIONSESSION_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_listResultItems;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _listType;
    ? _flags;
}


@property (nonatomic) BOOL hasListType;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSMutableArray *listResultItems;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSString *searchString;


+(BOOL)isValid:(id)arg0 ;
+(Class)listResultItemType;
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
-(id)listResultItemAtIndex:(NSUInteger)arg0 ;
-(id)listTypeAsString:(int)arg0 ;
-(int)StringAsListType:(id)arg0 ;
-(void)addListResultItem:(id)arg0 ;
-(void)clearListResultItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif