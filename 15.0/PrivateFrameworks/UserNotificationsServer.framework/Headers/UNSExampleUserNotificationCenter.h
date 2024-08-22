// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSEXAMPLEUSERNOTIFICATIONCENTER_H
#define UNSEXAMPLEUSERNOTIFICATIONCENTER_H

@class UNUserNotificationCenter, PTTestRecipe;

#import <Foundation/Foundation.h>


@interface UNSExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}




-(id)_basicPostUpdateRecipe;
-(id)_existingNotificationRequestForIdentifier:(id)arg0 ;
-(id)_newNotificationRequest:(id)arg0 threadIdentifier:(id)arg1 ;
-(id)_userNotificationCenter;
-(id)init;
-(id)latestNotificationRequestIdentifier;
-(id)sectionIdentifier;
-(void)_postNotificationWithID:(id)arg0 threadIdentifier:(id)arg1 ;
-(void)publish;
-(void)publish:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)publish:(NSUInteger)arg0 numberOfUniqueThreads:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)publishWithNumberOfUniqueThreads:(NSUInteger)arg0 ;
-(void)removeAllNotifications;
-(void)update;


@end


#endif