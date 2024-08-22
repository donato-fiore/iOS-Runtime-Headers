// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDMSTATISTICSTRING_H
#define CDDMSTATISTICSTRING_H

@class NSManagedObject, NSNumber, NSDate, NSString;



@interface CDDMStatisticString : NSManagedObject

@property (retain, nonatomic) NSNumber *attributeId;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *statisticKind;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *value;




@end


#endif