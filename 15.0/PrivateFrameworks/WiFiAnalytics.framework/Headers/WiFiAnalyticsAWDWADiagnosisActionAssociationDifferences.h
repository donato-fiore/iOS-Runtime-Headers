// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIANALYTICSAWDWADIAGNOSISACTIONASSOCIATIONDIFFERENCES_H
#define WIFIANALYTICSAWDWADIAGNOSISACTIONASSOCIATIONDIFFERENCES_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int additionalInfo; // ivar: _additionalInfo
@property (nonatomic) BOOL changedChannel; // ivar: _changedChannel
@property (nonatomic) BOOL changedDNSPrimary; // ivar: _changedDNSPrimary
@property (nonatomic) BOOL changedDNSSecondary; // ivar: _changedDNSSecondary
@property (nonatomic) BOOL changedMAC; // ivar: _changedMAC
@property (nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) BOOL hasAdditionalInfo;
@property (nonatomic) BOOL hasChangedChannel;
@property (nonatomic) BOOL hasChangedDNSPrimary;
@property (nonatomic) BOOL hasChangedDNSSecondary;
@property (nonatomic) BOOL hasChangedMAC;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasNewBSSID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL newBSSID; // ivar: _newBSSID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif