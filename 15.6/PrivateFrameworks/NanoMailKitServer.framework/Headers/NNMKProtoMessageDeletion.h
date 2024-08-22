// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOMESSAGEDELETION_H
#define NNMKPROTOMESSAGEDELETION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NNMKProtoMessageDeletion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int deletionState; // ivar: _deletionState
@property (nonatomic) BOOL hasDeletionState;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId


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