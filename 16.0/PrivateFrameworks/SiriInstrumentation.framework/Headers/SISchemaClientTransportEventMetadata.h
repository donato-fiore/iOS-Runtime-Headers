// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMACLIENTTRANSPORTEVENTMETADATA_H
#define SISCHEMACLIENTTRANSPORTEVENTMETADATA_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaClientTransportEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *arrivedServerPod; // ivar: _arrivedServerPod
@property (nonatomic) NSInteger eventTransmittedRelativeToBootTimeTimestampNs; // ivar: _eventTransmittedRelativeToBootTimeTimestampNs
@property (copy, nonatomic) NSString *eventTransmittedTimestampRefId; // ivar: _eventTransmittedTimestampRefId
@property (nonatomic) BOOL hasArrivedServerPod; // ivar: _hasArrivedServerPod
@property (nonatomic) BOOL hasEventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) BOOL hasEventTransmittedTimestampRefId; // ivar: _hasEventTransmittedTimestampRefId
@property (nonatomic) BOOL hasServerArrivedTimestampNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSInteger serverArrivedTimestampNs; // ivar: _serverArrivedTimestampNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteArrivedServerPod;
-(void)deleteEventTransmittedRelativeToBootTimeTimestampNs;
-(void)deleteEventTransmittedTimestampRefId;
-(void)deleteServerArrivedTimestampNs;
-(void)writeTo:(id)arg0 ;


@end


#endif