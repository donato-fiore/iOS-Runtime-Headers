// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPAPPLICATIONIDENTIFICATION_H
#define LPAPPLICATIONIDENTIFICATION_H


#import <Foundation/Foundation.h>


@interface LPApplicationIdentification : NSObject



+(BOOL)hasClipServicesEntitlement;
+(BOOL)isCNNMobile;
+(BOOL)isMessages;
+(BOOL)isMessagesOrMessagesViewService;
+(BOOL)isMessagesViewService;
+(BOOL)isMobileNotes;
+(BOOL)isMobileReminders;


@end


#endif