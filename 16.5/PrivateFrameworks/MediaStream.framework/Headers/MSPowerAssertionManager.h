// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPOWERASSERTIONMANAGER_H
#define MSPOWERASSERTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface MSPowerAssertionManager : NSObject

@property (nonatomic) int UIBusyCount; // ivar: _UIBusyCount
@property (nonatomic) unsigned int assertionID; // ivar: _assertionID
@property (nonatomic) int busyCount; // ivar: _busyCount
@property (nonatomic) BOOL isAssertingPowerAssertion; // ivar: _isAssertingPowerAssertion
@property (nonatomic) BOOL isBusy; // ivar: _isBusy


+(id)sharedManager;
-(void)_assertPowerAssertion;
-(void)_deassertPowerAssertion;
-(void)_recomputePowerAssertion;
-(void)releaseBusy;
-(void)releaseUIBusy;
-(void)retainBusy;
-(void)retainUIBusy;
-(void)toggleAssertion;


@end


#endif