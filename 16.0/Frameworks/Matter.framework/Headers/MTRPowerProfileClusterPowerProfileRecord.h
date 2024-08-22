// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERPOWERPROFILERECORD_H
#define MTRPOWERPROFILECLUSTERPOWERPROFILERECORD_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterPowerProfileRecord : NSObject

@property (retain, nonatomic) NSNumber *energyPhaseId; // ivar: _energyPhaseId
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *powerProfileRemoteControl; // ivar: _powerProfileRemoteControl
@property (retain, nonatomic) NSNumber *powerProfileState; // ivar: _powerProfileState


-(id)description;
-(id)init;


@end


#endif