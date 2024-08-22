// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PACOALESCINGINTERVALTRACKER_H
#define PACOALESCINGINTERVALTRACKER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PAAccessLogger.h"

@interface PACoalescingIntervalTracker : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_coalescingIntervals;
    NSUInteger _injectedIdentifier;
}


@property (nonatomic) BOOL collectAssetIdentifiers; // ivar: _collectAssetIdentifiers
@property (nonatomic) CGFloat intervalEndTime; // ivar: _intervalEndTime
@property (readonly, weak, nonatomic) PAAccessLogger *logger; // ivar: _logger


-(id)initWithLogger:(id)arg0 ;
-(void)coalesce:(id)arg0 ;
-(void)dealloc;
-(void)expireIntervalWithMatcher:(id)arg0 state:(id)arg1 ;
-(void)invalidate;


@end


#endif