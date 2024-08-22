// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSNFCCODEPARSER_H
#define BCSNFCCODEPARSER_H


#import <Foundation/Foundation.h>

#import "BCSNotificationServiceConnection.h"

@interface BCSNFCCodeParser : NSObject {
    BCSNotificationServiceConnection *_notificationServiceConnection;
}




-(void)postNotificationForURL:(id)arg0 payload:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif