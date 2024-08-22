// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWATCHAPPSTATEMONITOR_H
#define HDWATCHAPPSTATEMONITOR_H

@class NSString;
@protocol FBSDisplayLayoutObserver, HDWatchAppStateMonitorDelegate;

#import <Foundation/Foundation.h>


@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver>

 {
    NSString *_bundleIdentifier;
}


@property (readonly, nonatomic) BOOL appIsActive; // ivar: _appIsActive
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDWatchAppStateMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithFirstPartyWorkoutApp;
-(void)dealloc;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;


@end


#endif