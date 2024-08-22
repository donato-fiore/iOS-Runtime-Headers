// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSYSTEMALERTDIALOGTASK_H
#define AMSSYSTEMALERTDIALOGTASK_H



#import "AMSTask.h"
#import "AMSDialogResult.h"
#import "AMSDialogRequest.h"

@interface AMSSystemAlertDialogTask : AMSTask

@property (retain, nonatomic) AMSDialogResult *autoDismissResult; // ivar: _autoDismissResult
@property NSInteger defaultButtonIndex; // ivar: _defaultButtonIndex
@property BOOL dismissOnHomeButton; // ivar: _dismissOnHomeButton
@property BOOL dismissOnLock; // ivar: _dismissOnLock
@property BOOL displaysOnLockscreen; // ivar: _displaysOnLockscreen
@property BOOL isDialogDismissalEnabled; // ivar: _isDialogDismissalEnabled
@property (readonly, nonatomic) AMSDialogRequest *request; // ivar: _request
@property BOOL shouldDismissAfterUnlock; // ivar: _shouldDismissAfterUnlock
@property BOOL shouldDisplayAsTopMost; // ivar: _shouldDisplayAsTopMost
@property BOOL shouldPendInSetupIfNotAllowed; // ivar: _shouldPendInSetupIfNotAllowed
@property NSInteger unlockActionButtonIndex; // ivar: _unlockActionButtonIndex
@property *__CFUserNotification userNotification; // ivar: _userNotification


-(?)_handleResponseForNote:(?)arg0 buttonActionskeys;
-(NSInteger)_defaultButtonIndexForActions:(id)arg0 ;
-(NSInteger)_keyboardTypeFor:(NSInteger)arg0 ;
-(id)_reorderButtonActions;
-(id)initWithRequest:(id)arg0 ;
-(id)present;
-(struct __CFDictionary *)_createNoteDictionaryWithKeys:(struct ButtonKey *)arg0 buttonActions:(id)arg1 outOptions:(*NSUInteger)arg2 ;
-(struct __CFUserNotification *)_showNotificationFromDictionary:(struct __CFDictionary *)arg0 options:(NSUInteger)arg1 ;
-(void)_dismiss;


@end


#endif