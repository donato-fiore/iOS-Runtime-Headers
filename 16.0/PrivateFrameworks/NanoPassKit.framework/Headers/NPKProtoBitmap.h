// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOBITMAP_H
#define NPKPROTOBITMAP_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoBitmap : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *bitmapData; // ivar: _bitmapData
@property (nonatomic) unsigned int bitmapInfo; // ivar: _bitmapInfo
@property (nonatomic) NSUInteger bitsPerComponent; // ivar: _bitsPerComponent
@property (nonatomic) NSUInteger bitsPerPixel; // ivar: _bitsPerPixel
@property (nonatomic) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) NSUInteger width; // ivar: _width


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