// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSE_BITACORA_PROTOLIGHTHOUSELEDGERTRIALDEVENT_H
#define LIGHTHOUSE_BITACORA_PROTOLIGHTHOUSELEDGERTRIALDEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers.h"

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialdEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contextID; // ivar: _contextID
@property (nonatomic) BOOL eventSucceeded; // ivar: _eventSucceeded
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasContextID;
@property (nonatomic) BOOL hasEventSucceeded;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTrialIdentifiers;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers; // ivar: _trialIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif