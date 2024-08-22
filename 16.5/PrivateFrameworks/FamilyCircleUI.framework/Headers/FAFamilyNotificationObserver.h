// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYNOTIFICATIONOBSERVER_H
#define FAFAMILYNOTIFICATIONOBSERVER_H


#import <Foundation/Foundation.h>


@interface FAFamilyNotificationObserver : NSObject {
    BOOL _observing;
    id *_notificationHandler;
}




+(id)familyNotificationObserverWithNotificationHandler:(id)arg0 ;
+(void)initialize;
-(id)_initWithNotificationHandler:(id)arg0 ;
-(id)init;
-(void)_didReceiveNotification;
-(void)_startObserving;
-(void)dealloc;
-(void)stopObserving;


@end


#endif