// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAPLAYERCONFIGURATION_H
#define HUCAMERAPLAYERCONFIGURATION_H

@class HMCameraProfile, NSUUID, HMHome, NSDate;

#import <Foundation/Foundation.h>


@interface HUCameraPlayerConfiguration : NSObject

@property (readonly, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, nonatomic) NSUUID *clipUUID; // ivar: _clipUUID
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSUUID *notificationUUID; // ivar: _notificationUUID
@property (retain, nonatomic) NSDate *startingPlaybackDate; // ivar: _startingPlaybackDate


-(BOOL)isConfiguredForLiveStream;
-(id)description;
-(id)initWithHome:(id)arg0 cameraProfile:(id)arg1 notificationUUID:(id)arg2 clipUUID:(id)arg3 ;


@end


#endif