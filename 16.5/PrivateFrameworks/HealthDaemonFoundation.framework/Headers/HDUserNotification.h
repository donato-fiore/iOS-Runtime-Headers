// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERNOTIFICATION_H
#define HDUSERNOTIFICATION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HDUserNotification : NSObject

@property (copy, nonatomic) NSDictionary *additionalDescriptors; // ivar: _additionalDescriptors
@property (nonatomic) NSInteger alertLevel; // ivar: _alertLevel
@property (copy, nonatomic) NSString *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) NSString *defaultButton; // ivar: _defaultButton
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) *__CFUserNotification notification; // ivar: _notification
@property (copy, nonatomic) NSString *otherButton; // ivar: _otherButton
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger userNotificationOptions; // ivar: _userNotificationOptions


-(void)_handleResponse:(NSUInteger)arg0 ;
-(void)presentWithResponseHandler:(id)arg0 ;


@end


#endif