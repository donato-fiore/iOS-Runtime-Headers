// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPNOTIFICATIONSYNCRESPONSE_H
#define CKDPNOTIFICATIONSYNCRESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface CKDPNotificationSyncResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *changeID; // ivar: _changeID
@property (readonly, nonatomic) BOOL hasChangeID;
@property (nonatomic) BOOL hasMoreAvailable;
@property (nonatomic) BOOL moreAvailable; // ivar: _moreAvailable
@property (retain, nonatomic) NSMutableArray *pushMessages; // ivar: _pushMessages


+(Class)pushMessageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pushMessageAtIndex:(NSUInteger)arg0 ;
-(void)addPushMessage:(id)arg0 ;
-(void)clearPushMessages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif