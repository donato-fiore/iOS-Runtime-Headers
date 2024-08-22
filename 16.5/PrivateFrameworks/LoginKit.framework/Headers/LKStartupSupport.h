// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LKSTARTUPSUPPORT_H
#define LKSTARTUPSUPPORT_H


#import <Foundation/Foundation.h>


@interface LKStartupSupport : NSObject



+(BOOL)inUserSessionLoginUI;
+(void)postStartupActions;
+(void)postStartupTransitionActions;


@end


#endif