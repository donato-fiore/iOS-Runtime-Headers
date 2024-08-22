// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPOWERPROFILECLUSTERPOWERPROFILERESPONSEPARAMS_H
#define CHIPPOWERPROFILECLUSTERPOWERPROFILERESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPPowerProfileClusterPowerProfileResponseParams : NSObject

@property (retain, nonatomic) NSNumber *numOfTransferredPhases; // ivar: _numOfTransferredPhases
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *totalProfileNum; // ivar: _totalProfileNum
@property (retain, nonatomic) NSArray *transferredPhases; // ivar: _transferredPhases


-(id)init;


@end


#endif