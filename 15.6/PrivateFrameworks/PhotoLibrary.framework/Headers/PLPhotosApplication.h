// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOSAPPLICATION_H
#define PLPHOTOSAPPLICATION_H

@class UIApplication, NSString, NSDictionary, NSSet, UIWindow;
@protocol UIApplicationDelegate;



@interface PLPhotosApplication : UIApplication <UIApplicationDelegate>

 {
    BOOL _receivingRemoteControlEvents;
    int _observeForRechabilityChanges;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
}


@property (retain, nonatomic) NSString *currentTestName; // ivar: _currentTestName
@property (retain, nonatomic) NSDictionary *currentTestOptions; // ivar: _currentTestOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOnWifi; // ivar: _isOnWifi
@property (readonly, nonatomic) BOOL isReachable; // ivar: _isReachable
@property (copy, nonatomic) NSSet *notificationSuppressionContexts; // ivar: _notificationSuppressionContexts
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


+(void)initialize;
-(BOOL)useCompatibleSuspensionAnimation;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_networkReachabilityDidChange:(id)arg0 ;
-(void)_registerForPhotoStreamActivityNotifications;
-(void)_startObservingReachabilityChanges;
-(void)_stopObservingReachabilityChanges;
-(void)_unregisterForPhotoStreamActivityNotifications;
-(void)_updateSuspensionSettings;
-(void)applicationDidFinishLaunching:(id)arg0 ;
-(void)dealloc;
-(void)disableNetworkObservation;
-(void)enableNetworkObservation;
-(void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg0 flags:(NSUInteger)arg1 ;
-(void)photosPreferencesChanged;
-(void)prepareForApplicationDidBecomeActive;
-(void)prepareForApplicationDidEnterBackground;
-(void)prepareForApplicationWillEnterForeground;
-(void)setReceivingRemoteControlEvents:(BOOL)arg0 ;


@end


#endif