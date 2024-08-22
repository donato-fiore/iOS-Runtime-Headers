// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSETUPSTAGEDACCESSORYPAIRINGCONTROLLER_H
#define HFSETUPSTAGEDACCESSORYPAIRINGCONTROLLER_H

@class HMAccessorySetupCompletedInfo, NSString, HMHome, NSSet, NSHashTable;
@protocol HFSetupPairingController;

#import <Foundation/Foundation.h>

#import "HFSetupPairingContext.h"
#import "HFDiscoveredAccessory.h"
#import "HFSetupAccessoryResult.h"

@interface HFSetupStagedAccessoryPairingController : NSObject <HFSetupPairingController>



@property (retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo; // ivar: _completedInfo
@property (readonly, nonatomic) HFSetupPairingContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair; // ivar: _discoveredAccessoryToPair
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSSet *pairedAccessories; // ivar: _pairedAccessories
@property (retain, nonatomic) NSHashTable *pairingObservers; // ivar: _pairingObservers
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult; // ivar: _setupResult
@property (retain, nonatomic) NSString *statusDescription; // ivar: _statusDescription
@property (retain, nonatomic) NSString *statusTitle; // ivar: _statusTitle
@property (readonly) Class superclass;


+(BOOL)supportsSetupPayloadRetry;
-(id)cancel;
-(id)initWithContext:(id)arg0 ;
-(void)addPairingObserver:(id)arg0 ;
-(void)removePairingObserver:(id)arg0 ;
-(void)startWithHome:(id)arg0 ;


@end


#endif