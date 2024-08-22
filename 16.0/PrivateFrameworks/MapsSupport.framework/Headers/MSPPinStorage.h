// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPPINSTORAGE_H
#define MSPPINSTORAGE_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;


#import "MSPDroppedPin.h"

@interface MSPPinStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (retain, nonatomic) MSPDroppedPin *droppedPin; // ivar: _droppedPin
@property (readonly, nonatomic) BOOL hasDroppedPin;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat position; // ivar: _position
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif