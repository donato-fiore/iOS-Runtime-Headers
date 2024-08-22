// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERPROTOSERVERMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOSERVERMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HMDRemoteEventRouterProtoChangeRegistrationsResponse.h"
#import "HMDRemoteEventRouterProtoConnectResponse.h"
#import "HMDRemoteEventRouterProtoEventsMessage.h"

@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HMDRemoteEventRouterProtoChangeRegistrationsResponse *changeRegistrationsResponse; // ivar: _changeRegistrationsResponse
@property (retain, nonatomic) HMDRemoteEventRouterProtoConnectResponse *connectResponse; // ivar: _connectResponse
@property (readonly, nonatomic) BOOL hasChangeRegistrationsResponse;
@property (readonly, nonatomic) BOOL hasConnectResponse;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasMessage;
@property (readonly, nonatomic) BOOL hasUpdatedEvents;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int message; // ivar: _message
@property (retain, nonatomic) HMDRemoteEventRouterProtoEventsMessage *updatedEvents; // ivar: _updatedEvents


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageAsString:(int)arg0 ;
-(int)StringAsMessage:(id)arg0 ;
-(void)clearOneofValuesForMessage;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif