// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWPBPARAMETERS_H
#define NWPBPARAMETERS_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NWPBEndpoint.h"
#import "NWPBInterface.h"

@interface NWPBParameters : PBCodable <NSCopying>

 {
    ? _prohibitedInterfaceSubTypes;
    ? _prohibitedInterfaceTypes;
    ? _has;
}


@property (retain, nonatomic) NSString *account; // ivar: _account
@property (nonatomic) unsigned int addressFamily; // ivar: _addressFamily
@property (nonatomic) int dataMode; // ivar: _dataMode
@property (retain, nonatomic) NSString *effectiveBundleID; // ivar: _effectiveBundleID
@property (retain, nonatomic) NSString *effectiveProcessUUID; // ivar: _effectiveProcessUUID
@property (nonatomic) BOOL fastOpen; // ivar: _fastOpen
@property (readonly, nonatomic) BOOL hasAccount;
@property (nonatomic) BOOL hasAddressFamily;
@property (nonatomic) BOOL hasDataMode;
@property (readonly, nonatomic) BOOL hasEffectiveBundleID;
@property (readonly, nonatomic) BOOL hasEffectiveProcessUUID;
@property (nonatomic) BOOL hasFastOpen;
@property (nonatomic) BOOL hasIpProtocol;
@property (nonatomic) BOOL hasKeepalive;
@property (readonly, nonatomic) BOOL hasLocalEndpoint;
@property (nonatomic) BOOL hasLongOutstandingQueries;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasMultipath;
@property (nonatomic) BOOL hasNoFallback;
@property (nonatomic) BOOL hasProhibitExpensive;
@property (readonly, nonatomic) BOOL hasRealProcessUUID;
@property (nonatomic) BOOL hasReduceBuffering;
@property (readonly, nonatomic) BOOL hasRequiredInterface;
@property (nonatomic) BOOL hasRequiredInterfaceType;
@property (nonatomic) BOOL hasReuseLocalAddress;
@property (nonatomic) BOOL hasTrafficClass;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) BOOL hasUseAWDL;
@property (nonatomic) BOOL hasUseP2P;
@property (nonatomic) unsigned int ipProtocol; // ivar: _ipProtocol
@property (nonatomic) BOOL keepalive; // ivar: _keepalive
@property (retain, nonatomic) NWPBEndpoint *localEndpoint; // ivar: _localEndpoint
@property (nonatomic) BOOL longOutstandingQueries; // ivar: _longOutstandingQueries
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (nonatomic) unsigned int multipathService; // ivar: _multipathService
@property (nonatomic) BOOL noFallback; // ivar: _noFallback
@property (retain, nonatomic) NSMutableArray *preferredAgents; // ivar: _preferredAgents
@property (nonatomic) BOOL prohibitExpensive; // ivar: _prohibitExpensive
@property (retain, nonatomic) NSMutableArray *prohibitedAgents; // ivar: _prohibitedAgents
@property (readonly, nonatomic) *int prohibitedInterfaceSubTypes;
@property (readonly, nonatomic) NSUInteger prohibitedInterfaceSubTypesCount;
@property (readonly, nonatomic) *int prohibitedInterfaceTypes;
@property (readonly, nonatomic) NSUInteger prohibitedInterfaceTypesCount;
@property (retain, nonatomic) NSMutableArray *prohibitedInterfaces; // ivar: _prohibitedInterfaces
@property (retain, nonatomic) NSString *realProcessUUID; // ivar: _realProcessUUID
@property (nonatomic) BOOL reduceBuffering; // ivar: _reduceBuffering
@property (retain, nonatomic) NSMutableArray *requiredAgents; // ivar: _requiredAgents
@property (retain, nonatomic) NWPBInterface *requiredInterface; // ivar: _requiredInterface
@property (nonatomic) int requiredInterfaceType; // ivar: _requiredInterfaceType
@property (nonatomic) BOOL reuseLocalAddress; // ivar: _reuseLocalAddress
@property (nonatomic) unsigned int trafficClass; // ivar: _trafficClass
@property (retain, nonatomic) NSString *url; // ivar: _url
@property (nonatomic) BOOL useAWDL; // ivar: _useAWDL
@property (nonatomic) BOOL useP2P; // ivar: _useP2P


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataModeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)preferredAgentsAtIndex:(NSUInteger)arg0 ;
-(id)prohibitedAgentsAtIndex:(NSUInteger)arg0 ;
-(id)prohibitedInterfaceSubTypesAsString:(int)arg0 ;
-(id)prohibitedInterfaceTypesAsString:(int)arg0 ;
-(id)prohibitedInterfacesAtIndex:(NSUInteger)arg0 ;
-(id)requiredAgentsAtIndex:(NSUInteger)arg0 ;
-(id)requiredInterfaceTypeAsString:(int)arg0 ;
-(int)StringAsDataMode:(id)arg0 ;
-(int)StringAsProhibitedInterfaceSubTypes:(id)arg0 ;
-(int)StringAsProhibitedInterfaceTypes:(id)arg0 ;
-(int)StringAsRequiredInterfaceType:(id)arg0 ;
-(int)prohibitedInterfaceSubTypesAtIndex:(NSUInteger)arg0 ;
-(int)prohibitedInterfaceTypesAtIndex:(NSUInteger)arg0 ;
-(void)addPreferredAgents:(id)arg0 ;
-(void)addProhibitedAgents:(id)arg0 ;
-(void)addProhibitedInterfaceSubTypes:(int)arg0 ;
-(void)addProhibitedInterfaceTypes:(int)arg0 ;
-(void)addProhibitedInterfaces:(id)arg0 ;
-(void)addRequiredAgents:(id)arg0 ;
-(void)clearPreferredAgents;
-(void)clearProhibitedAgents;
-(void)clearProhibitedInterfaceSubTypes;
-(void)clearProhibitedInterfaceTypes;
-(void)clearProhibitedInterfaces;
-(void)clearRequiredAgents;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif