// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPDEBUGSETTINGS_H
#define GEORPDEBUGSETTINGS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEORPDebugSettings : PBCodable <NSCopying>

 {
    NSMutableArray *_keywords;
    int _mode;
    ? _flags;
}


@property (nonatomic) BOOL hasMode;
@property (retain, nonatomic) NSMutableArray *keywords;
@property (nonatomic) int mode;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)keywordsAtIndex:(NSUInteger)arg0 ;
-(id)modeAsString:(int)arg0 ;
-(int)StringAsMode:(id)arg0 ;
-(void)addKeywords:(id)arg0 ;
-(void)clearKeywords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif