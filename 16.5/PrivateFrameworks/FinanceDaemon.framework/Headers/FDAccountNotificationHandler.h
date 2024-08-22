// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FDACCOUNTNOTIFICATIONHANDLER_H
#define FDACCOUNTNOTIFICATIONHANDLER_H


#import <Foundation/Foundation.h>

#import "_TtC13FinanceDaemon26AccountNotificationHandler.h"

@interface FDAccountNotificationHandler : NSObject {
    _TtC13FinanceDaemon26AccountNotificationHandler *_wrappedHandler;
}




-(id)init;
-(void)primaryAppleAccountWasAdded;
-(void)primaryAppleAccountWasDeleted;


@end


#endif