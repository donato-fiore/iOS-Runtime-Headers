// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTODARWINNOTIFICATIONOBSERVER_H
#define NPTODARWINNOTIFICATIONOBSERVER_H


#import <Foundation/Foundation.h>


@interface NPTODarwinNotificationObserver : NSObject {
    int _notificationToken;
}




-(id)initWithNotificationName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)dealloc;


@end


#endif