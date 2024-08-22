// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCREBOOTSTRAPNOTIFIER_H
#define ASCREBOOTSTRAPNOTIFIER_H


#import <Foundation/Foundation.h>


@interface ASCRebootstrapNotifier : NSObject

@property (nonatomic) NSUInteger rebootstrapCounterSnapshot; // ivar: _rebootstrapCounterSnapshot
@property (readonly, nonatomic) int token; // ivar: _token


+(id)sharedNotifier;
-(id)_initSingleton;
-(void)dealloc;
-(void)postLocalNotification;
-(void)postLocalNotificationIfNeeded;


@end


#endif