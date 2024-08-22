// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBFACEGALLERYEVENT_H
#define ATXPBFACEGALLERYEVENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "ATXPBFaceGalleryConfiguration.h"

@interface ATXPBFaceGalleryEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXPBFaceGalleryConfiguration *configuration; // ivar: _configuration
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (nonatomic) BOOL hasEventType;
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)clearItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif