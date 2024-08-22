// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETSCHEMANETDEBUGSESSIONCONNECTIONPINGINFO_H
#define NETSCHEMANETDEBUGSESSIONCONNECTIONPINGINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETDebugSessionConnectionPingInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMeanPingInMs;
@property (nonatomic) BOOL hasPingCount;
@property (nonatomic) BOOL hasUnacknowledgedPingCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat meanPingInMs; // ivar: _meanPingInMs
@property (nonatomic) unsigned int pingCount; // ivar: _pingCount
@property (nonatomic) unsigned int unacknowledgedPingCount; // ivar: _unacknowledgedPingCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMeanPingInMs;
-(void)deletePingCount;
-(void)deleteUnacknowledgedPingCount;
-(void)writeTo:(id)arg0 ;


@end


#endif