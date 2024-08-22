// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYPAIRINGEVENTRETRYMAP_H
#define HMDACCESSORYPAIRINGEVENTRETRYMAP_H

@class HMFUnfairLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMDAccessoryPairingEventRetryMap : NSObject

@property (readonly, nonatomic) HMFUnfairLock *accessoryPairingRetryMapLock; // ivar: _accessoryPairingRetryMapLock
@property (readonly, nonatomic) NSMutableDictionary *retryCountMap; // ivar: _retryCountMap


+(id)sharedInstance;
-(NSUInteger)retryCountForIdentifier:(id)arg0 ;
-(id)init;
-(void)clearRetryCountMap;
-(void)incrementRetryCount:(id)arg0 ;


@end


#endif