// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTCELLULARCOLLECTOR_H
#define NPTCELLULARCOLLECTOR_H

@class NSMutableDictionary, NSArray, CTXPCServiceSubscriptionContext, CoreTelephonyClient, CTDataStatus, NSString, NSDictionary, NSMutableArray, CTTelephonyNetworkInfo, NSNumber;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, NPTMetadataCollection;

#import <Foundation/Foundation.h>


@interface NPTCellularCollector : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, NPTMetadataCollection>



@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (retain, nonatomic) NSArray *cellChanges; // ivar: _cellChanges
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (retain, nonatomic) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (retain, nonatomic) CTDataStatus *dataStatus; // ivar: _dataStatus
@property (retain, nonatomic) NSArray *dataStatusChanges; // ivar: _dataStatusChanges
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (retain, nonatomic) NSMutableArray *mutableCellChanges; // ivar: _mutableCellChanges
@property (retain, nonatomic) NSMutableArray *mutableDataStatusChanges; // ivar: _mutableDataStatusChanges
@property (retain, nonatomic) NSMutableDictionary *mutableMetadata; // ivar: _mutableMetadata
@property (retain, nonatomic) CTTelephonyNetworkInfo *networkInfo; // ivar: _networkInfo
@property (retain, nonatomic) NSMutableDictionary *servingCellInfo; // ivar: _servingCellInfo
@property (retain, nonatomic) NSNumber *slotID; // ivar: _slotID
@property (nonatomic) BOOL stopCollectingMetadata; // ivar: _stopCollectingMetadata
@property (readonly) Class superclass;


+(id)collectorName;
+(id)getPreferredDataSlot;
-(id)dualSimStatus;
-(id)getCellInfoForSlot:(id)arg0 ;
-(id)getCellularMNCMCCDE;
-(id)init;
-(id)initWithSlotID:(id)arg0 ;
-(id)signalStrengthMeasurements;
-(id)wrmBasebandMetrics;
-(void)cellChanged:(id)arg0 cell:(id)arg1 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;


@end


#endif