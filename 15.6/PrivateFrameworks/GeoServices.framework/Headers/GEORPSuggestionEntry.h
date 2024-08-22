// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPSUGGESTIONENTRY_H
#define GEORPSUGGESTIONENTRY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEORPSuggestionEntry : PBCodable <NSCopying>

 {
    NSMutableArray *_displayLines;
    unsigned int _serverSearchCompletionEntryIndex;
    unsigned int _serverSearchCompletionSectionIndex;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *displayLines;
@property (nonatomic) BOOL hasServerSearchCompletionEntryIndex;
@property (nonatomic) BOOL hasServerSearchCompletionSectionIndex;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int serverSearchCompletionEntryIndex;
@property (nonatomic) unsigned int serverSearchCompletionSectionIndex;
@property (nonatomic) int type;


+(BOOL)isValid:(id)arg0 ;
+(Class)displayLineType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayLineAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addDisplayLine:(id)arg0 ;
-(void)clearDisplayLines;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif