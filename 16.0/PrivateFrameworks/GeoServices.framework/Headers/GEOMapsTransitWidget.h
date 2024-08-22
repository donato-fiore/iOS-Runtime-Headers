// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPSTRANSITWIDGET_H
#define GEOMAPSTRANSITWIDGET_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOMapsTransitWidget : PBCodable <NSCopying>

 {
    NSMutableArray *_transitIncidentItems;
    int _tappedItemIndex;
    int _transitMessageType;
    BOOL _everExpanded;
    BOOL _initiallyExpanded;
    ? _flags;
}


@property (nonatomic) BOOL everExpanded;
@property (nonatomic) BOOL hasEverExpanded;
@property (nonatomic) BOOL hasInitiallyExpanded;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) BOOL hasTransitMessageType;
@property (nonatomic) BOOL initiallyExpanded;
@property (nonatomic) int tappedItemIndex;
@property (retain, nonatomic) NSMutableArray *transitIncidentItems;
@property (nonatomic) int transitMessageType;


+(BOOL)isValid:(id)arg0 ;
+(Class)transitIncidentItemType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)transitIncidentItemAtIndex:(NSUInteger)arg0 ;
-(id)transitMessageTypeAsString:(int)arg0 ;
-(int)StringAsTransitMessageType:(id)arg0 ;
-(void)addTransitIncidentItem:(id)arg0 ;
-(void)clearTransitIncidentItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif