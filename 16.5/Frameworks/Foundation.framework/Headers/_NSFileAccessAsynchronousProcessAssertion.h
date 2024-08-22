// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSFILEACCESSASYNCHRONOUSPROCESSASSERTION_H
#define _NSFILEACCESSASYNCHRONOUSPROCESSASSERTION_H

@class BKSProcessAssertion;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {
    NSString *_name;
    BKSProcessAssertion *_assertion;
}


@property (readonly) int PID; // ivar: _pid


-(id)initWithPID:(int)arg0 name:(id)arg1 ;
-(void)beginAssertion;
-(void)dealloc;
-(void)invalidate;


@end


#endif