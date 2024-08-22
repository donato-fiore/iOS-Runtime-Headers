// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYRECIPIENTMANAGER_H
#define _UIACTIVITYRECIPIENTMANAGER_H


#import <Foundation/Foundation.h>


@interface _UIActivityRecipientManager : NSObject



+(void)requestMailRecipientsForSessionID:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestMessagesRecipientInfoForSessionID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif