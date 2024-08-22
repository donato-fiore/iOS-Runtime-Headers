// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKINOTEBOOKINVOCATION_H
#define SKINOTEBOOKINVOCATION_H


#import <Foundation/Foundation.h>


@interface SKINotebookInvocation : NSObject



+(id)announceRemindersRequestFromNotificationIdentifier:(id)arg0 fromApp:(id)arg1 synchronousBurstIndex:(id)arg2 ;
+(id)announceRemindersRequestFromNotificationIdentifier:(id)arg0 fromApp:(id)arg1 synchronousBurstIndex:(id)arg2 isSameTypeAsLastAnnouncement:(BOOL)arg3 appBundleIdOfLastAnnouncement:(id)arg4 timeSinceLastAnnouncement:(CGFloat)arg5 ;


@end


#endif