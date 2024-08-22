// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFNOTIFICATIONCENTER_H
#define CARPFNOTIFICATIONCENTER_H


#import <Foundation/Foundation.h>


@interface CARPFNotificationCenter : NSObject



+(id)defaultCenter;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotification:(id)arg0 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 object:(id)arg2 ;


@end


#endif