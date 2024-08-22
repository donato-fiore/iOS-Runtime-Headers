// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUIACTIVITYCONTROLLER_H
#define MRUIACTIVITYCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC25MediaRemoteDaemonServices18ActivityController.h"

@interface MRUIActivityController : NSObject

@property (readonly, nonatomic) _TtC25MediaRemoteDaemonServices18ActivityController *activityController; // ivar: _activityController
@property (readonly, nonatomic) NSString *nowPlayingActivityIdentifier;


+(BOOL)deviceSupportsActivities;
-(id)contextForActivityIdentifier:(id)arg0 ;
-(id)currentActivityInfo;
-(id)init;
-(void)clearActivities;
-(void)endMirroringActivity;
-(void)endNowPlayingActivity;
-(void)startMirroringActivity;
-(void)startNowPlayingActivity;


@end


#endif