// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBTOMBSTONEEVENT_H
#define BMPBTOMBSTONEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBTombstoneEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasOffset;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) BOOL hasSegmentName;
@property (nonatomic) unsigned int length; // ivar: _length
@property (nonatomic) unsigned int offset; // ivar: _offset
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) int reason; // ivar: _reason
@property (retain, nonatomic) NSString *segmentName; // ivar: _segmentName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonAsString:(int)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif