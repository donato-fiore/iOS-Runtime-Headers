// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMALLOCTRACKING_H
#define IMALLOCTRACKING_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMAllocTracking : NSObject {
    NSMutableArray *_callStacks;
}




-(id)retain;
-(void)_registerCallstack;
-(void)dealloc;
-(void)release;


@end


#endif