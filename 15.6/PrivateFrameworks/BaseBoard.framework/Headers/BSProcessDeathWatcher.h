// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSPROCESSDEATHWATCHER_H
#define BSPROCESSDEATHWATCHER_H


#import <Foundation/Foundation.h>

#import "BSDispatchSource.h"

@interface BSProcessDeathWatcher : NSObject {
    BSDispatchSource *_source;
    id *_deathHandler;
}




-(id)initWithPID:(int)arg0 queue:(id)arg1 deathHandler:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif