// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINSTATUSBARSTATEPROVIDER_H
#define SBMAINSTATUSBARSTATEPROVIDER_H

@class NSCountedSet, NSHashTable, NSString;
@protocol UIStatusBarStateObserver;


#import "SBStatusBarStateProvider.h"

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>

 {
    BOOL _overridePercent;
    BOOL _killActivity;
    BOOL _itemIsDisabled;
    BOOL _itemWasDisabled;
    NSCountedSet" _itemDisabledRequests;
    NSCountedSet *_dataUpdateAnimationsDisabledRequests;
    BOOL _timeEnabled;
    BOOL _statusBarTimeRequiresUpdate;
    BOOL _timeCloaked;
    BOOL _allButBatteryCloaked;
    BOOL _telephonyAndBluetoothCloaked;
}


@property (retain, nonatomic) NSHashTable *contentAssertions; // ivar: _contentAssertions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldPostForVisitedItem:(int)arg0 withUpdates:(BOOL)arg1 toAggregatorData:(struct ? *)arg2 lastPost:(struct ? *)arg3 ;
-(BOOL)contentAssertionsWantTimeEnabledAnimated:(*BOOL)arg0 duration:(*CGFloat)arg1 ;
-(BOOL)isTimeEnabled;
-(id)_identifierForStateAggregator:(id)arg0 ;
-(id)init;
-(void)_composePostDataFromAggregatorData:(struct ? *)arg0 ;
-(void)_enableTime:(BOOL)arg0 crossfade:(BOOL)arg1 crossfadeDuration:(CGFloat)arg2 immediately:(BOOL)arg3 ;
-(void)_updateDisabledItems;
-(void)acquireContentAssertion:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateContentAssertion:(id)arg0 ;
-(void)disableDataUpdateAnimationsForRequestor:(id)arg0 ;
-(void)disableStatusBarItem:(int)arg0 requestor:(id)arg1 ;
-(void)enableStatusBarItem:(int)arg0 requestor:(id)arg1 ;
-(void)enableTime:(BOOL)arg0 ;
-(void)enableTime:(BOOL)arg0 crossfade:(BOOL)arg1 crossfadeDuration:(CGFloat)arg2 ;
-(void)forceUpdateLocalStatusBarData;
-(void)relinquishContentAssertion:(id)arg0 ;
-(void)setAllItemsExceptBatteryCloaked:(BOOL)arg0 ;
-(void)setTelephonyAndBluetoothItemsCloaked:(BOOL)arg0 ;
-(void)setTimeCloaked:(BOOL)arg0 ;
-(void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg0 ;
-(void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg0 ;
-(void)statusBarStateProvider:(id)arg0 didPostStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg0 ;
-(void)updateTimeEnabled;
-(void)updateTimeEnabledImmediately:(BOOL)arg0 ;


@end


#endif