// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITEVENTTRIGGEREVENT_H
#define AWDHOMEKITEVENTTRIGGEREVENT_H

@class PBCodable;
@protocol NSCopying;


#import "AWDHomeKitCalendarEvent.h"
#import "AWDHomeKitCharacteristicEvent.h"
#import "AWDHomeKitCharacteristicThresholdEvent.h"
#import "AWDHomeKitDurationEvent.h"
#import "AWDHomeKitLocationEvent.h"
#import "AWDHomeKitPresenceEvent.h"
#import "AWDHomeKitSignificantTimeEvent.h"

@interface AWDHomeKitEventTriggerEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) AWDHomeKitCalendarEvent *calendarEvent; // ivar: _calendarEvent
@property (retain, nonatomic) AWDHomeKitCharacteristicEvent *charEvent; // ivar: _charEvent
@property (retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *charThresholdEvent; // ivar: _charThresholdEvent
@property (retain, nonatomic) AWDHomeKitDurationEvent *durationEvent; // ivar: _durationEvent
@property (nonatomic) BOOL endEvent; // ivar: _endEvent
@property (readonly, nonatomic) BOOL hasCalendarEvent;
@property (readonly, nonatomic) BOOL hasCharEvent;
@property (readonly, nonatomic) BOOL hasCharThresholdEvent;
@property (readonly, nonatomic) BOOL hasDurationEvent;
@property (nonatomic) BOOL hasEndEvent;
@property (readonly, nonatomic) BOOL hasLocationEvent;
@property (readonly, nonatomic) BOOL hasPresenceEvent;
@property (readonly, nonatomic) BOOL hasSignificantTimeEvent;
@property (readonly, nonatomic) BOOL hasThresholdEvent;
@property (retain, nonatomic) AWDHomeKitLocationEvent *locationEvent; // ivar: _locationEvent
@property (retain, nonatomic) AWDHomeKitPresenceEvent *presenceEvent; // ivar: _presenceEvent
@property (retain, nonatomic) AWDHomeKitSignificantTimeEvent *significantTimeEvent; // ivar: _significantTimeEvent
@property (retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *thresholdEvent; // ivar: _thresholdEvent


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