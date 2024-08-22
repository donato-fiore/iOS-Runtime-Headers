// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLQUICKENERGYSNAPSHOT_H
#define PLQUICKENERGYSNAPSHOT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PLQuickEnergySnapshot : NSObject

@property CGFloat cpuEnergy; // ivar: _cpuEnergy
@property CGFloat networkEnergy; // ivar: _networkEnergy
@property (retain) NSDate *timestamp; // ivar: _timestamp


-(CGFloat)computeEnergyDiff:(id)arg0 ;
-(CGFloat)getTotalEnergy;
-(id)description;
-(id)initWithEnergies:(CGFloat)arg0 andNetworkEnergy:(CGFloat)arg1 ;


@end


#endif