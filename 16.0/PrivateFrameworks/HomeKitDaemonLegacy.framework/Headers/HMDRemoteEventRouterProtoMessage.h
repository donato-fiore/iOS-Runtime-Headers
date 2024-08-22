// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERPROTOMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HMDRemoteEventRouterProtoChangeRegistrationsMessage.h"
#import "HMDRemoteEventRouterProtoConnectMessage.h"
#import "HMDRemoteEventRouterProtoDisconnectMessage.h"
#import "HMDRemoteEventRouterProtoFetchEventsMessage.h"
#import "HMDRemoteEventRouterProtoKeepAliveMessage.h"

@interface HMDRemoteEventRouterProtoMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HMDRemoteEventRouterProtoChangeRegistrationsMessage *changeRegistrations; // ivar: _changeRegistrations
@property (retain, nonatomic) HMDRemoteEventRouterProtoConnectMessage *connect; // ivar: _connect
@property (retain, nonatomic) HMDRemoteEventRouterProtoDisconnectMessage *disconnect; // ivar: _disconnect
@property (retain, nonatomic) HMDRemoteEventRouterProtoFetchEventsMessage *fetchEvents; // ivar: _fetchEvents
@property (readonly, nonatomic) BOOL hasChangeRegistrations;
@property (readonly, nonatomic) BOOL hasConnect;
@property (readonly, nonatomic) BOOL hasDisconnect;
@property (readonly, nonatomic) BOOL hasFetchEvents;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasKeepAlive;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) HMDRemoteEventRouterProtoKeepAliveMessage *keepAlive; // ivar: _keepAlive
@property (nonatomic) int request; // ivar: _request


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requestAsString:(int)arg0 ;
-(int)StringAsRequest:(id)arg0 ;
-(void)clearOneofValuesForRequest;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif