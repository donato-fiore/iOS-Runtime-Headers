// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONDITION_H
#define NSCONDITION_H

@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSCondition : NSObject <NSLocking>

 {
    _opaque_pthread_mutex_t m;
    _opaque_pthread_cond_t c;
    NSString *n;
}


@property (copy) NSString *name;


-(BOOL)waitUntilDate:(id)arg0 ;
-(id)description;
-(id)init;
-(void)broadcast;
-(void)dealloc;
-(void)lock;
-(void)signal;
-(void)unlock;
-(void)wait;


@end


#endif