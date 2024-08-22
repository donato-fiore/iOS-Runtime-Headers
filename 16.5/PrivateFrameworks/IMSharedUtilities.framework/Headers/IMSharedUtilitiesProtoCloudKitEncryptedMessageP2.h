// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEP2_H
#define IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGEP2_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP2 : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPadding;
@property (readonly, nonatomic) BOOL hasThreadIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSData *padding; // ivar: _padding
@property (retain, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
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