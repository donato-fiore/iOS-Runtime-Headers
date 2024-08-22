// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMETRICSCELLULARPOWERLOGPLMNSCANEVENT_H
#define AWDMETRICSCELLULARPOWERLOGPLMNSCANEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularPowerLogPLMNScanEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasReasonForScan;
@property (nonatomic) BOOL hasScanResult;
@property (nonatomic) BOOL hasScanType;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int reasonForScan; // ivar: _reasonForScan
@property (nonatomic) int scanResult; // ivar: _scanResult
@property (nonatomic) int scanType; // ivar: _scanType
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonForScanAsString:(int)arg0 ;
-(id)scanResultAsString:(int)arg0 ;
-(id)scanTypeAsString:(int)arg0 ;
-(int)StringAsReasonForScan:(id)arg0 ;
-(int)StringAsScanResult:(id)arg0 ;
-(int)StringAsScanType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif