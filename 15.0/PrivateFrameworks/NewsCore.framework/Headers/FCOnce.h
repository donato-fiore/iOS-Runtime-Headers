// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCONCE_H
#define FCONCE_H

@class NFUnfairLock;

#import <Foundation/Foundation.h>


@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}




-(BOOL)hasBeenTriggered;
-(BOOL)trigger;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)executeOnce:(id)arg0 ;


@end


#endif