// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIASYNCSERVICEKEEPLOCALOPTIONS_H
#define NMSMEDIASYNCSERVICEKEEPLOCALOPTIONS_H

@class PBCodable;
@protocol NSCopying;



@interface NMSMediaSyncServiceKeepLocalOptions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int downloadOffPowerPolicy; // ivar: _downloadOffPowerPolicy
@property (nonatomic) int downloadOnCellularPolicy; // ivar: _downloadOnCellularPolicy
@property (nonatomic) BOOL hasDownloadOffPowerPolicy;
@property (nonatomic) BOOL hasDownloadOnCellularPolicy;
@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) BOOL hasRequiresValidation;
@property (nonatomic) BOOL hasTimeout;
@property (nonatomic) int qualityOfService; // ivar: _qualityOfService
@property (nonatomic) BOOL requiresValidation; // ivar: _requiresValidation
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)downloadOffPowerPolicyAsString:(int)arg0 ;
-(id)downloadOnCellularPolicyAsString:(int)arg0 ;
-(id)qualityOfServiceAsString:(int)arg0 ;
-(int)StringAsDownloadOffPowerPolicy:(id)arg0 ;
-(int)StringAsDownloadOnCellularPolicy:(id)arg0 ;
-(int)StringAsQualityOfService:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif