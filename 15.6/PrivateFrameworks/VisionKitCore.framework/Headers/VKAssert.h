// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKASSERT_H
#define VKASSERT_H


#import <Foundation/Foundation.h>


@interface VKAssert : NSObject



+(void)handleFailedAssertWithCondition:(char *)arg0 functionName:(char *)arg1 simulateCrash:(BOOL)arg2 showAlert:(BOOL)arg3 alertMessage:(id)arg4 format:(id)arg5 ;
+(void)handleFailedAssertWithCondition:(char *)arg0 functionName:(char *)arg1 simulateCrash:(BOOL)arg2 showAlert:(BOOL)arg3 format:(id)arg4 ;


@end


#endif