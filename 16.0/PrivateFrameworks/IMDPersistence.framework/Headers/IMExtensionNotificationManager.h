// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMEXTENSIONNOTIFICATIONMANAGER_H
#define IMEXTENSIONNOTIFICATIONMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMExtensionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *notificationsContext; // ivar: _notificationsContext


+(id)sharedInstance;
-(BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)arg0 ;
-(BOOL)shouldRetractedMessageForBalloonBundleID:(id)arg0 ;
-(id)init;
-(id)notificationCategories;
-(void)populateUserInfoForNotificationContent:(id)arg0 messageBalloonBundleID:(id)arg1 payloadData:(id)arg2 ;


@end


#endif