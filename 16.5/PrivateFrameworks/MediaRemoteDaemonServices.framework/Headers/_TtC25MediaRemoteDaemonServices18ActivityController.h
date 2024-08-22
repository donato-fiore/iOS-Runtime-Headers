// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC25MEDIAREMOTEDAEMONSERVICES18ACTIVITYCONTROLLER_H
#define _TTC25MEDIAREMOTEDAEMONSERVICES18ACTIVITYCONTROLLER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _TtC25MediaRemoteDaemonServices18ActivityController : NSObject

@property (nonatomic, readonly) NSDictionary *currentActivityInfo;
@property (nonatomic, readonly) NSString *nowPlayingActivityIdentifier;


+(BOOL)deviceSupportsActivities;
-(id)contextForActivityIdentifier:(id)arg0 ;
-(id)init;
-(void)clearActivities;
-(void)endMirroringActivity;
-(void)endNowPlayingActivity;
-(void)startMirroringActivity;
-(void)startNowPlayingActivity;


@end


#endif