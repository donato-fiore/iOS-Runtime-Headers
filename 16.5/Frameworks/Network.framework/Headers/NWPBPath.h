// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWPBPATH_H
#define NWPBPATH_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NWPBInterface.h"
#import "NWPBEndpoint.h"
#import "NWPBParameters.h"

@interface NWPBPath : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *agents; // ivar: _agents
@property (retain, nonatomic) NSString *clientUUID; // ivar: _clientUUID
@property (retain, nonatomic) NWPBInterface *delegateInterface; // ivar: _delegateInterface
@property (nonatomic) BOOL direct; // ivar: _direct
@property (retain, nonatomic) NWPBInterface *directInterface; // ivar: _directInterface
@property (retain, nonatomic) NWPBEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) BOOL hasClientUUID;
@property (readonly, nonatomic) BOOL hasDelegateInterface;
@property (nonatomic) BOOL hasDirect;
@property (readonly, nonatomic) BOOL hasDirectInterface;
@property (readonly, nonatomic) BOOL hasEndpoint;
@property (nonatomic) BOOL hasIpv4;
@property (nonatomic) BOOL hasIpv6;
@property (nonatomic) BOOL hasLocal;
@property (readonly, nonatomic) BOOL hasParameters;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL ipv4; // ivar: _ipv4
@property (nonatomic) BOOL ipv6; // ivar: _ipv6
@property (nonatomic) BOOL local; // ivar: _local
@property (retain, nonatomic) NWPBParameters *parameters; // ivar: _parameters
@property (nonatomic) int status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)agentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addAgents:(id)arg0 ;
-(void)clearAgents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif