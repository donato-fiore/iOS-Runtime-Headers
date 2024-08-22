// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSLOCK_H
#define NSLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSLock : NSObject <NSLocking>

 {
    ? _priv;
}


@property (copy) NSString *name;


-(BOOL)lockBeforeDate:(id)arg0 ;
-(BOOL)tryLock;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif