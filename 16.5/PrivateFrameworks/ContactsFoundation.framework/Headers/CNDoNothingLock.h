// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDONOTHINGLOCK_H
#define CNDONOTHINGLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface CNDoNothingLock : NSObject <NSLocking>





-(void)lock;
-(void)unlock;


@end


#endif