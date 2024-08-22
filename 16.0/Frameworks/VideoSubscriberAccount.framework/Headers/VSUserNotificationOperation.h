// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUSERNOTIFICATIONOPERATION_H
#define VSUSERNOTIFICATIONOPERATION_H

@class NSOperation, NSString, NSURL;



@interface VSUserNotificationOperation : NSOperation {
    *__CFUserNotification _notification;
}


@property (copy, nonatomic) NSString *alternateButtonTitle; // ivar: _alternateButtonTitle
@property (copy, nonatomic) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle
@property (copy, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSUInteger response; // ivar: _response
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) *unk userNotificationCancelProc; // ivar: _userNotificationCancelProc
@property (nonatomic) *unk userNotificationCreateProc; // ivar: _userNotificationCreateProc
@property (nonatomic) *unk userNotificationReceiveResponseProc; // ivar: _userNotificationReceiveResponseProc


-(id)init;
-(void)cancel;
-(void)main;


@end


#endif