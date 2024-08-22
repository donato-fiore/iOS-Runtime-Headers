// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMBUINOTIFICATIONOBSERVER_H
#define NMBUINOTIFICATIONOBSERVER_H


#import <Foundation/Foundation.h>


@interface NMBUINotificationObserver : NSObject {
    int _notificationToken;
}




-(id)initWithNotificationName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)dealloc;


@end


#endif