// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTPROACTIVESUGGESTIONINTERACTIONSESSION_H
#define GEOLOGMSGEVENTPROACTIVESUGGESTIONINTERACTIONSESSION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying>

 {
    NSMutableArray *_proactiveItems;
    int _duration;
    int _interactedItemIndex;
    int _listType;
    ? _flags;
}


@property (nonatomic) int duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasInteractedItemIndex;
@property (nonatomic) BOOL hasListType;
@property (nonatomic) int interactedItemIndex;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *proactiveItems;


+(BOOL)isValid:(id)arg0 ;
+(Class)proactiveItemType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)listTypeAsString:(int)arg0 ;
-(id)proactiveItemAtIndex:(NSUInteger)arg0 ;
-(int)StringAsListType:(id)arg0 ;
-(void)addProactiveItem:(id)arg0 ;
-(void)clearProactiveItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif