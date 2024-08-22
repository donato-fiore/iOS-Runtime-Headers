// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ROAMMO_H
#define ROAMMO_H

@class NSManagedObject, NSDate;

#import <Foundation/Foundation.h>

#import "BSSMO.h"

@interface RoamMO : NSManagedObject

@property (nonatomic) short cacheChannel;
@property (nonatomic) short cacheChannelFlags;
@property (nonatomic) short cacheRssiBin;
@property (retain, nonatomic) NSObject *channelsScanned;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) int fwReason;
@property (nonatomic) int fwSubReason;
@property (retain, nonatomic) NSObject *histBcnPer;
@property (retain, nonatomic) NSObject *histBcnSched;
@property (retain, nonatomic) NSObject *histCca;
@property (retain, nonatomic) NSObject *histFwTxFrames;
@property (retain, nonatomic) NSObject *histFwTxPer;
@property (retain, nonatomic) NSObject *histFwTxRetrans;
@property (retain, nonatomic) NSObject *histRssi;
@property (retain, nonatomic) NSObject *histRxFrames;
@property (retain, nonatomic) NSObject *histSnr;
@property (retain, nonatomic) NSObject *histTxFrames;
@property (retain, nonatomic) NSObject *histTxPer;
@property (retain, nonatomic) NSObject *histTxRetrans;
@property (nonatomic) int hostReason;
@property (nonatomic) BOOL isLateRoam;
@property (nonatomic) BOOL isPingPong;
@property (nonatomic) short motionState;
@property (retain, nonatomic) NSObject *neighborCache;
@property (nonatomic) short roamDelta;
@property (nonatomic) CGFloat roamLatencyMs;
@property (retain, nonatomic) BSSMO *source;
@property (nonatomic) short sourceCca;
@property (nonatomic) short sourceRssi;
@property (nonatomic) int sourceScanLatencyMs;
@property (nonatomic) short sourceSnr;
@property (nonatomic) NSInteger sourceTimeSpentSecs;
@property (nonatomic) int status;
@property (retain, nonatomic) BSSMO *target;
@property (nonatomic) short targetCca;
@property (nonatomic) BOOL targetDhcpFailed;
@property (nonatomic) int targetDhcpLatencyMs;
@property (nonatomic) int targetDhcpLeaseMins;
@property (nonatomic) short targetRssi;
@property (nonatomic) short targetSnr;
@property (nonatomic) BOOL userInteractive;
@property (nonatomic) BOOL voipActive;


+(NSUInteger)dwellTimeInBand:(id)arg0 bandIs24:(BOOL)arg1 bssid:(id)arg2 maxAgeInDays:(NSUInteger)arg3 moc:(id)arg4 ;
+(NSUInteger)roamsCount:(id)arg0 fetchLimit:(NSUInteger)arg1 moc:(id)arg2 ;
+(NSUInteger)roamsCountBetweenBssids:(id)arg0 target:(id)arg1 moc:(id)arg2 ;
+(id)entityName;
+(id)fetchRequest;
+(id)fetchRoamCache:(id)arg0 fetchLimit:(NSUInteger)arg1 moc:(id)arg2 ;
+(id)fetchRoamObjects:(id)arg0 fetchLimit:(NSUInteger)arg1 moc:(id)arg2 ;
+(id)fetchRoamProperties:(id)arg0 lookForRoamStatus:(BOOL)arg1 fetchLimit:(NSUInteger)arg2 properties:(id)arg3 moc:(id)arg4 ;
+(id)generateInstance:(id)arg0 ;


@end


#endif