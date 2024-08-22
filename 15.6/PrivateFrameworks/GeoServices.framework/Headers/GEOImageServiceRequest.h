// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOIMAGESERVICEREQUEST_H
#define GEOIMAGESERVICEREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface GEOImageServiceRequest : PBRequest <NSCopying>

 {
    NSMutableArray *_imageIds;
    unsigned int _height;
    unsigned int _width;
    ? _flags;
}


@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSMutableArray *imageIds;
@property (nonatomic) unsigned int width;


+(BOOL)isValid:(id)arg0 ;
+(Class)imageIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imageIdAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)requestTypeCode;
-(void)addImageId:(id)arg0 ;
-(void)clearImageIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif