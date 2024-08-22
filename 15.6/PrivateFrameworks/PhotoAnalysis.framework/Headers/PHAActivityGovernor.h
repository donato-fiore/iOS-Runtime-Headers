// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAACTIVITYGOVERNOR_H
#define PHAACTIVITYGOVERNOR_H

@protocol OS_xpc_object, OS_dispatch_source, PHAActivityGovernorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHAActivityGovernor : NSObject {
    char * _backgroundActivityName;
    char * _foregroundActivityName;
}


@property (retain) NSObject<OS_xpc_object> *backgroundActivity; // ivar: _backgroundActivity
@property (retain) NSObject<OS_dispatch_source> *backgroundDeferCheckTimer; // ivar: _backgroundDeferCheckTimer
@property (weak, nonatomic) NSObject<PHAActivityGovernorDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_xpc_object> *foregroundActivity; // ivar: _foregroundActivity
@property (retain) NSObject<OS_dispatch_source> *foregroundDeferCheckTimer; // ivar: _foregroundDeferCheckTimer
@property (nonatomic) BOOL hasBackgroundAccess; // ivar: _hasBackgroundAccess
@property (nonatomic) BOOL hasForegroundAccess; // ivar: _hasForegroundAccess
@property (nonatomic) BOOL overrideAccess; // ivar: _overrideAccess
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL simulatedNeverHasAccess; // ivar: _simulatedNeverHasAccess
@property (nonatomic) BOOL simulatedWantsDefer; // ivar: _simulatedWantsDefer
@property (nonatomic) CGFloat timeOfLastForegroundGrant; // ivar: _timeOfLastForegroundGrant
@property (nonatomic) CGFloat timeOfLastForegroundWantRequest; // ivar: _timeOfLastForegroundWantRequest
@property (nonatomic) CGFloat timeSpentForegroundGranted; // ivar: _timeSpentForegroundGranted
@property (nonatomic) CGFloat timeSpentWantingForeground; // ivar: _timeSpentWantingForeground
@property (nonatomic) BOOL wantsBackgroundAccess; // ivar: _wantsBackgroundAccess
@property (nonatomic) BOOL wantsForegroundAccess; // ivar: _wantsForegroundAccess


-(BOOL)_inq_hasAccessForLevel:(NSUInteger)arg0 ;
-(BOOL)_inq_wantsAccessForLevel:(NSUInteger)arg0 ;
-(char *)_activityNameForLevel:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)statusAsDictionary;
-(void)_generateActivityNames;
-(void)_inq_finishActivity:(*id)arg0 accessLevel:(NSUInteger)arg1 timer:(id)arg2 ;
-(void)_inq_handleRequestChangeForAccessLevel:(NSUInteger)arg0 ;
-(void)_inq_installDeferMonitorForActivity:(id)arg0 accessLevel:(NSUInteger)arg1 ;
-(void)_inq_registerActivityNamed:(char *)arg0 withCriteria:(id)arg1 accessLevel:(NSUInteger)arg2 ;
-(void)_inq_removeDeferTimer:(id)arg0 ;
-(void)_inq_teardownActivity:(*id)arg0 accessLevel:(NSUInteger)arg1 timer:(id)arg2 ;
-(void)dealloc;


@end


#endif