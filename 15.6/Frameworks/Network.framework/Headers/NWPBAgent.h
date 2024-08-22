// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWPBAGENT_H
#define NWPBAGENT_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "NWPBAgentClass.h"

@interface NWPBAgent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) NWPBAgentClass *agentClass; // ivar: _agentClass
@property (retain, nonatomic) NSData *agentData; // ivar: _agentData
@property (retain, nonatomic) NSString *agentDescription; // ivar: _agentDescription
@property (retain, nonatomic) NSString *agentIdentifier; // ivar: _agentIdentifier
@property (nonatomic) BOOL hasActive;
@property (readonly, nonatomic) BOOL hasAgentClass;
@property (readonly, nonatomic) BOOL hasAgentData;
@property (readonly, nonatomic) BOOL hasAgentDescription;
@property (readonly, nonatomic) BOOL hasAgentIdentifier;
@property (nonatomic) BOOL hasNetworkProvider;
@property (nonatomic) BOOL hasNexusProvider;
@property (nonatomic) BOOL hasUserActivated;
@property (nonatomic) BOOL hasVoluntary;
@property (nonatomic) BOOL networkProvider; // ivar: _networkProvider
@property (nonatomic) BOOL nexusProvider; // ivar: _nexusProvider
@property (nonatomic) BOOL userActivated; // ivar: _userActivated
@property (nonatomic) BOOL voluntary; // ivar: _voluntary


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif