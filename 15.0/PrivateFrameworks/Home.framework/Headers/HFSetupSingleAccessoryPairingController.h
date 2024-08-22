// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSETUPSINGLEACCESSORYPAIRINGCONTROLLER_H
#define HFSETUPSINGLEACCESSORYPAIRINGCONTROLLER_H

@class HMAccessorySetupCompletedInfo, NSString, HMHome, NSSet, NAFuture, NSHashTable, NSDate;
@protocol HFHomeObserver, HFSetupPairingController;

#import <Foundation/Foundation.h>

#import "HFSetupPairingContext.h"
#import "HFDiscoveredAccessory.h"
#import "HFSetupAccessoryResult.h"

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController>



@property (nonatomic) BOOL accessoryRequiresCode; // ivar: _accessoryRequiresCode
@property (readonly, nonatomic) HMAccessorySetupCompletedInfo *completedInfo; // ivar: _completedInfo
@property (readonly, nonatomic) HFSetupPairingContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair; // ivar: _discoveredAccessoryToPair
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSSet *pairedAccessories; // ivar: _pairedAccessories
@property (retain, nonatomic) NAFuture *pairingFuture; // ivar: _pairingFuture
@property (retain, nonatomic) NSHashTable *pairingObservers; // ivar: _pairingObservers
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (retain, nonatomic) NSDate *phaseStartDate; // ivar: _phaseStartDate
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult; // ivar: _setupResult
@property (retain, nonatomic) NSString *statusDescription; // ivar: _statusDescription
@property (retain, nonatomic) NSString *statusTitle; // ivar: _statusTitle
@property (readonly) Class superclass;


+(BOOL)supportsSetupPayloadRetry;
-(id)cancel;
-(id)initWithContext:(id)arg0 discoveredAccessory:(id)arg1 ;
-(void)_assertValidTransitionFromPhase:(NSUInteger)arg0 toPhase:(NSUInteger)arg1 ;
-(void)_failPairingWithDiscoveredAccessory:(id)arg0 error:(id)arg1 ;
-(void)_finishPairingWithDiscoveredAccessory:(id)arg0 ;
-(void)_tryPairing;
-(void)_updateStatusTextAndNotifyDelegate:(BOOL)arg0 ;
-(void)addPairingObserver:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)removePairingObserver:(id)arg0 ;
-(void)startWithHome:(id)arg0 ;


@end


#endif