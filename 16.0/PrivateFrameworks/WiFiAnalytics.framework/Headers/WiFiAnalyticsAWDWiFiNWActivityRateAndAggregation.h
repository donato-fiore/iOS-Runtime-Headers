// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYRATEANDAGGREGATION_H
#define WIFIANALYTICSAWDWIFINWACTIVITYRATEANDAGGREGATION_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying>

 {
    ? _ampduAGGs;
    ? _rxMCSSuccess;
    ? _rxVHTSuccess;
    ? _txMCSSuccess;
    ? _txVHTSuccess;
}


@property (readonly, nonatomic) *NSUInteger ampduAGGs;
@property (readonly, nonatomic) NSUInteger ampduAGGsCount;
@property (readonly, nonatomic) *NSUInteger rxMCSSuccess;
@property (readonly, nonatomic) NSUInteger rxMCSSuccessCount;
@property (readonly, nonatomic) *NSUInteger rxVHTSuccess;
@property (readonly, nonatomic) NSUInteger rxVHTSuccessCount;
@property (readonly, nonatomic) *NSUInteger txMCSSuccess;
@property (readonly, nonatomic) NSUInteger txMCSSuccessCount;
@property (readonly, nonatomic) *NSUInteger txVHTSuccess;
@property (readonly, nonatomic) NSUInteger txVHTSuccessCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)ampduAGGAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)rxMCSSuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)rxVHTSuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txMCSSuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txVHTSuccessAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAmpduAGG:(NSUInteger)arg0 ;
-(void)addRxMCSSuccess:(NSUInteger)arg0 ;
-(void)addRxVHTSuccess:(NSUInteger)arg0 ;
-(void)addTxMCSSuccess:(NSUInteger)arg0 ;
-(void)addTxVHTSuccess:(NSUInteger)arg0 ;
-(void)clearAmpduAGGs;
-(void)clearRxMCSSuccess;
-(void)clearRxVHTSuccess;
-(void)clearTxMCSSuccess;
-(void)clearTxVHTSuccess;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif