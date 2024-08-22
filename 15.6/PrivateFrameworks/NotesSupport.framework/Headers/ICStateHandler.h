// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTATEHANDLER_H
#define ICSTATEHANDLER_H


#import <Foundation/Foundation.h>


@interface ICStateHandler : NSObject



+(void)addStateHandlerWithName:(char *)arg0 stateBlock:(id)arg1 ;
+(void)addStateHandlerWithName:(char *)arg0 sysdiagnoseOnly:(BOOL)arg1 stateBlock:(id)arg2 ;


@end


#endif