// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBSTOREBOOKMARK_H
#define BMPBSTOREBOOKMARK_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBStoreBookmark : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIterationStartTime;
@property (nonatomic) BOOL hasOffset;
@property (readonly, nonatomic) BOOL hasSegmentName;
@property (readonly, nonatomic) BOOL hasStreamId;
@property (nonatomic) CGFloat iterationStartTime; // ivar: _iterationStartTime
@property (nonatomic) unsigned int offset; // ivar: _offset
@property (retain, nonatomic) NSString *segmentName; // ivar: _segmentName
@property (retain, nonatomic) NSString *streamId; // ivar: _streamId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif