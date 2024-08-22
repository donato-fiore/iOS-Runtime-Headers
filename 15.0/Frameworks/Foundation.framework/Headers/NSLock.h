// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLOCK_H
#define NSLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSLock : NSObject <NSLocking>

 {
    *void _priv;
}


@property (copy) NSString *name;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)lockBeforeDate:(id)arg0 ;
-(BOOL)tryLock;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif