// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLPROXHANDOFFSUMMARYVIEWUPDATER_H
#define HUQUICKCONTROLPROXHANDOFFSUMMARYVIEWUPDATER_H

@class NSString, PCTelephonyActivity, PCTimerActivity;
@protocol HFProxControlActivityClientDelegate, PCActivity, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HUQuickControlSummaryNavigationBarTitleView.h"

@interface HUQuickControlProxHandOffSummaryViewUpdater : NSObject <HFProxControlActivityClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PCTelephonyActivity *homePodPhoneCallActivity; // ivar: _homePodPhoneCallActivity
@property (retain, nonatomic) PCTimerActivity *homePodTimerActivity; // ivar: _homePodTimerActivity
@property (retain, nonatomic) NSObject<PCActivity> *lastActivity; // ivar: _lastActivity
@property (retain, nonatomic) NSObject<OS_dispatch_source> *phoneCallStatusUpdateTimer; // ivar: _phoneCallStatusUpdateTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerStatusUpdateTimer; // ivar: _timerStatusUpdateTimer
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *titleView; // ivar: _titleView


-(BOOL)_isHomePodPhoneCallStatusUpdateTimerActive;
-(BOOL)_isHomePodTimerStatusUpdateTimerActive;
-(id)initWithNavigationBarTitleView:(id)arg0 ;
-(void)_invalidateHomePodPhoneCallStatusUpdateTimer;
-(void)_invalidateHomePodTimerStatusUpdateTimer;
-(void)_setupObservableActivityForActivity:(id)arg0 ;
-(void)_startHomePodPhoneCallStatusUpdateTimer;
-(void)_startHomePodTimerStatusUpdateTimer;
-(void)_updateSummaryViewForActivities:(id)arg0 forProxControlID:(id)arg1 disambiguationContext:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateActivities:(id)arg0 forProxControlID:(id)arg1 disambiguationContext:(id)arg2 ;


@end


#endif