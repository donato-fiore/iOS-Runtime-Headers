// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HWPDRAWING_H
#define HWPDRAWING_H

@class PBCodable, PBUnknownFields, NSData;
@protocol NSCopying;



@interface HWPDrawing : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (nonatomic) int compressionAlgorithm; // ivar: _compressionAlgorithm
@property (nonatomic) unsigned int decompressedLength; // ivar: _decompressedLength
@property (retain, nonatomic) NSData *encodedCanvasSize; // ivar: _encodedCanvasSize
@property (retain, nonatomic) NSData *encodedStrokesFrame; // ivar: _encodedStrokesFrame
@property (nonatomic) BOOL hasCompressionAlgorithm;
@property (nonatomic) BOOL hasDecompressedLength;
@property (readonly, nonatomic) BOOL hasEncodedCanvasSize;
@property (readonly, nonatomic) BOOL hasEncodedStrokesFrame;
@property (nonatomic) BOOL hasStrokeDataFieldCount;
@property (readonly, nonatomic) BOOL hasStrokes;
@property (nonatomic) BOOL hasStrokesCount;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int strokeDataFieldCount; // ivar: _strokeDataFieldCount
@property (retain, nonatomic) NSData *strokes; // ivar: _strokes
@property (nonatomic) unsigned int strokesCount; // ivar: _strokesCount
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)compressionAlgorithmAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCompressionAlgorithm:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif