// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCANALYTICS_H
#define GCANALYTICS_H

@class NSMutableDictionary, NSString, NSTimer;

#import <Foundation/Foundation.h>


@interface GCAnalytics : NSObject {
    NSMutableDictionary *_controllersData;
    NSString *_bundleID;
    NSTimer *_eventPollTimer;
}




+(id)instance;
-(BOOL)sendEvent:(id)arg0 withPayloadBuilder:(id)arg1 ;
-(BOOL)sendEvent:(id)arg0 withXPCPayloadBuilder:(id)arg1 ;
-(id)getBundleID;
-(id)init;
-(void)checkMultipleControllers;
-(void)dealloc;
-(void)onSiriMotionEnabled;
-(void)publishController:(id)arg0 ;
-(void)runInputPollTimer;
-(void)sendEvent:(id)arg0 withPayload:(id)arg1 ;
-(void)sendEvent:(id)arg0 withXPCPayload:(id)arg1 ;
-(void)sendHapticsClientDestroyedEventForBundleID:(id)arg0 productCategory:(id)arg1 totalPlayers:(int)arg2 sessionTotalDuration:(int)arg3 sessionActiveDuration:(int)arg4 terminationReason:(id)arg5 ;
-(void)sendHapticsEngineCreatedEventForBundleID:(id)arg0 productCategory:(id)arg1 hapticsLocality:(id)arg2 ;
-(void)sendHapticsErrorRaisedEventFromSource:(id)arg0 productCategory:(id)arg1 errorType:(id)arg2 ;
-(void)sendHapticsPlayerDestroyedEventForBundleID:(id)arg0 productCategory:(id)arg1 totalEventsProcessed:(int)arg2 transientEventsProcessed:(int)arg3 continuousEventsProcessed:(int)arg4 parameterCurvesProcessed:(int)arg5 sessionTotalDuration:(int)arg6 sessionActiveDuration:(int)arg7 ;
-(void)sendInputsPressedEvent:(struct ? *)arg0 ;
-(void)sendRPKitInstantCaptureBufferStartedEventForBundleID:(id)arg0 ;
-(void)sendRPKitInstantCaptureSavedEventForBundleID:(id)arg0 productCategory:(id)arg1 ;
-(void)sendRPKitManualRecordingSavedEventForBundleID:(id)arg0 productCategory:(id)arg1 duration:(int)arg2 ;
-(void)sendRPKitScreenshotSavedEventForBundleID:(id)arg0 productCategory:(id)arg1 ;
-(void)sendSettingsButtonCustomizedEventForBundleID:(id)arg0 productCategory:(id)arg1 button:(id)arg2 ;
-(void)sendSettingsCustomizationsResetEventForBundleID:(id)arg0 productCategory:(id)arg1 ;
-(void)sendSettingsCustomizationsToggledEventForBundleID:(id)arg0 productCategory:(id)arg1 toggledOn:(BOOL)arg2 ;
-(void)sendSettingsCustomizedAppsEventForTotalCustomizedAppsCount:(int)arg0 ;
-(void)sendSettingsDevicesEventForTotalCustomizedControllersCount:(int)arg0 ;
-(void)sendSettingsEnteredEvent;
-(void)sendSettingsIdentifyControllerEventForProductCategory:(id)arg0 ;
-(void)sendSettingsRPKitGesturesCustomized:(id)arg0 from:(id)arg1 ;
-(void)unpublishController:(id)arg0 ;


@end


#endif