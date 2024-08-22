// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSANDBOX_H
#define PLSANDBOX_H


#import <Foundation/Foundation.h>


@interface PLSandbox : NSObject



+(BOOL)isCurrentProcessInSandbox;
+(NSInteger)checkOperation:(id)arg0 forPath:(id)arg1 ;


@end


#endif