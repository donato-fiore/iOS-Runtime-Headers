// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTCELLULARCOLLECTOR_H
#define NPTCELLULARCOLLECTOR_H

@class NSArray, CTXPCServiceSubscriptionContext, CoreTelephonyClient, CTDataStatus, NSString, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate;

#import <Foundation/Foundation.h>


@interface NPTCellularCollector : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>



@property (retain, nonatomic) NSArray *cellChanges; // ivar: _cellChanges
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (retain, nonatomic) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (retain, nonatomic) CTDataStatus *dataStatus; // ivar: _dataStatus
@property (retain, nonatomic) NSArray *dataStatusChanges; // ivar: _dataStatusChanges
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *mutableCellChanges; // ivar: _mutableCellChanges
@property (retain, nonatomic) NSMutableArray *mutableDataStatusChanges; // ivar: _mutableDataStatusChanges
@property (retain, nonatomic) NSMutableDictionary *mutableMetadata; // ivar: _mutableMetadata
@property (retain, nonatomic) NSMutableDictionary *servingCellInfo; // ivar: _servingCellInfo
@property (retain, nonatomic) NSNumber *slotID; // ivar: _slotID
@property (readonly) Class superclass;


+(id)cellularCollectorForPreferredDataSlot;
+(id)getPreferredDataSlot;
-(id)dualSimStatus;
-(id)getCellInfoForSlot:(id)arg0 ;
-(id)initWithSlotID:(id)arg0 ;
-(id)signalStrengthMeasurements;
-(id)wrmBasebandMetrics;
-(void)cellChanged:(id)arg0 cell:(id)arg1 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)refreshMetadataWithCompletion:(id)arg0 ;


@end


#endif