// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSALERTMANAGER_H
#define MSALERTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MSAlertManager : NSObject {
    NSMutableDictionary *_personIDToNotification;
}




+(id)sharedAlertManager;
-(id)init;
-(void)_dismissNotificationForPersonID:(id)arg0 ;
-(void)_showNotificationInfo:(id)arg0 ;
-(void)_userDidRespondToNotification:(struct __CFUserNotification *)arg0 info:(id)arg1 responseFlags:(NSUInteger)arg2 ;
-(void)displayAlertForPersonID:(id)arg0 notificationDict:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif