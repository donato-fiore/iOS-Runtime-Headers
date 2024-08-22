// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFCOREANALYTICSDEVICECONTEXTPAYLOADMUTATION_H
#define _AFCOREANALYTICSDEVICECONTEXTPAYLOADMUTATION_H

@class NSString, NSNumber;
@protocol AFCoreAnalyticsDeviceContextPayloadMutating;

#import <Foundation/Foundation.h>

#import "AFCoreAnalyticsDeviceContextPayload.h"

@interface _AFCoreAnalyticsDeviceContextPayloadMutation : NSObject <AFCoreAnalyticsDeviceContextPayloadMutating>

 {
    AFCoreAnalyticsDeviceContextPayload *_base;
    NSString *_nearbyProductType;
    NSString *_proximity;
    NSNumber *_alarmFiring;
    NSNumber *_timerFiring;
    NSString *_playbackState;
    NSNumber *_playbackRecency;
    NSString *_homeAnnouncementState;
    NSNumber *_homeAnnouncementRecency;
    NSString *_nearbyDevicesRequestIdentifier;
    NSString *_targetedResult;
    NSString *_contextIdentifier;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getAlarmFiring;
-(id)getContextIdentifier;
-(id)getHomeAnnouncementRecency;
-(id)getHomeAnnouncementState;
-(id)getNearbyDevicesRequestIdentifier;
-(id)getNearbyProductType;
-(id)getPlaybackRecency;
-(id)getPlaybackState;
-(id)getProximity;
-(id)getTargetedResult;
-(id)getTimerFiring;
-(id)initWithBase:(id)arg0 ;
-(void)setAlarmFiring:(id)arg0 ;
-(void)setContextIdentifier:(id)arg0 ;
-(void)setHomeAnnouncementRecency:(id)arg0 ;
-(void)setHomeAnnouncementState:(id)arg0 ;
-(void)setNearbyDevicesRequestIdentifier:(id)arg0 ;
-(void)setNearbyProductType:(id)arg0 ;
-(void)setPlaybackRecency:(id)arg0 ;
-(void)setPlaybackState:(id)arg0 ;
-(void)setProximity:(id)arg0 ;
-(void)setTargetedResult:(id)arg0 ;
-(void)setTimerFiring:(id)arg0 ;


@end


#endif