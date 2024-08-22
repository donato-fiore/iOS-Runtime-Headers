// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USDISTRIBUTEDNOTIFICATIONCENTER_H
#define USDISTRIBUTEDNOTIFICATIONCENTER_H


#import <Foundation/Foundation.h>


@interface USDistributedNotificationCenter : NSObject



-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)post:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;


@end


#endif