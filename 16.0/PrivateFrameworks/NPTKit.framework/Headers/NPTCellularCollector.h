// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPTCELLULARCOLLECTOR_H
#define NPTCELLULARCOLLECTOR_H

@class NSMutableDictionary, NSArray, CTXPCServiceSubscriptionContext, CoreTelephonyClient, CTDataStatus, NSString, NSDictionary, NSMutableArray, CTTelephonyNetworkInfo, NSNumber;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, NPTMetadataCollection, OS_nw_path_monitor;

#import <Foundation/Foundation.h>


@interface NPTCellularCollector : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, NPTMetadataCollection>



@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (retain, nonatomic) NSArray *cellChanges; // ivar: _cellChanges
@property (retain) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (retain) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (retain) CTDataStatus *dataStatus; // ivar: _dataStatus
@property (retain, nonatomic) NSArray *dataStatusChanges; // ivar: _dataStatusChanges
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (retain) NSMutableArray *mutableCellChanges; // ivar: _mutableCellChanges
@property (retain) NSMutableArray *mutableDataStatusChanges; // ivar: _mutableDataStatusChanges
@property (retain) NSMutableDictionary *mutableMetadata; // ivar: _mutableMetadata
@property (retain) CTTelephonyNetworkInfo *networkInfo; // ivar: _networkInfo
@property (retain) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor
@property (retain) NSMutableDictionary *servingCellInfo; // ivar: _servingCellInfo
@property (retain) NSNumber *slotID; // ivar: _slotID
@property BOOL stopCollectingMetadata; // ivar: _stopCollectingMetadata
@property (readonly) Class superclass;


+(id)calculateMaxCellularTPutEstimates:(id)arg0 ;
+(id)collectorName;
+(id)getPreferredDataSlot;
-(id)dualSimStatus;
-(id)fetchCellularTPutEstimates;
-(id)getCellInfoForSlot:(id)arg0 ;
-(id)getCellularMNCMCCDE;
-(id)getEstimateFromPath:(id)arg0 ;
-(id)init;
-(id)initWithSlotID:(id)arg0 ;
-(id)signalStrengthMeasurements;
-(id)wrmBasebandMetrics;
-(void)cellChanged:(id)arg0 cell:(id)arg1 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)estimateDidChange:(id)arg0 ;
-(void)setUpPathMonitor:(id)arg0 ;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;


@end


#endif