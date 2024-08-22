// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUUSERNOTIFICATIONSESSION_H
#define CUUSERNOTIFICATIONSESSION_H

@class NSMutableDictionary, NSString, NSError, UNUserNotificationCenter, NSArray, NSDictionary;
@protocol UNUserNotificationCenterDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUUserNotificationSession : NSObject <UNUserNotificationCenterDelegate>

 {
    NSMutableDictionary *_actions;
    BOOL _actionsChanged;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_requestIdentifier;
    int _state;
    NSError *_stepError;
    int _stepState;
    NSObject<OS_dispatch_source> *_timer;
    UNUserNotificationCenter *_unCenter;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (copy, nonatomic) NSArray *bodyArguments; // ivar: _bodyArguments
@property (copy, nonatomic) NSString *bodyKey; // ivar: _bodyKey
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (copy, nonatomic) NSString *iconAppIdentifier; // ivar: _iconAppIdentifier
@property (copy, nonatomic) NSString *iconName; // ivar: _iconName
@property (copy, nonatomic) NSString *iconPath; // ivar: _iconPath
@property (copy, nonatomic) NSString *iconSystemName; // ivar: _iconSystemName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int interruptionLevel; // ivar: _interruptionLevel
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSInteger soundAlertType; // ivar: _soundAlertType
@property (copy, nonatomic) NSArray *subtitleArguments; // ivar: _subtitleArguments
@property (copy, nonatomic) NSString *subtitleKey; // ivar: _subtitleKey
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds
@property (copy, nonatomic) NSArray *titleArguments; // ivar: _titleArguments
@property (copy, nonatomic) NSString *titleKey; // ivar: _titleKey
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)_runInit:(*id)arg0 ;
-(BOOL)_runRequestAddStart:(*id)arg0 ;
-(BOOL)_runResponse:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_invalidate;
-(void)_invalidated;
-(void)_reportError:(id)arg0 ;
-(void)_reportTimeout;
-(void)_run;
-(void)_runAuthorizeCheckStart;
-(void)_runAuthorizeRequestStart;
-(void)_updateActionCategories;
-(void)activate;
-(void)addActionWithIdentifier:(id)arg0 title:(id)arg1 flags:(unsigned int)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeActionWithIdentifier:(id)arg0 ;
-(void)removeAllActions;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif