// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORERESIDENTUPDATERESULT_H
#define HMDBACKINGSTORERESIDENTUPDATERESULT_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface HMDBackingStoreResidentUpdateResult : NSObject

@property (copy, nonatomic) NSSet *addedResidentDevices; // ivar: _addedResidentDevices
@property (copy, nonatomic) NSSet *deletedResidentDevices; // ivar: _deletedResidentDevices
@property (copy, nonatomic) NSSet *reachabilityUpdates; // ivar: _reachabilityUpdates


-(id)initWithAddedResidentDevices:(id)arg0 deletedResidentDevices:(id)arg1 reachabilityUpdates:(id)arg2 ;


@end


#endif