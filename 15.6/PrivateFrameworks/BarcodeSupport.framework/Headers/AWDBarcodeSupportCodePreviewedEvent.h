// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDBARCODESUPPORTCODEPREVIEWEDEVENT_H
#define AWDBARCODESUPPORTCODEPREVIEWEDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDBarcodeSupportCodePreviewedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPreviewContentType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int previewContentType; // ivar: _previewContentType
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)previewContentTypeAsString:(int)arg0 ;
-(int)StringAsPreviewContentType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif