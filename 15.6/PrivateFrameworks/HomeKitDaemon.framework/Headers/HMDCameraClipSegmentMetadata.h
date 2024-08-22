// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERACLIPSEGMENTMETADATA_H
#define HMDCAMERACLIPSEGMENTMETADATA_H

@class PBCodable;
@protocol NSCopying;



@interface HMDCameraClipSegmentMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger byteLength; // ivar: _byteLength
@property (nonatomic) NSUInteger byteOffset; // ivar: _byteOffset
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasByteLength;
@property (nonatomic) BOOL hasByteOffset;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasTimeOffset;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int height; // ivar: _height
@property (nonatomic) CGFloat timeOffset; // ivar: _timeOffset
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) unsigned int width; // ivar: _width


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