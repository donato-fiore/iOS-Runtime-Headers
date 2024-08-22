// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STLOCKOUTPOLICYCONTROLLER_H
#define STLOCKOUTPOLICYCONTROLLER_H

@class STManagementState, STAskForTimeResource, DMFCategoryPolicyMonitor, DMFApplicationPolicyMonitor, DMFWebsitePolicyMonitor, NSSet, NSString, CNContactStore, NSArray, STConversation, STConversationContext, CNContainer, NSURL;
@protocol STLockoutPolicyControllerDelegate;

#import <Foundation/Foundation.h>


@interface STLockoutPolicyController : NSObject {
    NSUInteger _reuseIdentifier;
    NSInteger _style;
    NSUInteger _stateBeforePending;
    STManagementState *_managementState;
    STAskForTimeResource *_askForTimeResource;
    DMFCategoryPolicyMonitor *_categoryPolicyMonitor;
    DMFApplicationPolicyMonitor *_applicationPolicyMonitor;
    DMFWebsitePolicyMonitor *_websitePolicyMonitor;
    id<STLockoutPolicyControllerDelegate> *_delegate;
}


@property (readonly, copy) NSSet *blockedContactsHandles;
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly) BOOL contactsEditable; // ivar: _contactsEditable
@property (copy) NSArray *contactsHandles; // ivar: _contactsHandles
@property (retain) STConversation *conversation; // ivar: _conversation
@property (retain) STConversationContext *conversationContext; // ivar: _conversationContext
@property (readonly) CNContainer *iCloudContainer;
@property (readonly) BOOL needsToSetRestrictionsPasscode;
@property (readonly) BOOL shouldAllowOneMoreMinute;
@property (readonly) NSUInteger state; // ivar: _state
@property (copy, nonatomic) NSURL *websiteURL; // ivar: _websiteURL


-(BOOL)_actionIgnoreLimitForTodayWithCompletionHandler:(id)arg0 ;
-(BOOL)_actionOneMoreMinuteWithCompletionHandler:(id)arg0 ;
-(BOOL)_actionRemindMeInMinutesWithCompletionHandler:(id)arg0 ;
-(BOOL)_actionRemindMeInOneHourWithCompletionHandler:(id)arg0 ;
-(BOOL)_changeInternalStateTo:(NSUInteger)arg0 ;
-(BOOL)_isRestrictionsPasscodeSet;
-(BOOL)_requestAdditionalTime:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)_shouldRequestMoreTime;
-(BOOL)handleAction:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(CGFloat)_timeIntervalToEndOfDay;
-(id)_makeAskForTimeResource;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 contactsHandles:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 conversationContext:(id)arg1 contactStore:(id)arg2 delegate:(id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)initWithCategoryIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)initWithWebsiteURL:(id)arg0 delegate:(id)arg1 ;
-(void)_allowedByContactsHandleDidChange:(id)arg0 conversationContext:(id)arg1 ;
-(void)_allowedByScreenTimeDidChange:(BOOL)arg0 conversationContext:(id)arg1 ;
-(void)_applicationCurrentlyLimitedDidChange:(BOOL)arg0 conversationContext:(id)arg1 ;
-(void)_askForTimeResponseWithState:(NSInteger)arg0 respondingParent:(id)arg1 amountGranted:(id)arg2 error:(id)arg3 ;
-(void)_authenticatedApproveForAdditionalTime:(CGFloat)arg0 withCompletionHandler:(id)arg1 ;
-(void)_changePolicyToCurrent;
-(void)_changePolicyToCurrentWithBundleIdentifier:(id)arg0 ;
-(void)_changePolicyToCurrentWithCategoryIdentifier:(id)arg0 ;
-(void)_changePolicyToCurrentWithURL:(id)arg0 ;
-(void)_changeStateToBeforePending;
-(void)_changeStateToInitial;
-(void)_handleChangeToPolicy:(NSInteger)arg0 ;
-(void)_setupCategoryPolicyMonitorForIdentifier:(id)arg0 ;
-(void)_setupWebsitePolicyMonitorForURL:(id)arg0 ;
-(void)_updateAllowedByScreenTime:(BOOL)arg0 applicationCurrentlyLimited:(BOOL)arg1 allowedByContactsHandle:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif