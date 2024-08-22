// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCURATIONDEBUGSTATEENTRY_H
#define CLSCURATIONDEBUGSTATEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLSCurationDebugStateEntry : NSObject

@property (readonly) NSString *agent; // ivar: _agent
@property (readonly) NSString *reason; // ivar: _reason
@property (readonly) NSString *stage; // ivar: _stage
@property (readonly) NSUInteger state; // ivar: _state


-(id)initWithState:(NSUInteger)arg0 reason:(id)arg1 agent:(id)arg2 stage:(id)arg3 ;


@end


#endif