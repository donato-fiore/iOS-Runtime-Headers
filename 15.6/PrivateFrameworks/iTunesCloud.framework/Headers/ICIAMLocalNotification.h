// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICIAMLOCALNOTIFICATION_H
#define ICIAMLOCALNOTIFICATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ICIAMLocalNotification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasInterval;
@property (readonly, nonatomic) BOOL hasNotification;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (retain, nonatomic) NSString *notification; // ivar: _notification
@property (nonatomic) int trigger; // ivar: _trigger


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)triggerAsString:(int)arg0 ;
-(int)StringAsTrigger:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif