// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERACLIPSIGNIFICANTEVENTBULLETIN_H
#define HMDCAMERACLIPSIGNIFICANTEVENTBULLETIN_H

@class NSString, NSUUID, NSDate, NSURL, NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "HMDAccessory.h"
#import "HMDCameraProfile.h"
#import "HMDHome.h"
#import "HMDService.h"

@interface HMDCameraClipSignificantEventBulletin : NSObject

@property (readonly) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *body; // ivar: _body
@property (readonly) HMDCameraProfile *camera; // ivar: _camera
@property (readonly, copy) NSUUID *clipUUID; // ivar: _clipUUID
@property (readonly, copy) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly) HMDHome *home; // ivar: _home
@property (readonly) NSURL *previewImageFilePathURL; // ivar: _previewImageFilePathURL
@property (readonly, copy) NSUUID *previewImageNotificationUUID; // ivar: _previewImageNotificationUUID
@property (readonly, copy) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) HMDService *service; // ivar: _service
@property (readonly) BOOL shouldShowProvideFeedbackButton; // ivar: _shouldShowProvideFeedbackButton
@property (readonly, copy) NSSet *significantEvents; // ivar: _significantEvents
@property (readonly, copy) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (readonly, copy) NSString *title; // ivar: _title
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


+(NSUInteger)effectiveReasonForSignificantEvent:(id)arg0 ;
+(id)actionURLForHomeUUID:(id)arg0 cameraUUID:(id)arg1 ;
+(id)localizedMessageForSignificantEvents:(id)arg0 cameraAccessory:(id)arg1 ;
-(id)createUserInfoWithWithSignificantEvents:(id)arg0 previewImageNotificationUUID:(id)arg1 camera:(id)arg2 home:(id)arg3 accessory:(id)arg4 recordingService:(id)arg5 clipUUID:(id)arg6 ;
-(id)initWithSignificantEvent:(id)arg0 previewImageFilePathURL:(id)arg1 dateOfOccurrence:(id)arg2 camera:(id)arg3 home:(id)arg4 accessory:(id)arg5 recordingService:(id)arg6 shouldShowProvideFeedbackButton:(BOOL)arg7 ;
-(id)initWithSignificantEvents:(id)arg0 previewImageNotificationUUID:(id)arg1 previewImageFilePathURL:(id)arg2 dateOfOccurrence:(id)arg3 camera:(id)arg4 home:(id)arg5 accessory:(id)arg6 recordingService:(id)arg7 clipUUID:(id)arg8 shouldShowProvideFeedbackButton:(BOOL)arg9 ;
-(id)initWithSignificantEvents:(id)arg0 previewImageNotificationUUID:(id)arg1 previewImageFilePathURL:(id)arg2 dateOfOccurrence:(id)arg3 camera:(id)arg4 home:(id)arg5 accessory:(id)arg6 recordingService:(id)arg7 requestIdentifier:(id)arg8 clipUUID:(id)arg9 shouldShowProvideFeedbackButton:(BOOL)arg10 ;


@end


#endif