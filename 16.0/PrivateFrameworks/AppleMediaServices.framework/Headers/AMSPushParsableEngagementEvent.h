// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPUSHPARSABLEENGAGEMENTEVENT_H
#define AMSPUSHPARSABLEENGAGEMENTEVENT_H

@class NSString;
@protocol AMSPushParsable;

#import <Foundation/Foundation.h>


@interface AMSPushParsableEngagementEvent : NSObject <AMSPushParsable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldSkipAccountCheck;
+(id)_eventForMapiPayload:(id)arg0 account:(id)arg1 bag:(id)arg2 ;
+(id)_eventForStaticAssetPayload:(id)arg0 bag:(id)arg1 ;
+(void)_waitForPromises:(id)arg0 completion:(id)arg1 ;
+(void)handleNotificationPayload:(id)arg0 config:(id)arg1 bag:(id)arg2 ;


@end


#endif