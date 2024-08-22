// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    HMDRemoteEventRouterProtoChangeRegistrationsMessage *_changeRegistrations;
    HMDRemoteEventRouterProtoConnectMessage *_connect;
    HMDRemoteEventRouterProtoDisconnectMessage *_disconnect;
    HMDRemoteEventRouterProtoFetchEventsMessage *_fetchEvents;
    NSString *_identifier;
    HMDRemoteEventRouterProtoKeepAliveMessage *_keepAlive;
    int _request;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif