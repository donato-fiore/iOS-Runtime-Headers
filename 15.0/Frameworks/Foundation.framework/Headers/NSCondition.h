// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONDITION_H
#define NSCONDITION_H

@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSCondition : NSObject <NSLocking>

 {
    *void _priv;
}


@property (copy) NSString *name;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
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