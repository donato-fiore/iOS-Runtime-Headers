// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPTELEMETRYFPFSMIGRATIONINVESTIGATION_H
#define APPTELEMETRYFPFSMIGRATIONINVESTIGATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AppTelemetryFPFSMigrationInvestigation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger accountQuotaUsage; // ivar: _accountQuotaUsage
@property (nonatomic) NSInteger bouncedItemsCount; // ivar: _bouncedItemsCount
@property (nonatomic) NSInteger bouncedItemsMatrix; // ivar: _bouncedItemsMatrix
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasAccountQuotaUsage;
@property (nonatomic) BOOL hasBouncedItemsCount;
@property (nonatomic) BOOL hasBouncedItemsMatrix;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasImportTime;
@property (nonatomic) BOOL hasIsAccountDataSeparated;
@property (nonatomic) BOOL hasIsSuccessful;
@property (nonatomic) BOOL hasItemsNotFoundInDB;
@property (nonatomic) BOOL hasItemsNotMigratedCount;
@property (readonly, nonatomic) BOOL hasRampId;
@property (nonatomic) BOOL hasTotalItemCount;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (nonatomic) BOOL hasTypesOfMigratedItemsMask;
@property (nonatomic) BOOL hasTypesOfNonMigratedItemsMask;
@property (nonatomic) CGFloat importTime; // ivar: _importTime
@property (nonatomic) BOOL isAccountDataSeparated; // ivar: _isAccountDataSeparated
@property (nonatomic) BOOL isSuccessful; // ivar: _isSuccessful
@property (nonatomic) NSInteger itemsNotFoundInDB; // ivar: _itemsNotFoundInDB
@property (nonatomic) NSInteger itemsNotMigratedCount; // ivar: _itemsNotMigratedCount
@property (retain, nonatomic) NSString *rampId; // ivar: _rampId
@property (nonatomic) NSInteger totalItemCount; // ivar: _totalItemCount
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) int typesOfMigratedItemsMask; // ivar: _typesOfMigratedItemsMask
@property (nonatomic) int typesOfNonMigratedItemsMask; // ivar: _typesOfNonMigratedItemsMask


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