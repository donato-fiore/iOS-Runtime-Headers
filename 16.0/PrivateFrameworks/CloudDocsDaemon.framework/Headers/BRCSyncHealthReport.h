// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSYNCHEALTHREPORT_H
#define BRCSYNCHEALTHREPORT_H

@class NSSet, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BRCSyncHealthReport : NSObject

@property (readonly, nonatomic) NSUInteger blockedZonesCount; // ivar: _blockedZonesCount
@property (readonly, nonatomic) NSUInteger clientTruthDirFaultCount; // ivar: _clientTruthDirFaultCount
@property (readonly, nonatomic) NSUInteger clientTruthTotalItemsCount; // ivar: _clientTruthTotalItemsCount
@property (readonly, nonatomic) NSSet *downloadFailures; // ivar: _downloadFailures
@property (readonly, nonatomic) NSString *dsid; // ivar: _dsid
@property (readonly, nonatomic) NSString *rampNumber; // ivar: _rampNumber
@property (readonly, nonatomic) NSUInteger serverTruthDirCount; // ivar: _serverTruthDirCount
@property (readonly, nonatomic) NSUInteger serverTruthDirFaultCount; // ivar: _serverTruthDirFaultCount
@property (readonly, nonatomic) NSUInteger serverTruthTotalItemsCount; // ivar: _serverTruthTotalItemsCount
@property (readonly, nonatomic) NSDictionary *syncDownErrorsByMangledID; // ivar: _syncDownErrorsByMangledID
@property (readonly, nonatomic) NSDictionary *syncUpErrorsByMangledID; // ivar: _syncUpErrorsByMangledID
@property (readonly, nonatomic) NSSet *syncUpFailures; // ivar: _syncUpFailures
@property (readonly, nonatomic) NSArray *telemetryErrorEvents;
@property (readonly, nonatomic) NSArray *telemetryOtherEvents;
@property (readonly, nonatomic) NSUInteger timeSinceLogin; // ivar: _timeSinceLogin
@property (readonly, nonatomic) NSUInteger totalZoneCount; // ivar: _totalZoneCount
@property (readonly, nonatomic) NSSet *uploadFailures; // ivar: _uploadFailures
@property (readonly, nonatomic) NSUInteger zonesNeverFullSync; // ivar: _zonesNeverFullSync


-(id)_injectionForAnalyticsServiceCode:(int)arg0 ;
-(id)getRampNumberForSession:(id)arg0 ;
-(id)init;
-(void)_fillTransferFailure:(id)arg0 withRowID:(NSUInteger)arg1 atDate:(id)arg2 session:(id)arg3 ;
-(void)generateReportWithSession:(id)arg0 ;
-(void)syncErrors:(id)arg0 ;


@end


#endif