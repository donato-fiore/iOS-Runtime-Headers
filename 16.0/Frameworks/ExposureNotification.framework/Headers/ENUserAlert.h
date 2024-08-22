// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENUSERALERT_H
#define ENUSERALERT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENUserAlert : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _dismissed;
    *__CFUserNotification _userNotification;
    *__CFRunLoopSource _userRLS;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (copy, nonatomic) NSString *alternativeButtonTitleKey; // ivar: _alternativeButtonTitleKey
@property (copy, nonatomic) NSString *defaultButtonTitleKey; // ivar: _defaultButtonTitleKey
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL showOnLockScreen; // ivar: _showOnLockScreen
@property (copy, nonatomic) NSString *subTitleKey; // ivar: _subTitleKey
@property (copy, nonatomic) NSObject *subTitleParameter; // ivar: _subTitleParameter
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds
@property (copy, nonatomic) NSString *titleKey; // ivar: _titleKey
@property (copy, nonatomic) NSString *titleParameter; // ivar: _titleParameter


-(id)init;
-(void)_activateWithCompletionHandler:(id)arg0 ;
-(void)_autoInvalidate;
-(void)_invalidated;
-(void)_responseCallback:(struct __CFUserNotification *)arg0 responseFlags:(NSUInteger)arg1 ;
-(void)activateWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif