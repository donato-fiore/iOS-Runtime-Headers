// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYPAIRINGPROGRESSSTATEMAP_H
#define HMDACCESSORYPAIRINGPROGRESSSTATEMAP_H

@class NSString, NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMDAccessoryPairingProgressStateMap : NSObject {
    os_unfair_lock_s _accessoryPairingProgressStateMapLock;
}


@property (retain, nonatomic) NSString *lastProgressState; // ivar: _lastProgressState
@property (retain, nonatomic) NSDate *lastProgressStateEventTime; // ivar: _lastProgressStateEventTime
@property (retain, nonatomic) NSString *longestProgressState; // ivar: _longestProgressState
@property (retain, nonatomic) NSMutableDictionary *progressStateMap; // ivar: _progressStateMap


-(CGFloat)getTimeDurationForLongestProgressState;
-(id)initWithDate:(id)arg0 ;
-(void)updateWithProgressState:(id)arg0 date:(id)arg1 ;


@end


#endif