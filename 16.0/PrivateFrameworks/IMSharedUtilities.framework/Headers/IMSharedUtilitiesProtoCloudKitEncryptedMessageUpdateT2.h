// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEUPDATET2_H
#define IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEUPDATET2_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageUpdateT2 : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMsgid;
@property (readonly, nonatomic) BOOL hasPadding;
@property (readonly, nonatomic) BOOL hasSr;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *msgid; // ivar: _msgid
@property (retain, nonatomic) NSData *padding; // ivar: _padding
@property (retain, nonatomic) NSString *sr; // ivar: _sr
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif