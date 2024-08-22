// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDMFORECAST_H
#define CDDMFORECAST_H

@class NSManagedObject, NSNumber, NSDate;



@interface CDDMForecast : NSManagedObject

@property (retain, nonatomic) NSNumber *attributeId;
@property (retain, nonatomic) NSNumber *basisCount;
@property (retain, nonatomic) NSNumber *basisFilled;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *forecastFormat;
@property (retain, nonatomic) NSDate *forecastGeneratedOn;
@property (retain, nonatomic) NSNumber *forecastGranularity;
@property (retain, nonatomic) NSNumber *forecastGroupId;
@property (retain, nonatomic) NSNumber *forecastType;
@property (retain, nonatomic) NSDate *historyWindowEnd;
@property (retain, nonatomic) NSNumber *historyWindowRecurrenceDelta;
@property (retain, nonatomic) NSNumber *historyWindowRecurrenceWidth;
@property (retain, nonatomic) NSDate *historyWindowStart;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *limitCount;
@property (retain, nonatomic) NSDate *oldestEntryDate;
@property (retain, nonatomic) NSNumber *userId;




@end


#endif