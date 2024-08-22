// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERTRANSFERREDPHASE_H
#define MTRPOWERPROFILECLUSTERTRANSFERREDPHASE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterTransferredPhase : NSObject

@property (retain, nonatomic) NSNumber *energy; // ivar: _energy
@property (retain, nonatomic) NSNumber *energyPhaseId; // ivar: _energyPhaseId
@property (retain, nonatomic) NSNumber *expectedDuration; // ivar: _expectedDuration
@property (retain, nonatomic) NSNumber *macroPhaseId; // ivar: _macroPhaseId
@property (retain, nonatomic) NSNumber *maxActivationDelay; // ivar: _maxActivationDelay
@property (retain, nonatomic) NSNumber *peakPower; // ivar: _peakPower


-(id)description;
-(id)init;


@end


#endif