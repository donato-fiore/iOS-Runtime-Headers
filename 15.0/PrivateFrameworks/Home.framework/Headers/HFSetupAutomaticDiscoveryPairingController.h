// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSETUPAUTOMATICDISCOVERYPAIRINGCONTROLLER_H
#define HFSETUPAUTOMATICDISCOVERYPAIRINGCONTROLLER_H

@class NSTimer, HMAccessorySetupCompletedInfo, NSString, HMHome, NSSet, NAFuture, NSHashTable, NSDate;
@protocol HFSetupPairingController;

#import <Foundation/Foundation.h>

#import "HFSetupPairingContext.h"
#import "HFDiscoveredAccessory.h"
#import "HFSetupAccessoryResult.h"

@interface HFSetupAutomaticDiscoveryPairingController : NSObject <HFSetupPairingController>



@property (retain, nonatomic) NSTimer *accessoryNotFoundFatalTimeoutTimer; // ivar: _accessoryNotFoundFatalTimeoutTimer
@property (retain, nonatomic) NSTimer *accessoryNotFoundSoftTimeoutTimer; // ivar: _accessoryNotFoundSoftTimeoutTimer
@property (retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo; // ivar: _completedInfo
@property (readonly, nonatomic) HFSetupPairingContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair; // ivar: _discoveredAccessoryToPair
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
-(id)_sendCancellationRequestToHomeKit;
-(id)cancel;
-(id)initWithContext:(id)arg0 ;
-(void)_assertValidTransitionFromPhase:(NSUInteger)arg0 toPhase:(NSUInteger)arg1 ;
-(void)_failPairingWithError:(id)arg0 ;
-(void)_finishPairingWithAccessories:(id)arg0 completedInfo:(id)arg1 ;
-(void)_updateStatusTextAndNotifyDelegate:(BOOL)arg0 ;
-(void)addPairingObserver:(id)arg0 ;
-(void)dealloc;
-(void)removePairingObserver:(id)arg0 ;
-(void)startWithHome:(id)arg0 ;


@end


#endif