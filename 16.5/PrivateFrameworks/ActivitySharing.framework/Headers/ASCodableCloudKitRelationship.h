// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCODABLECLOUDKITRELATIONSHIP_H
#define ASCODABLECLOUDKITRELATIONSHIP_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface ASCodableCloudKitRelationship : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *addresses; // ivar: _addresses
@property (retain, nonatomic) NSString *cloudKitAddress; // ivar: _cloudKitAddress
@property (nonatomic) NSInteger eventCount; // ivar: _eventCount
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (readonly, nonatomic) BOOL hasCloudKitAddress;
@property (nonatomic) BOOL hasEventCount;
@property (readonly, nonatomic) BOOL hasIncomingHandshakeToken;
@property (readonly, nonatomic) BOOL hasOutgoingHandshakeToken;
@property (readonly, nonatomic) BOOL hasPreferredReachableAddress;
@property (readonly, nonatomic) BOOL hasPreferredReachableService;
@property (nonatomic) BOOL hasSupportedPhoneFeatures;
@property (nonatomic) BOOL hasSupportedWatchFeatures;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *incomingHandshakeToken; // ivar: _incomingHandshakeToken
@property (retain, nonatomic) NSString *outgoingHandshakeToken; // ivar: _outgoingHandshakeToken
@property (retain, nonatomic) NSString *preferredReachableAddress; // ivar: _preferredReachableAddress
@property (retain, nonatomic) NSString *preferredReachableService; // ivar: _preferredReachableService
@property (nonatomic) unsigned int supportedPhoneFeatures; // ivar: _supportedPhoneFeatures
@property (nonatomic) unsigned int supportedWatchFeatures; // ivar: _supportedWatchFeatures
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(void)addAddresses:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearAddresses;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif