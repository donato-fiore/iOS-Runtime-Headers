// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKLOGINSUPPORT_H
#define LKLOGINSUPPORT_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface LKLoginSupport : NSObject

@property (retain, nonatomic) NSOperationQueue *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSOperationQueue *listenerQueue; // ivar: _listenerQueue


+(BOOL)hasCleanUser;
+(BOOL)isNewUserAbleToLogin;
+(id)findLeastRecentlyUsedCleanUser;
-(id)_errorForNotificationType:(NSUInteger)arg0 ;
-(id)_notificationForNotificationType:(NSUInteger)arg0 ;
-(id)init;
-(void)_runWhenDarwinNotificationPosted:(NSUInteger)arg0 timeOutPeriod:(CGFloat)arg1 block:(id)arg2 ;
-(void)_runWithTimeOutPeriod:(CGFloat)arg0 notificationType:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)_timeOutAfterTimePeriod:(CGFloat)arg0 withError:(id)arg1 block:(id)arg2 ;
-(void)runWithTimeOutPeriod:(CGFloat)arg0 loggedInBlock:(id)arg1 ;
-(void)runWithTimeOutPeriod:(CGFloat)arg0 readyToLoginBlock:(id)arg1 ;


@end


#endif