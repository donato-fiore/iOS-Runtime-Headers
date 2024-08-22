// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDISTRIBUTEDSENSINGMANAGER_H
#define CMDISTRIBUTEDSENSINGMANAGER_H

@protocol CMDistributedSensingDelegate;

#import <Foundation/Foundation.h>

#import "CMDistributedSensingManagerInternal.h"

@interface CMDistributedSensingManager : NSObject

@property (readonly, nonatomic) CMDistributedSensingManagerInternal *_internal; // ivar: _internal
@property (nonatomic) NSObject<CMDistributedSensingDelegate> *delegate; // ivar: _delegate


+(BOOL)isVehicleStateUpdatesAvailable;
-(id)init;
-(void)dealloc;
-(void)subscribeToVehicleState;
-(void)unsubscribeToVehicleState;


@end


#endif