// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUSERNOTIFICATIONMANAGER_H
#define MCUSERNOTIFICATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface MCUserNotificationManager : NSObject

@property (readonly, nonatomic) BOOL hasOutstandingNotifications;


+(id)sharedManager;
-(id)_invalidTargetMessageForDevice:(NSUInteger)arg0 ;
-(id)_purgatoryMessageForDevice:(NSUInteger)arg0 ;
-(id)displayQueueProfileError:(id)arg0 targetDevice:(NSUInteger)arg1 ;
-(id)init;
-(void)_updateTitle:(*id)arg0 andMessage:(*id)arg1 withTargetFailureInfoForDevice:(NSUInteger)arg2 fromError:(id)arg3 ;
-(void)_updateTitle:(*id)arg0 andMessage:(*id)arg1 withUnavailableTargetInfoForDevice:(NSUInteger)arg2 ;
-(void)cancelAllNotificationsCompletionBlock:(id)arg0 ;
// -(void)cancelNotificationEntriesMatchingPredicate:(id)arg0 completionBlock:(unk)arg1  ;
-(void)cancelNotificationsWithIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)displayUserNotificationWithIdentifier:(id)arg0 title:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 textfieldPlaceholder:(id)arg6 displayOnLockScreen:(BOOL)arg7 dismissOnLock:(BOOL)arg8 displayInAppWhitelistModes:(BOOL)arg9 dismissAfterTimeInterval:(CGFloat)arg10 assertion:(id)arg11 completionBlock:(id)arg12 ;
-(void)inviteUserToVPPWithTitle:(id)arg0 message:(id)arg1 assertion:(id)arg2 completionBlock:(id)arg3 ;
-(void)mainQueueDidReceiveAppWhitelistChangedNotification;
-(void)promptUserToLogIntoiTunesWithTitle:(id)arg0 message:(id)arg1 assertion:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif