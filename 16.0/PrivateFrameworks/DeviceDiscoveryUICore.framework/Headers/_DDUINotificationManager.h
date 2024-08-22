// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DDUINOTIFICATIONMANAGER_H
#define _DDUINOTIFICATIONMANAGER_H

@protocol _DDUINotificationPresenterDelegate, _DDUINotificationPresenter;

#import <Foundation/Foundation.h>


@interface _DDUINotificationManager : NSObject <_DDUINotificationPresenterDelegate>



@property (retain, nonatomic) NSObject<_DDUINotificationPresenter> *notificationPresenter; // ivar: _notificationPresenter


-(id)init;
-(void)cancelMessageWithID:(id)arg0 ;
-(void)deepLinkToAppStoreForApplication:(id)arg0 ;
-(void)handleApplicationInfo:(id)arg0 withID:(id)arg1 fromDevice:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif