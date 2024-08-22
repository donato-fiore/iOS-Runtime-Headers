// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIMESSAGECONTEXT_H
#define AXUIMESSAGECONTEXT_H

@class AXAccessQueue;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AXUIMessageContext : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) BOOL completionRequiresWritingBlock; // ivar: _completionRequiresWritingBlock
@property (nonatomic) *void context; // ivar: _context
@property (retain, nonatomic) AXAccessQueue *targetAccessQueue; // ivar: _targetAccessQueue
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // ivar: _xpcMessage




@end


#endif