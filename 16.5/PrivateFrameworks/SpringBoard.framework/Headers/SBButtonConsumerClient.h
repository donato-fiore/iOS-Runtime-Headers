// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBUTTONCONSUMERCLIENT_H
#define SBBUTTONCONSUMERCLIENT_H

@class NSMutableSet;
@protocol FBSServiceFacilityClientHandle;

#import <Foundation/Foundation.h>


@interface SBButtonConsumerClient : NSObject

@property (nonatomic, getter=isApplication) BOOL application; // ivar: _application
@property (readonly, nonatomic) BOOL canReceiveEvents;
@property (nonatomic, getter=isEntitledToConsumeButtonsInBackground) BOOL entitledToConsumeButtonsInBackground; // ivar: _entitledToConsumeButtonsInBackground
@property (retain, nonatomic) NSMutableSet *registrations; // ivar: _registrations
@property (nonatomic, getter=isRunningVisible) BOOL runningVisible; // ivar: _runningVisible
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (retain, nonatomic) NSObject<FBSServiceFacilityClientHandle> *systemServiceClient; // ivar: _systemServiceClient


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif