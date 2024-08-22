// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCODABLECLOUDKITNOTIFICATIONEVENT_H
#define ASCODABLECLOUDKITNOTIFICATIONEVENT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ASCodableCloudKitNotificationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasTriggerSnapshotIndex;
@property (readonly, nonatomic) BOOL hasTriggerUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger triggerSnapshotIndex; // ivar: _triggerSnapshotIndex
@property (retain, nonatomic) NSData *triggerUUID; // ivar: _triggerUUID
@property (nonatomic) NSInteger type; // ivar: _type


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