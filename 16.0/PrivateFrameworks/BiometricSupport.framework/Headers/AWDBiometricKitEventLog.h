// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDBIOMETRICKITEVENTLOG_H
#define AWDBIOMETRICKITEVENTLOG_H

@class PBCodable;
@protocol NSCopying;



@interface AWDBiometricKitEventLog : PBCodable <NSCopying>

 {
    ? _events;
    ? _has;
}


@property (readonly, nonatomic) *unsigned int events;
@property (readonly, nonatomic) NSUInteger eventsCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)eventAtIndex:(NSUInteger)arg0 ;
-(void)addEvent:(unsigned int)arg0 ;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif