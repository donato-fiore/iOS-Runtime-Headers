// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCHARACTERISTICREADWRITELOGEVENTMANAGER_H
#define HMDCHARACTERISTICREADWRITELOGEVENTMANAGER_H

@class NSMutableDictionary, HMFUnfairLock;

#import <Foundation/Foundation.h>


@interface HMDCharacteristicReadWriteLogEventManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID; // ivar: _consecutiveFailureCountByHMDAccessoryUUID
@property (readonly, nonatomic) HMFUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID; // ivar: _timeOfFirstFailureByHMDAccessoryUUID


+(id)sharedInstance;
-(CGFloat)timeIntervalSinceFirstFailureForAccessoryUUID:(id)arg0 ;
-(NSUInteger)consecutiveFailureCountForAccessoryUUID:(id)arg0 ;
-(id)init;
-(void)handleSubmittedErrorCode:(NSInteger)arg0 forAccessoryUUID:(id)arg1 ;


@end


#endif