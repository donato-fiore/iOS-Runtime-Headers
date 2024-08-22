// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTELEMETRYNETWORKEVENTGROUP_H
#define NTPBTELEMETRYNETWORKEVENTGROUP_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (nonatomic) int eventType; // ivar: _eventType
@property (retain, nonatomic) NSMutableArray *failures; // ivar: _failures
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasRespondingPop;
@property (nonatomic) BOOL hasWifiReachabilityStatus;
@property (retain, nonatomic) NSString *respondingPop; // ivar: _respondingPop
@property (retain, nonatomic) NSMutableArray *successes; // ivar: _successes
@property (nonatomic) BOOL wifiReachabilityStatus; // ivar: _wifiReachabilityStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cellularRadioAccessTechnologyAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)failuresAtIndex:(NSUInteger)arg0 ;
-(id)successesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg0 ;
-(void)addFailures:(id)arg0 ;
-(void)addSuccesses:(id)arg0 ;
-(void)clearFailures;
-(void)clearSuccesses;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif