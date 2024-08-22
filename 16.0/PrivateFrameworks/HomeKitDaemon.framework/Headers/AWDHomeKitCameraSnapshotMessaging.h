// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITCAMERASNAPSHOTMESSAGING_H
#define AWDHOMEKITCAMERASNAPSHOTMESSAGING_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasReceivedSnapshotRequest;
@property (nonatomic) BOOL hasSentSnapshotRequest;
@property (nonatomic) BOOL hasSentSnapshotResponse;
@property (nonatomic) unsigned int receivedSnapshotRequest; // ivar: _receivedSnapshotRequest
@property (nonatomic) unsigned int sentSnapshotRequest; // ivar: _sentSnapshotRequest
@property (nonatomic) unsigned int sentSnapshotResponse; // ivar: _sentSnapshotResponse


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