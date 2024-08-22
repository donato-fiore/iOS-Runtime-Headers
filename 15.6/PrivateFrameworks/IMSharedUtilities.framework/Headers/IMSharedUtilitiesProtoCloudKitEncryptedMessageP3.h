// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEP3_H
#define IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEP3_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP3 : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int cmmAssetOffset; // ivar: _cmmAssetOffset
@property (nonatomic) unsigned int cmmState; // ivar: _cmmState
@property (nonatomic) BOOL hasCmmAssetOffset;
@property (nonatomic) BOOL hasCmmState;
@property (readonly, nonatomic) BOOL hasPadding;
@property (nonatomic) BOOL hasVersion;
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