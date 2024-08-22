// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUUSERALERT_H
#define CUUSERALERT_H

@class NSString, NSBundle;
@protocol CUActivatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUUserAlert : NSObject <CUActivatable>

 {
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
@property (copy, nonatomic) NSBundle *localizationBundle; // ivar: _localizationBundle
@property (copy, nonatomic) NSString *localizationTableName; // ivar: _localizationTableName
@property (copy, nonatomic) NSString *subtitleKey; // ivar: _subtitleKey
@property (copy, nonatomic) NSString *subtitleParameter; // ivar: _subtitleParameter
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds
@property (copy, nonatomic) NSString *titleKey; // ivar: _titleKey
@property (copy, nonatomic) NSString *titleParameter; // ivar: _titleParameter


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_autoInvalidate;
-(void)_invalidated;
-(void)_responseCallback:(struct __CFUserNotification *)arg0 responseFlags:(NSUInteger)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif