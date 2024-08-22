// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMASERVEREVENTMETADATA_H
#define SISCHEMASERVEREVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaServerEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasServerPod; // ivar: _hasServerPod
@property (nonatomic) BOOL hasSiriDeviceID; // ivar: _hasSiriDeviceID
@property (nonatomic) BOOL hasTimestampNs;
@property (nonatomic) BOOL hasTurnID; // ivar: _hasTurnID
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *serverPod; // ivar: _serverPod
@property (copy, nonatomic) NSData *siriDeviceID; // ivar: _siriDeviceID
@property (nonatomic) NSInteger timestampNs; // ivar: _timestampNs
@property (copy, nonatomic) NSData *turnID; // ivar: _turnID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif