// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERPROTOSERVERMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOSERVERMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HMDRemoteEventRouterProtoChangeRegistrationsResponse.h"
#import "HMDRemoteEventRouterProtoConnectResponse.h"
#import "HMDRemoteEventRouterProtoEventsMessage.h"

@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying>

 {
    HMDRemoteEventRouterProtoChangeRegistrationsResponse *_changeRegistrationsResponse;
    HMDRemoteEventRouterProtoConnectResponse *_connectResponse;
    NSString *_identifier;
    int _message;
    HMDRemoteEventRouterProtoEventsMessage *_updatedEvents;
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