// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFBLACKLISTENGINE_H
#define WFBLACKLISTENGINE_H

@class NSMutableArray;
@protocol WFBlacklistDelegate;

#import <Foundation/Foundation.h>


@interface WFBlacklistEngine : NSObject {
    NSUInteger _profile;
    NSMutableArray *_blacklist;
}


@property CGFloat autojoinBlacklistExpiry; // ivar: _autojoinBlacklistExpiry
@property (nonatomic) NSObject<WFBlacklistDelegate> *blacklistDelegate; // ivar: _blacklistDelegate
@property CGFloat bssBlacklistExpiry; // ivar: _bssBlacklistExpiry
@property (retain) NSMutableArray *bssidThresholds; // ivar: _bssidThresholds
@property BOOL enabled; // ivar: _enabled
@property (retain) NSMutableArray *ssidThresholds; // ivar: _ssidThresholds
@property CGFloat wowBlacklistExpiry; // ivar: _wowBlacklistExpiry


+(id)stringRepresentationWithReason:(NSUInteger)arg0 ;
+(id)stringRepresentationWithState:(NSUInteger)arg0 ;
-(BOOL)_evaluateTriggersForBlacklisting:(id)arg0 reason:(NSUInteger)arg1 reasonData:(NSInteger)arg2 bssid:(id)arg3 ssid:(id)arg4 state:(NSUInteger)arg5 ;
-(BOOL)_evaluateTriggersForUnblacklisting:(id)arg0 unblacklistReason:(NSUInteger)arg1 ssid:(id)arg2 ;
-(BOOL)_ignoreTriggersForDeviceProfile:(NSUInteger)arg0 node:(id)arg1 ;
-(BOOL)_meetsThresholds:(NSUInteger)arg0 count:(unsigned int)arg1 perSsid:(BOOL)arg2 bssid:(id)arg3 ssid:(id)arg4 ;
-(BOOL)changeBlacklistingThresholds:(NSUInteger)arg0 value:(unsigned int)arg1 perSsid:(BOOL)arg2 ;
-(BOOL)isNetworkBlacklistedForAutoJoinDueToTrigDisc:(id)arg0 rssi:(*NSInteger)arg1 timestamp:(*CGFloat)arg2 ;
-(BOOL)isNetworkInBlacklistedState:(id)arg0 state:(NSUInteger)arg1 ;
-(BOOL)removeBlacklistedStateForNetworkWithReason:(id)arg0 state:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(NSInteger)getRssiWhenNetworkWasBlacklisted:(id)arg0 ;
-(NSUInteger)getBlacklistedNetworkCount;
-(id)_findBlacklistNode:(id)arg0 ;
-(id)getBlacklist;
-(id)getNodeFromBlacklist:(id)arg0 ;
-(id)initWithBlacklistDelegate:(id)arg0 profile:(NSUInteger)arg1 ;
-(id)retrieveBlacklistedNetworkSsids:(NSUInteger)arg0 ;
-(id)retrieveBlacklistedStateHistoryForNetwork:(id)arg0 state:(NSUInteger)arg1 timestamps:(id)arg2 reasonData:(id)arg3 ;
-(id)retrieveNetworksInBlacklistedState:(NSUInteger)arg0 ;
-(id)retrieveNetworksInBlacklistedStateHistory:(NSUInteger)arg0 ;
-(id)retrieveReasonsForNetworkInBlacklistedState:(id)arg0 state:(NSUInteger)arg1 timestamps:(id)arg2 reasonData:(id)arg3 ;
-(void)_printBlacklist;
-(void)_setBlacklistedState:(id)arg0 state:(NSUInteger)arg1 reason:(NSUInteger)arg2 reasonData:(NSInteger)arg3 ;
-(void)clearTriggerForNetworkWithUnblacklistReason:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)configureBlacklistedStateExpiryIntervalInSec:(CGFloat)arg0 state:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)networkPruned:(id)arg0 ;
-(void)networkRemovedForSsid:(id)arg0 ;
-(void)removeBlacklistedStateWithUnblacklistType:(NSUInteger)arg0 ;
-(void)removeBlacklistedStates;
-(void)removeExpiredBlacklistedState:(NSUInteger)arg0 ;
-(void)setDefaultBlacklistThresholds;
-(void)setTriggerForNetworkWithReason:(id)arg0 reason:(NSUInteger)arg1 reasonData:(NSInteger)arg2 bssid:(id)arg3 ;
-(void)setTriggerForNetworkWithReasonAndState:(id)arg0 reason:(NSUInteger)arg1 reasonData:(NSInteger)arg2 bssid:(id)arg3 state:(NSUInteger)arg4 ;


@end


#endif