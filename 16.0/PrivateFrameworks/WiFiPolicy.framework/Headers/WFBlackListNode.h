// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBLACKLISTNODE_H
#define WFBLACKLISTNODE_H

@class NSMutableArray;
@protocol WFBlacklistNetwork;

#import <Foundation/Foundation.h>


@interface WFBlackListNode : NSObject {
    NSMutableArray *_blacklistMetrics;
}


@property (retain) NSMutableArray *blacklistTriggers; // ivar: _blacklistTriggers
@property (retain) NSMutableArray *blacklistedStatesCurrent; // ivar: _blacklistedStatesCurrent
@property (retain) NSMutableArray *blacklistedStatesHistory; // ivar: _blacklistedStatesHistory
@property BOOL enterprisePolicy; // ivar: _enterprisePolicy
@property (retain) NSObject<WFBlacklistNetwork> *networkDelegate; // ivar: _networkDelegate


-(BOOL)containsNetwork:(id)arg0 ;
-(BOOL)hasBlacklistedState:(NSUInteger)arg0 ;
-(BOOL)updateNetwork:(id)arg0 ;
-(id)_copyCreateBlacklistedState:(NSUInteger)arg0 reason:(NSUInteger)arg1 reasonData:(NSInteger)arg2 ;
-(id)initWithBlacklistNetwork:(id)arg0 ;
-(void)addBlacklistTrigger:(NSUInteger)arg0 reasonData:(NSInteger)arg1 bssid:(id)arg2 ;
-(void)addBlacklistedState:(NSUInteger)arg0 reason:(NSUInteger)arg1 reasonData:(NSInteger)arg2 ;
-(void)addBlacklistedStateHistory:(id)arg0 state:(NSUInteger)arg1 reason:(NSUInteger)arg2 reasonData:(NSInteger)arg3 ;
-(void)dealloc;
-(void)networkPruned;
-(void)processBlacklistedStateMetric:(id)arg0 unblacklisting:(BOOL)arg1 unblacklistingReason:(NSUInteger)arg2 ;


@end


#endif