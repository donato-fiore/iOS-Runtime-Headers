// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDBADGEUTILITIES_H
#define IMDBADGEUTILITIES_H

@class UNUserNotificationCenter, IMDefaults;

#import <Foundation/Foundation.h>


@interface IMDBadgeUtilities : NSObject {
    NSUInteger _unreadCount;
    NSInteger _lastFailedMessageDate;
    BOOL _showingFailure;
    BOOL _isUnexpectedlyLogOut;
    BOOL _addedObserverForUnexpectedlyLoggedOut;
}


@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance; // ivar: _sharedDefaultsInstance


+(BOOL)_iMessageEnabled;
+(BOOL)_iMessageFailedAccountIsIrreparable;
+(BOOL)_isTryingToLogin;
+(BOOL)_isUsableSendingForAccount:(id)arg0 ;
+(BOOL)_isUserIntentNotLoggedOut;
+(id)_accountsArrayForServiceIMessage;
+(id)sharedInstance;
-(BOOL)_isUnexpectedlyLogOutValue;
-(BOOL)_isUnexpectedlyLoggedOut;
-(BOOL)_shouldShowFailureString;
-(BOOL)isInAppleStoreDemoMode;
-(NSInteger)_savedFailureDate;
-(id)init;
-(id)initWithMessageStore:(id)arg0 ;
-(id)initWithMessageStore:(id)arg0 defaultsStore:(id)arg1 ;
-(void)_cacheFailureDate:(NSInteger)arg0 ;
-(void)_checkIfUnexpectedlyLoggedOut;
-(void)_clearFailureBadge;
-(void)_compareLastFailureDateAndUpdateBadge:(NSInteger)arg0 ;
-(void)_handleUnexpectedLogout;
-(void)_postBadgeNumber:(id)arg0 ;
-(void)_postBadgeString:(id)arg0 ;
-(void)_saveFailureDate:(NSInteger)arg0 ;
-(void)_stopSuppressingSound;
-(void)_updateBadge;
-(void)_updateBadgeAndCancelPreviousUpdate;
-(void)dealloc;
-(void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(NSInteger)arg0 ;
-(void)updateBadgeForUnreadCountChangeIfNeeded:(NSInteger)arg0 ;


@end


#endif