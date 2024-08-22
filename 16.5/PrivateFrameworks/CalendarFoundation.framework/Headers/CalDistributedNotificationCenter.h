// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDISTRIBUTEDNOTIFICATIONCENTER_H
#define CALDISTRIBUTEDNOTIFICATIONCENTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CalDistributedNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlers; // ivar: _handlers


+(id)defaultCenter;
+(void)_handleNotification:(id)arg0 ;
+(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 ;
+(void)removeObserver:(id)arg0 ;
+(void)removeObserver:(id)arg0 name:(id)arg1 ;
-(id)init;


@end


#endif