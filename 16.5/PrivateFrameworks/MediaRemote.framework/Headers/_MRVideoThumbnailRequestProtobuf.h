// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRVIDEOTHUMBNAILREQUESTPROTOBUF_H
#define _MRVIDEOTHUMBNAILREQUESTPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying>

 {
    ? _timeIntervals;
    ? _has;
}


@property (nonatomic) BOOL hasThumbnailsHeight;
@property (nonatomic) BOOL hasThumbnailsWidth;
@property (nonatomic) float thumbnailsHeight; // ivar: _thumbnailsHeight
@property (nonatomic) float thumbnailsWidth; // ivar: _thumbnailsWidth
@property (readonly, nonatomic) *CGFloat timeIntervals;
@property (readonly, nonatomic) NSUInteger timeIntervalsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)timeIntervalsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addTimeIntervals:(CGFloat)arg0 ;
-(void)clearTimeIntervals;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif