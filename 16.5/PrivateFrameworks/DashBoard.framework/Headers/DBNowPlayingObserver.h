// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBNOWPLAYINGOBSERVER_H
#define DBNOWPLAYINGOBSERVER_H

@class NSString;
@protocol CPUINowPlayingObserving, DBNowPlayingDelegate;

#import <Foundation/Foundation.h>

#import "DBAppHistory.h"
#import "DBApplicationInfo.h"
#import "DBApplicationLaunchInfo.h"

@interface DBNowPlayingObserver : NSObject <CPUINowPlayingObserving>



@property (readonly, weak, nonatomic) DBAppHistory *appHistory; // ivar: _appHistory
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBNowPlayingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBApplicationInfo *nowPlayingApplicationInfo; // ivar: _nowPlayingApplicationInfo
@property (readonly, nonatomic) DBApplicationLaunchInfo *nowPlayingLaunchInfo;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (readonly) Class superclass;


-(BOOL)_isValidNowPlayingApplication:(id)arg0 ;
-(id)initWithAppHistory:(id)arg0 ;
-(id)nowPlayingLaunchInfoWithSource:(NSUInteger)arg0 ;
-(void)_nowPlayingDidChangeToBundleIdentifier:(id)arg0 ;
-(void)_updatePlaybackStateForBundleIdentifier:(id)arg0 playing:(BOOL)arg1 ;
-(void)nowPlayingManager:(id)arg0 didThrottleUpdateForBundleIdentifier:(id)arg1 ;
-(void)nowPlayingManager:(id)arg0 didUpdateSnapshot:(id)arg1 ;


@end


#endif