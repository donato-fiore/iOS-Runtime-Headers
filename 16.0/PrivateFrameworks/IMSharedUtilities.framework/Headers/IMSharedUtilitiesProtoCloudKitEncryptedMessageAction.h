// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEACTION_H
#define IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEACTION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMessageActionType;
@property (readonly, nonatomic) BOOL hasOriginalMessageGuid;
@property (readonly, nonatomic) BOOL hasOtherHandle;
@property (readonly, nonatomic) BOOL hasPadding;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSInteger messageActionType; // ivar: _messageActionType
@property (retain, nonatomic) NSString *originalMessageGuid; // ivar: _originalMessageGuid
@property (retain, nonatomic) NSString *otherHandle; // ivar: _otherHandle
@property (retain, nonatomic) NSData *padding; // ivar: _padding
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