// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCONCE_H
#define RCONCE_H


#import <Foundation/Foundation.h>

#import "RCMutexLock.h"

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished; // ivar: _finished
@property (retain, nonatomic) RCMutexLock *lock; // ivar: _lock


-(BOOL)hasBeenTriggered;
-(BOOL)trigger;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)executeOnce:(id)arg0 ;


@end


#endif