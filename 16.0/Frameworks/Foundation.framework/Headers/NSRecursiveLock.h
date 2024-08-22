// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSRECURSIVELOCK_H
#define NSRECURSIVELOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSRecursiveLock : NSObject <NSLocking>

 {
    ? _priv;
}


@property (copy) NSString *name;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isLocking;
-(BOOL)lockBeforeDate:(id)arg0 ;
-(BOOL)tryLock;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif