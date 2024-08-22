// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATENEARBYTRANSIT_H
#define GEOLOGMSGSTATENEARBYTRANSIT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgStateNearbyTransit : PBCodable <NSCopying>

 {
    NSMutableArray *_groups;
    unsigned int _pinnedLines;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *groups;
@property (nonatomic) BOOL hasPinnedLines;
@property (nonatomic) unsigned int pinnedLines;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addGroups:(id)arg0 ;
-(void)clearGroups;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif