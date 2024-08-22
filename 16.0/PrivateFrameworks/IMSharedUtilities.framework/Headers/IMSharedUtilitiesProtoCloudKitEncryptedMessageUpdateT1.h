// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEUPDATET1_H
#define IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEUPDATET1_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageUpdateT1 : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMsgid;
@property (readonly, nonatomic) BOOL hasPadding;
@property (readonly, nonatomic) BOOL hasThreadGuid;
@property (readonly, nonatomic) BOOL hasThreadPart;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *msgid; // ivar: _msgid
@property (retain, nonatomic) NSData *padding; // ivar: _padding
@property (retain, nonatomic) NSString *threadGuid; // ivar: _threadGuid
@property (retain, nonatomic) NSString *threadPart; // ivar: _threadPart
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