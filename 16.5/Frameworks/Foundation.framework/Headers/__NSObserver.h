// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSOBSERVER_H
#define __NSOBSERVER_H


#import <Foundation/Foundation.h>

#import "NSNotificationCenter.h"

@interface __NSObserver : NSObject {
    NSNotificationCenter *nc;
}


@property (copy) id *block; // ivar: _block
@property NSUInteger token; // ivar: _token


-(void)dealloc;


@end


#endif