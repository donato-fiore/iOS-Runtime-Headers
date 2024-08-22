// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFCLIENTCONFIGURATION_H
#define AFCLIENTCONFIGURATION_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFAccessibilityState.h"
#import "AFAudioPlaybackRequest.h"

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) AFAccessibilityState *accessibilityState; // ivar: _accessibilityState
@property (readonly, nonatomic) BOOL areAnnouncementRequestsPermittedByPresentationWhileActive; // ivar: _areAnnouncementRequestsPermittedByPresentationWhileActive
@property (readonly, nonatomic) NSInteger deviceRingerSwitchState; // ivar: _deviceRingerSwitchState
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowBeginDate; // ivar: _deviceSetupFlowBeginDate
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowEndDate; // ivar: _deviceSetupFlowEndDate
@property (readonly, nonatomic) BOOL isDeviceInCarDNDMode; // ivar: _isDeviceInCarDNDMode
@property (readonly, nonatomic) BOOL isDeviceInStarkMode; // ivar: _isDeviceInStarkMode
@property (readonly, nonatomic) BOOL isDeviceWatchAuthenticated; // ivar: _isDeviceWatchAuthenticated
@property (readonly, nonatomic) float outputVolume; // ivar: _outputVolume
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest; // ivar: _tapToSiriAudioPlaybackRequest
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest; // ivar: _twoShotAudioPlaybackRequest


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAccessibilityState:(id)arg0 deviceRingerSwitchState:(NSInteger)arg1 isDeviceInCarDNDMode:(BOOL)arg2 isDeviceInStarkMode:(BOOL)arg3 isDeviceWatchAuthenticated:(BOOL)arg4 areAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)arg5 outputVolume:(float)arg6 tapToSiriAudioPlaybackRequest:(id)arg7 twoShotAudioPlaybackRequest:(id)arg8 deviceSetupFlowBeginDate:(id)arg9 deviceSetupFlowEndDate:(id)arg10 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif