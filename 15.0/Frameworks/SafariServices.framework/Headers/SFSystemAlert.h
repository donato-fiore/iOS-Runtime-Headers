// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSYSTEMALERT_H
#define SFSYSTEMALERT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFSystemAlert : NSObject {
    *__CFUserNotification _cfNotification;
    *__CFRunLoopSource _cfRunloopSource;
    NSString *_title;
    NSString *_message;
    NSString *_affirmativeButtonTitle;
    NSString *_negativeButtonTitle;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock


+(id)_displayNameForBundleID:(id)arg0 ;
+(id)readingListAlertForDomain:(id)arg0 appBundleID:(id)arg1 ;
+(id)searchEngineSettingAlert;
+(id)webAuthenticationAlertForDomain:(id)arg0 appBundleID:(id)arg1 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 affirmativeButtonTitle:(id)arg2 negativeButtonTitle:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)scheduleWithCompletionBlock:(id)arg0 ;


@end


#endif