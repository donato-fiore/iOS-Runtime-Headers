// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKPROTOMESSAGESTATUSUPDATE_H
#define NNMKPROTOMESSAGESTATUSUPDATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NNMKProtoMessageStatusUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL hasStatusVersion;
@property (nonatomic) BOOL hasUpdatedStatus;
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (nonatomic) unsigned int statusVersion; // ivar: _statusVersion
@property (nonatomic) unsigned int updatedStatus; // ivar: _updatedStatus


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