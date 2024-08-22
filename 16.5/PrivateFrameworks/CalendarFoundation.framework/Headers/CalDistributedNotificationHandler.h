// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDISTRIBUTEDNOTIFICATIONHANDLER_H
#define CALDISTRIBUTEDNOTIFICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface CalDistributedNotificationHandler : NSObject {
    SEL _selector;
}


@property (readonly, weak) id *observer; // ivar: _observer


-(BOOL)handleNotification:(id)arg0 ;
-(id)initWithObserver:(id)arg0 selector:(SEL)arg1 ;


@end


#endif