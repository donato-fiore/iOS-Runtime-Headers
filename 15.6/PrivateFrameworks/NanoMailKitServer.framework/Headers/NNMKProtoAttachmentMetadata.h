// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOATTACHMENTMETADATA_H
#define NNMKPROTOATTACHMENTMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) unsigned int fileSize; // ivar: _fileSize
@property (readonly, nonatomic) BOOL hasContentId;
@property (readonly, nonatomic) BOOL hasFileName;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) BOOL hasImageHeight;
@property (nonatomic) BOOL hasImageWidth;
@property (readonly, nonatomic) BOOL hasMimePartNumber;
@property (nonatomic) BOOL hasRenderOnClient;
@property (nonatomic) BOOL hasType;
@property (nonatomic) float imageHeight; // ivar: _imageHeight
@property (nonatomic) float imageWidth; // ivar: _imageWidth
@property (retain, nonatomic) NSString *mimePartNumber; // ivar: _mimePartNumber
@property (nonatomic) BOOL renderOnClient; // ivar: _renderOnClient
@property (nonatomic) unsigned int type; // ivar: _type


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