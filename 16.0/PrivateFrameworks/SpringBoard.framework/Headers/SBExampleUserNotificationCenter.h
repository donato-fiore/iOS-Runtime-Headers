// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXAMPLEUSERNOTIFICATIONCENTER_H
#define SBEXAMPLEUSERNOTIFICATIONCENTER_H

@class UNUserNotificationCenter, NSString;

#import <Foundation/Foundation.h>


@interface SBExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}


@property (readonly, nonatomic) NSString *latestNotificationRequestIdentifier;
@property (readonly, nonatomic) NSString *sectionIdentifier;


+(id)sharedInstance;
-(id)_existingNotificationRequestForIdentifier:(id)arg0 ;
-(id)_newNotificationRequest:(id)arg0 threadIdentifier:(id)arg1 ;
-(id)_userNotificationCenter;
-(void)_postNotificationWithID:(id)arg0 threadIdentifier:(id)arg1 ;
-(void)publish;
-(void)publish:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)publish:(NSUInteger)arg0 numberOfUniqueThreads:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)publishWithNumberOfUniqueThreads:(NSUInteger)arg0 ;
-(void)removeAllNotifications;
-(void)update;


@end


#endif