// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDMBOOKKEEPING_H
#define CDDMBOOKKEEPING_H

@class NSManagedObject, NSNumber, NSString, NSDate;



@interface CDDMBookkeeping : NSManagedObject

@property (retain, nonatomic) NSNumber *budgetVersion;
@property (retain, nonatomic) NSNumber *databaseVersion;
@property (retain, nonatomic) NSString *deviceDescription;
@property (retain, nonatomic) NSNumber *maxAttributeIntegerId;
@property (retain, nonatomic) NSNumber *maxForecastGroupId;
@property (retain, nonatomic) NSNumber *maxPoolIntegerId;
@property (retain, nonatomic) NSDate *newestEntryDate;
@property (retain, nonatomic) NSDate *oldestEntryDate;
@property (retain, nonatomic) NSNumber *systemCumulativeComputeUtilizationGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeIoReadBytesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeIoWriteBytesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeMillijoulesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeNetworkBytesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativePushesGauge;




@end


#endif