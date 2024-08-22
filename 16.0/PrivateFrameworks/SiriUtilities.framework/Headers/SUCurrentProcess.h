// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCURRENTPROCESS_H
#define SUCURRENTPROCESS_H


#import <Foundation/Foundation.h>

#import "SUIdleTracker.h"

@interface SUCurrentProcess : NSObject {
    ? mock;
    ? _idleTracker;
}


@property (nonatomic, retain) SUIdleTracker *idleTracker;


+(id)default;
-(id)init;


@end


#endif