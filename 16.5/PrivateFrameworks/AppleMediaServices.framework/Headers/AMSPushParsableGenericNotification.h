// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPUSHPARSABLEGENERICNOTIFICATION_H
#define AMSPUSHPARSABLEGENERICNOTIFICATION_H

@class NSString;
@protocol AMSPushParsable;

#import <Foundation/Foundation.h>


@interface AMSPushParsableGenericNotification : NSObject <AMSPushParsable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldPresentAlertForPayload:(id)arg0 ;
+(id)_generateDialogRequestFromPayload:(id)arg0 config:(id)arg1 ;
+(id)_generateNotificationFromPayload:(id)arg0 config:(id)arg1 ;
+(void)handleNotificationPayload:(id)arg0 config:(id)arg1 bag:(id)arg2 ;


@end


#endif