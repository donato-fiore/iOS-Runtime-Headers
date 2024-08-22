// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREUMRESPONSEITEM_H
#define PREUMRESPONSEITEM_H

@class PBCodable;
@protocol NSCopying;



@interface PREUMResponseItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsCustomResponse;
@property (nonatomic) BOOL hasModelId;
@property (nonatomic) BOOL hasReplyTextId;
@property (nonatomic) BOOL hasResponseClassId;
@property (nonatomic) BOOL isCustomResponse; // ivar: _isCustomResponse
@property (nonatomic) unsigned int modelId; // ivar: _modelId
@property (nonatomic) unsigned int replyTextId; // ivar: _replyTextId
@property (nonatomic) unsigned int responseClassId; // ivar: _responseClassId


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