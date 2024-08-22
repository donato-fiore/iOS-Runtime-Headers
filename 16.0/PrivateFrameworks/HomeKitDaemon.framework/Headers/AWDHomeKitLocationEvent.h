// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITLOCATIONEVENT_H
#define AWDHOMEKITLOCATIONEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitLocationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNotifyOnEntry;
@property (nonatomic) BOOL hasNotifyOnExit;
@property (nonatomic) BOOL notifyOnEntry; // ivar: _notifyOnEntry
@property (nonatomic) BOOL notifyOnExit; // ivar: _notifyOnExit


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