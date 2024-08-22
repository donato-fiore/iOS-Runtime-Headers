// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDMAPPSTATECHANGEEVENT_H
#define CDDMAPPSTATECHANGEEVENT_H

@class NSManagedObject, NSNumber, NSDate;



@interface CDDMAppStateChangeEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *appState;
@property (retain, nonatomic) NSNumber *computeUtilization;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *ioBytes;
@property (retain, nonatomic) NSNumber *ioBytesRead;
@property (retain, nonatomic) NSNumber *ioBytesWritten;
@property (retain, nonatomic) NSNumber *isFront;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *memoryPhysicalFootprint;
@property (retain, nonatomic) NSNumber *networkBytes;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *networkRxBytes;
@property (retain, nonatomic) NSNumber *networkTxBytes;
@property (retain, nonatomic) NSNumber *runReason;
@property (retain, nonatomic) NSNumber *usedCellData;
@property (retain, nonatomic) NSNumber *userId;




@end


#endif