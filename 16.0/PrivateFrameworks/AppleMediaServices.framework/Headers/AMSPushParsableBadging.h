// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPUSHPARSABLEBADGING_H
#define AMSPUSHPARSABLEBADGING_H

@class NSString;
@protocol AMSPushParsable;

#import <Foundation/Foundation.h>


@interface AMSPushParsableBadging : NSObject <AMSPushParsable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldSkipAccountCheck;
+(void)_performLegacyCallbackWithRequest:(id)arg0 payload:(id)arg1 config:(id)arg2 bag:(id)arg3 error:(*id)arg4 ;
+(void)handleNotificationPayload:(id)arg0 config:(id)arg1 bag:(id)arg2 ;


@end


#endif