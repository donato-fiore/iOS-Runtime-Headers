// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATEPLACESUMMARYLAYOUT_H
#define GEOLOGMSGSTATEPLACESUMMARYLAYOUT_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgStatePlaceSummaryLayout : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _muids;
    NSMutableArray *_dynamicContextHyperlinkDetails;
    NSMutableArray *_trailingEntityActionDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *dynamicContextHyperlinkDetails;
@property (readonly, nonatomic) *NSUInteger muids;
@property (readonly, nonatomic) NSUInteger muidsCount;
@property (retain, nonatomic) NSMutableArray *trailingEntityActionDetails;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)muidsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dynamicContextHyperlinkDetailsAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)trailingEntityActionDetailsAtIndex:(NSUInteger)arg0 ;
-(void)addDynamicContextHyperlinkDetails:(id)arg0 ;
-(void)addMuids:(NSUInteger)arg0 ;
-(void)addTrailingEntityActionDetails:(id)arg0 ;
-(void)clearDynamicContextHyperlinkDetails;
-(void)clearMuids;
-(void)clearTrailingEntityActionDetails;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif